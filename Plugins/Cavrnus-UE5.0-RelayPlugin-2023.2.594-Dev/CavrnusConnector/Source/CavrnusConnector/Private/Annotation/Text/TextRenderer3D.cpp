// Fill out your copyright notice in the Description page of Project Settings.


#include "Annotation/Text/TextRenderer3D.h"
#include "Annotation/Text/TextAnnotationWidget.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStatics.h"
#include <Components/StaticMeshComponent.h>

UTextRenderer3D::UTextRenderer3D()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UTextRenderer3D::SetAnnotationText(const FString& InText)
{
	if (AnnotationWidget)
	{
		AnnotationWidget->SetAnnotationText(InText);
	}
}

void UTextRenderer3D::SetAnnotationTextColor(const FLinearColor& InColor)
{
	if (AnnotationWidget)
	{
		AnnotationWidget->SetAnnotationTextColor(InColor);
	}
}

void UTextRenderer3D::BeginPlay()
{
	Super::BeginPlay();

	SpringArm = NewObject<UStaticMeshComponent>(this);
	SpringArm->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);
	SpringArm->SetRelativeLocation(FVector(0));
	SpringArm->SetStaticMesh(StickMesh);
	SpringArm->RegisterComponent();
	SpringArm->SetRelativeScale3D(FVector(.5f, .5f, .5f));

	TextWidgetComponent = NewObject<UWidgetComponent>(this);
	TextWidgetComponent->AttachToComponent(SpringArm, FAttachmentTransformRules::KeepRelativeTransform);
	TextWidgetComponent->SetRelativeLocation(FVector(0, 0, 100));
	TextWidgetComponent->SetRelativeScale3D(FVector(2, -2, 2));
	TextWidgetComponent->SetWidgetClass(TextWidgetClass);
	TextWidgetComponent->SetDrawSize(FVector2D(1920, 1080));
	TextWidgetComponent->SetWidgetSpace(EWidgetSpace::World);
	TextWidgetComponent->InitWidget();
	TextWidgetComponent->UpdateWidget();
	TextWidgetComponent->RegisterComponent();

	AnnotationWidget = Cast<UTextAnnotationWidget>(TextWidgetComponent->GetUserWidgetObject());

	UserActor = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	RecalculateScale();
}

void UTextRenderer3D::TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!UserActor || !TextWidgetComponent)
	{
		return;
	}

	const FRotator LookAt = FRotationMatrix::MakeFromX(UserActor->GetActorLocation() - GetComponentLocation()).
		Rotator();
	const float Pitch = UserActor->GetActorRotation().Pitch;
	TextWidgetComponent->SetWorldRotation(FRotator(-Pitch, LookAt.Yaw, 0.f).Quaternion());
}

void UTextRenderer3D::DestroyAnnotation()
{
	TextWidgetComponent->DestroyComponent();
	SpringArm->DestroyComponent();
}

void UTextRenderer3D::UpdateScale()
{
	RecalculateScale();
}

void UTextRenderer3D::RecalculateScale()
{
	const FVector ParentScale = GetAttachParent()->GetComponentScale();
	SpringArm->SetWorldScale3D(ParentScale / (2 * ParentScale));
	TextWidgetComponent->SetWorldScale3D(ParentScale / (40 * ParentScale));
}
