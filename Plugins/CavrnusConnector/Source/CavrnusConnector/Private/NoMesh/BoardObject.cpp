// Fill out your copyright notice in the Description page of Project Settings.

#include "NoMesh/BoardObject.h"

#include "CavrnusConnectorModule.h"
#include "UI/NoMesh/BoardHandle.h"
#include "UI/NoMesh/BoardHeader.h"
#include "UI/NoMesh/NoMeshActionsWidget.h"

#include <Components/SizeBox.h>
#include <Components/CanvasPanelSlot.h>
#include <Components/StaticMeshComponent.h>
#include <Engine/StaticMesh.h>
#include <UObject/ConstructorHelpers.h>

// Sets default values
ABoardObject::ABoardObject(const FObjectInitializer& ObjectInitializer)
		: Super(ObjectInitializer)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	const ConstructorHelpers::FObjectFinder<UStaticMesh> BPMesh(TEXT("StaticMesh'/CavrnusConnector/Assets/SM_Whiteboard.SM_Whiteboard'"));
	if (BPMesh.Succeeded())
	{
		MeshComponent->SetStaticMesh(BPMesh.Object);
	}

	BoardCollision = MeshComponent->GetCollisionEnabled();
}

void ABoardObject::BeginPlay()
{
	Super::BeginPlay();

	// Set widget objects.
	Handles.Empty();
	for (int i = 0; i < WidgetComponents.Num(); i++)
	{
		UUserWidget* Widget = WidgetComponents[i]->GetWidget();

		if (UBoardHandle* Handle = Cast<UBoardHandle>(Widget))
		{
			Handle->Board = this;
			Handles.Add(Handle);
		}
		else if (UBoardHeader* Header = Cast<UBoardHeader>(Widget))
		{
			BoardHeader = Header;
			BoardHeader->Board = this;
		}

		if (UNoMeshActionsWidget* ActionWidget = Cast<UNoMeshActionsWidget>(Widget))
		{
			Actions = ActionWidget;
			Actions->Action.BindLambda([&](FString Action) { OnActionReceived(Action); });
		}

		InitialWidgetLocations.Add(WidgetComponents[i]->GetRelativeLocation());
		InitialWidgetScale.Add(WidgetComponents[i]->GetRelativeScale3D());
	}
}

void ABoardObject::UpdateHandleLocations()
{
	// Handle displacements
	FVector Scl = MeshComponent->GetRelativeScale3D();
	FVector Min, Max;
	MeshComponent->GetLocalBounds(Min, Max);
	FVector Dim = Max - Min;
	FVector Diff = (Dim * Scl - Dim) * 0.5f;

	float WidthDelta = Diff.X;
	float HeightDelta = Diff.Z;
	FVector2D HandleSize = FVector2D(32.0, 310.0);

	for (int i = 0; i < WidgetComponents.Num(); i++)
	{
		ENomeshWidgetType WidgetType = WidgetDeclarations[i];
		UWidgetComponent* WidgetComponent = WidgetComponents[i];
		FVector InitialLoc = InitialWidgetLocations[i];
		FVector InitialScale = InitialWidgetScale[i];

		UUserWidget* Widget = WidgetComponents[i]->GetWidget();
		if (UBoardHandle* Handle = Cast<UBoardHandle>(Widget))
		{
			HandleSize = Handle->GetSize();
		}

		if (WidgetType == ENomeshWidgetType::LeftHandle)
		{
			WidgetComponent->SetRelativeLocation(InitialLoc + FVector(0.0f, WidthDelta, HeightDelta));
			FVector3d BoardScale = MeshComponent->GetRelativeScale3D();
			const double BoardWidth = Dim.Z * BoardScale.Z;
			const double HandleWidth = FMath::Clamp(HandleSize.Y * InitialScale.Z, 0, BoardWidth);
			WidgetComponent->SetRelativeScale3D(FVector3d(InitialScale.X, InitialScale.Y, HandleWidth / HandleSize.Y));
			continue;
		}

		if (WidgetType == ENomeshWidgetType::RightHandle)
		{
			WidgetComponent->SetRelativeLocation(InitialLoc + FVector(0.0f, -WidthDelta, HeightDelta));
			FVector3d BoardScale = MeshComponent->GetRelativeScale3D();
			const double BoardWidth = Dim.Z * BoardScale.Z;
			const double HandleWidth = FMath::Clamp(HandleSize.Y * InitialScale.Z, 0, BoardWidth);
			WidgetComponent->SetRelativeScale3D(FVector3d(InitialScale.X, InitialScale.Y, HandleWidth / HandleSize.Y));
			continue;
		}

		if (WidgetType == ENomeshWidgetType::HeaderBar)
		{
			WidgetComponent->SetRelativeLocation(InitialLoc + FVector(0.0f, 0.0f, HeightDelta * 2.0f));
			if (BoardHeader != nullptr)
			{
				if (BoardHeader->BoardSize != nullptr)
				{
					if (UCanvasPanelSlot* CPanel = Cast<UCanvasPanelSlot>(BoardHeader->BoardSize->Slot))
					{
						FVector2D Size = CPanel->GetSize();
						Size.X = FMath::Clamp<double>(BoardHeader->InitialBoardSize.X * Scl.X, 0.0, GetMax2DTextureDimension());
						CPanel->SetSize(Size);
					}
				}
			}
			continue;
		}

		if (WidgetType == ENomeshWidgetType::BottomHandle)
		{
			FVector3d BoardScale = MeshComponent->GetRelativeScale3D();
			const double BoardWidth = Dim.X * BoardScale.X;
			const double HandleWidth = FMath::Clamp(HandleSize.Y * InitialScale.Z, 0, BoardWidth);
			WidgetComponent->SetRelativeScale3D(FVector3d(InitialScale.X, InitialScale.Y, HandleWidth / HandleSize.Y));
			continue;
		}
	}
}

