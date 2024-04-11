// Fill out your copyright notice in the Description page of Project Settings.

#include "NoMesh/NoMeshObject.h"

#include <Components/TextRenderComponent.h>
#include <Components/WidgetComponent.h>
#include <Engine/Canvas.h>
#include <Engine/CanvasRenderTarget2D.h>
#include <HAL/FileManager.h>
#include <Kismet/KismetSystemLibrary.h>
#include <Materials/MaterialInstanceDynamic.h>
#include <Engine/StaticMesh.h>
#include <TextureResource.h>
#include <Components/StaticMeshComponent.h>
#include <Components/TextBlock.h>
#include <Misc/FileHelper.h>
#include <Modules/ModuleManager.h>

#include "CavrnusSpatialConnectorSubSystem.h"
#include "CavrnusConnectorModule.h"
#include "CavrnusFunctionLibrary.h"
#include "Annotation/AnnotationCanvasRenderTarget2D.h"
#include "Annotation/Line/LineRenderer2D.h"
#include "Annotation/Text/AnnotationTextItem.h"
#include "Annotation/Text/TextRenderer2D.h"
#include "Annotation/IAnnotation.h"
#include "CavrnusPropertiesContainer.h"

#define TEXT_RENDER_TARGET_RES_MULTIPLIER 1

// Sets default values
ANoMeshObject::ANoMeshObject(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = false;

	RootContainer = CreateDefaultSubobject<USceneComponent>(FName("RootContainer"));
	SetRootComponent(RootContainer);

	ContentScale = FVector2D(1.0f);
	CavrnusScale = FVector(1.0f, 1.0f, 1.0f);

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(FName("Mesh"));
	MeshComponent->SetupAttachment(RootContainer);
	MeshComponent->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	UCavrnusPropertiesContainer* PropertiesContainer = CreateDefaultSubobject<UCavrnusPropertiesContainer>(FName("PropertiesContainer"));
	PropertiesContainer->SetupAttachment(RootContainer);
}

void ANoMeshObject::BeginPlay()
{
	Super::BeginPlay();

	OnSpaceConnected.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(ANoMeshObject, SpaceConnected));
	UCavrnusFunctionLibrary::AwaitAnySpaceConnection(OnSpaceConnected);

	ContentMaterial = MeshComponent->GetMaterial(0);

	MainRenderTarget = UCanvasRenderTarget2D::CreateCanvasRenderTarget2D(
		GetWorld(), UCanvasRenderTarget2D::StaticClass(),
		1024 * TEXT_RENDER_TARGET_RES_MULTIPLIER, 768 * TEXT_RENDER_TARGET_RES_MULTIPLIER);
	MainRenderTarget->OnCanvasRenderTargetUpdate.AddDynamic(this, &ANoMeshObject::OnMainRenderTargetUpdated);

	AnnosRenderTarget = Cast<UAnnotationCanvasRenderTarget2D>(UCanvasRenderTarget2D::CreateCanvasRenderTarget2D(
		GetWorld(), UAnnotationCanvasRenderTarget2D::StaticClass(),
		1024 * TEXT_RENDER_TARGET_RES_MULTIPLIER, 768 * TEXT_RENDER_TARGET_RES_MULTIPLIER));
}

void ANoMeshObject::SpaceConnected(FCavrnusSpaceConnection SpaceConn)
{
	SpaceConnection = SpaceConn;
}

void ANoMeshObject::UpdateResources()
{
	if (!MaterialInstance)
	{
		MaterialInstance = UMaterialInstanceDynamic::Create(ContentMaterial, this);
		if (!TextureRenderTarget)
		{
			FMaterialParameterInfo Param;
			Param.Name = TEXT("RenderTarget");
			TextureRenderTarget = nullptr;
			MaterialInstance->GetTextureParameterValue(Param, TextureRenderTarget, false);
		}
	}

	MaterialInstance->SetTextureParameterValue(FName(TEXT("RenderTarget")), MainRenderTarget);
	MeshComponent->SetMaterial(0, MaterialInstance);

	MainRenderTarget->ClearColor = FLinearColor(0.f, 0.f, 0.f, 1.f);
	MainRenderTarget->UpdateResource();

	AnnosRenderTarget->ClearColor = FLinearColor(0.f, 0.f, 0.f, 0.f);
	AnnosRenderTarget->InitResources(MaterialInstance);
}

void ANoMeshObject::AdjustAspectRatio()
{
	if (TextureRenderTarget)
	{
		float TargetAspectRatio = GetDesiredAspectRatio(); // Potentially scaled aspect ratio with content.
		float WidthScale = TargetAspectRatio / InitialAspectRatio;

		// Need to flip X and Y axes to account for the rotation of the mesh component
		FVector Scl = FVector(CavrnusScale.Y, CavrnusScale.X, CavrnusScale.Z) * FVector(WidthScale, 1, 1);
		MeshComponent->SetRelativeScale3D(Scl);
	}
}

float ANoMeshObject::GetDesiredAspectRatio() const
{
	if (TextureRenderTarget)
	{
		return TextureRenderTarget->GetSurfaceWidth() / TextureRenderTarget->GetSurfaceHeight();
	}

	return 1.68f; // Template mesh's aspect ratio.
}

void ANoMeshObject::OnMainRenderTargetUpdated(UCanvas* Canvas, int32 Width, int32 Height)
{
	Canvas->K2_DrawTexture(TextureRenderTarget, FVector2D(), FVector2D(Width, Height), FVector2D());
}

