// Fill out your copyright notice in the Description page of Project Settings.

#include "User/PlayerAvatarPawn.h"

// Sets default values
APlayerAvatarPawn::APlayerAvatarPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Current_RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = Current_RootComponent;

	Current_SpringArm_Comp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	Current_SpringArm_Comp->TargetArmLength = 0.0f;
	Current_SpringArm_Comp->TargetOffset = FVector(0, 0, 150.0);
	Current_SpringArm_Comp->SetupAttachment(RootComponent);

	Current_PlayerCamera_Comp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	// Attach to Current_SpringArm_Comp cause camera offset on Unity when following unreal user
	Current_PlayerCamera_Comp->SetupAttachment(Current_SpringArm_Comp);

	Current_AttachToComponent = CreateDefaultSubobject<USceneComponent>(TEXT("AttachComponentPoint"));
	Current_AttachToComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void APlayerAvatarPawn::BeginPlay()
{
	Super::BeginPlay();

	DefaultTransform = FTransform();
}

void APlayerAvatarPawn::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

// Called every frame
void APlayerAvatarPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bLerpMove)
	{
		CurrentLerpTime += DeltaTime;
		float Alpha = CurrentLerpTime / FullLerpTime;

		if (Alpha >= 1.)
		{
			bLerpMove = false;
			SetActorLocation(LerpLocation);
			CurrentLerpTime = .0;
		}
		else
		{
			SetActorLocation(FMath::Lerp<FVector>(StartLocation, LerpLocation, Alpha));
		}
	}
}

// Called to bind functionality to input
void APlayerAvatarPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void APlayerAvatarPawn::LerpMoveTo(FVector Location, float LerpTime)
{
	if (IsMoveInputIgnored())
	{
		return;
	}

	LerpLocation = Location;
	FullLerpTime = LerpTime;
	CurrentLerpTime = .0;
	bLerpMove = true;
	StartLocation = GetActorLocation();
}