void ABoardObject::AdjustAspectRatio()
{
	Super::AdjustAspectRatio();
	UpdateHandleLocations();
}

void ABoardObject::DefineWidgets()
{
	for (ENomeshWidgetType Widget : WidgetDeclarations)
	{
		UObject* WidgetObject = GetDefaultSubobjectByName(NoMeshWidgetNames[Widget]);
		if (WidgetObject == nullptr) // Skip if already created.
		{
			UWidgetComponent* WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(NoMeshWidgetNames[Widget]);
			WidgetComponent->SetupAttachment(RootContainer);
			WidgetComponent->SetDrawAtDesiredSize(true);
			WidgetComponents.Add(WidgetComponent);
			BoardHandleCollisions.Add(WidgetComponent->GetName(), WidgetComponent->GetCollisionEnabled());
		}
		else
		{
			if (UWidgetComponent* WidgetComponent = Cast<UWidgetComponent>(WidgetObject))
			{
				WidgetComponents.Add(WidgetComponent);
				BoardHandleCollisions.Add(WidgetComponent->GetName(), WidgetComponent->GetCollisionEnabled());
			}
		}
	}
}

bool ABoardObject::RayCastOnToBoard(FVector& Hit)
{
	UWorld* World = GetWorld();
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(World, 0);
	if (World == nullptr || PlayerController == nullptr)
	{
		UE_LOG(LogCavrnusConnector, Warning, TEXT("NoMesh Raycast Failed."));
		return false;
	}

	FVector2D MPos = UWidgetLayoutLibrary::GetMousePositionOnViewport(World);
	float ViewportScale = UWidgetLayoutLibrary::GetViewportScale(World);

	FVector WorldPosition, WorldDirection;
	if (UGameplayStatics::DeprojectScreenToWorld(PlayerController, MPos * ViewportScale, WorldPosition, WorldDirection))
	{
		FTransform ActorTs = GetTransform();
		FVector ActorForward = GetActorForwardVector();
		FPlane IntersectionPlane = UKismetMathLibrary::MakePlaneFromPointAndNormal(ActorTs.GetLocation(), ActorForward);

		float IntersectDistance = 0.0f;
		FVector Target = WorldDirection * 99999.0f + WorldPosition;
		UKismetMathLibrary::LinePlaneIntersection(WorldPosition, Target, IntersectionPlane, IntersectDistance, Hit);

		return true;
	}

	return false;
}

bool ABoardObject::IsFrameVisible()
{
	bool bIsFrameVisible = !IsHidden();
	return bIsFrameVisible;
}

void ABoardObject::ToggleBoardFrame()
{
	
}

void ABoardObject::ToggleBoardCollisions(bool bIsVisible)
{
	// this check is required as there are multiple triggers sent
	//  as a result of changing the board visibility state
	if (bIsVisible != !IsHidden())
	{
		if (bIsVisible)
		{
			MeshComponent->SetCollisionEnabled(BoardCollision);
		}
		else
		{
			BoardCollision = MeshComponent->GetCollisionEnabled();
			MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}

		// Only need to toggle handle collision enabled state if the frame is visible
		// If the frame is not visible then there will be a /frame/vis property update to
		// toggle the collision state
		if (IsFrameVisible())
		{
			for (UWidgetComponent* Widget : WidgetComponents)
			{
				ToggleBoardHandleCollisions(Widget, bIsVisible);
			}
		}
	}
}

void ABoardObject::ToggleBoardHandleCollisions(UWidgetComponent* Widget, bool bEnableCollisions)
{
	if (bEnableCollisions)
	{
		ECollisionEnabled::Type CollisionEnabled;
		TEnumAsByte<ECollisionEnabled::Type>* CollisionType = BoardHandleCollisions.Find(Widget->GetName());
		if (CollisionType)
		{
			CollisionEnabled = CollisionType->GetValue();
		}
		else
		{
			CollisionEnabled = Widget->GetCollisionEnabled();
		}
		Widget->SetCollisionEnabled(CollisionEnabled);
	}
	else
	{
		Widget->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

// Called every frame
void ABoardObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Drag logic.
	if (IsOnDrag)
	{
		FVector Loc;
		if (RayCastOnToBoard(Loc))
		{
			FVector Delta = Loc - DragPreviousLocation;
			DragPreviousLocation = Loc;

			if (!Delta.IsNearlyZero())
			{
				AddActorWorldOffset(Delta);
				//SendBoardTransform(EPropertyEventType::Transient);
			}
		}
	}
}