bool ANoMeshObject::IsAnyAnnotationRendered() const
{
	TArray<UObject*> Values;
	ObjectAnnotations.GenerateValueArray(Values);
	UObject** RenderedAnnotation = Values.FindByPredicate(
		[](UObject* Element) {
			return Cast<IAnnotation>(Element)->Rendered;
		});

	return RenderedAnnotation != nullptr;
}

void ANoMeshObject::DestroyDecryptedResources(const FString& Path)
{
	IFileManager& FileManager = IFileManager::Get();
	FString TempDir = FPaths::GetPath(Path);

	if (!FileManager.DirectoryExists(*TempDir))
	{
		UE_LOG(LogCavrnusConnector, Error, TEXT("Temp folder \"%s\" does not exist"), *TempDir);
		return;
	}

	FString CachePath = FPlatformProcess::UserTempDir();
	if (CachePath.IsEmpty())
	{
		UE_LOG(LogCavrnusConnector, Error, TEXT("Cavrnus cache path can't be empty !"));
		return;
	}

	if (!FPaths::IsUnderDirectory(TempDir, CachePath))
	{
		UE_LOG(LogCavrnusConnector, Error, TEXT("Given Temp folder %s is not under Cavrnus cache path %s"), *TempDir, *CachePath);
		return;
	}

	FileManager.DeleteDirectory(*TempDir, true, true);
}

class UObject* ANoMeshObject::CreateTextAnnotationComponent(TextAnnotationData* Text, USceneComponent* Parent)
{
	if (Text->ID.IsEmpty())
	{
		return nullptr;
	}

	UTextRenderer2D* TextAnnotationComponent = NewObject<UTextRenderer2D>(this);
	if (TextAnnotationComponent)
	{
		TextAnnotationComponent->Time = Text->Time;
		TextAnnotationComponent->FrameStart = Text->VisibleWithingState.FrameStart;
		TextAnnotationComponent->VisibleAtFrame = Text->VisibleWithingState.Frame;

		TextAnnotationComponent->SetPosition(
			FVector2D(Text->AnchorPosition.X / AspectRatio, 1.f - Text->AnchorPosition.Y),
			AnnosRenderTarget->GetSurfaceWidth(),
			AnnosRenderTarget->GetSurfaceHeight());

		TextAnnotationComponent->SetPosition(
			FVector2D(
				TextAnnotationComponent->GetPosition().X,
				TextAnnotationComponent->GetPosition().Y - AnnosRenderTarget->GetSurfaceHeight() / 30.f));

		TextAnnotationComponent->SetTextSize(Text->Height);
		TextAnnotationComponent->SetAnnotationText(Text->Text);
		TextAnnotationComponent->SetAnnotationTextColor(Text->Color);

		const FVector2D CS = GetContentScale();
		const FVector2D AbsDeltaScale = (CS - FVector2D(1.f)).GetAbs();
		TextAnnotationComponent->Scale = CS + AbsDeltaScale;
	}

	return TextAnnotationComponent;
}

class UObject* ANoMeshObject::CreateLineAnnotationComponent(LineAnnotationData* Line, USceneComponent* Parent)
{
	ULineRenderer2D* NewLine = NewObject<ULineRenderer2D>(this);
	NewLine->FrameStart = Line->VisibleWithingState.FrameStart;
	NewLine->VisibleAtFrame = Line->VisibleWithingState.Frame;
	NewLine->Time = Line->Time;
	NewLine->Init(
		Line->Points,
		Line->Color,
		Line->Width,
		AnnosRenderTarget->GetSurfaceWidth(),
		AnnosRenderTarget->GetSurfaceHeight(),
		AspectRatio);

	return NewLine;
}

void ANoMeshObject::MarkDirty(IAnnotation* Annotation, bool Remove)
{
	if (Remove)
	{
		Annotation->Color.A = 0;
		MarkDirty();

		return;
	}

	if (CanBeRendered(Annotation))
	{
		AnnosRenderTarget->RenderAnnotation(Annotation);
	}

	MaterialInstance->SetScalarParameterValue(FName(TEXT("HasAnyAnnotations")), IsAnyAnnotationRendered());
}

void ANoMeshObject::MarkDirty()
{
	AnnosRenderTarget->Cleanup();
	for (const auto& Element : ObjectAnnotations)
	{
		IAnnotation* Interface = Cast<IAnnotation>(Element.Value);
		MarkDirty(Interface);
	}

	MaterialInstance->SetScalarParameterValue(FName(TEXT("HasAnyAnnotations")), IsAnyAnnotationRendered());
}

void ANoMeshObject::SetNewComponentMaterial(FString ComponentId, UMaterialInstanceDynamic* NewMaterial)
{
	MeshComponent->SetMaterial(0, NewMaterial);
}

void ANoMeshObject::Remove()
{
	if (UCavrnusSpatialConnectorSubSystemProxy* SubProxy = UCavrnusFunctionLibrary::GetCavrnusSpatialConnectorSubSystemProxy())
	{
		FCavrnusSpawnedObject SpawnedObject = SubProxy->GetSpawnedObject(this);
		if (!SpawnedObject.PropertiesContainerName.IsEmpty())
		{
			UCavrnusFunctionLibrary::DestroyObject(SpawnedObject);
		}
	}
}

void ANoMeshObject::CreateContent(const FString& ContentPath)
{
	UpdateResources();
	OnContentCreated.ExecuteIfBound(this, ContentPath);
}
