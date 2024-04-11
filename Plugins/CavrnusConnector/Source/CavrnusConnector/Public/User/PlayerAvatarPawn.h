// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ProceduralMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "PlayerAvatarPawn.generated.h"

/**
 * Enum EMultiTouchState , used for save touch input state in controller
 */
UENUM(BlueprintType)
enum class EMultiTouchState : uint8
{
	INDETERMINATE = 0 UMETA(DisplayName = "INDETERMINATE"),
	ZOOM = 1 UMETA(DisplayName = "ZOOM"),
	SWIPE = 2 UMETA(DisplayName = "SWIPE"),
	MOVE = 3 UMETA(DisplayName = "MOVE")
};

/**
 * APlayerAvatarPawn class.
 * Realize user input commands and link it with Cavrnus server user action send
 */
UCLASS()
class CAVRNUSCONNECTOR_API APlayerAvatarPawn : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Cavrnus")
	USceneComponent* Current_RootComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Cavrnus")
	USceneComponent* Current_AttachToComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Cavrnus")
	UCameraComponent* Current_PlayerCamera_Comp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Cavrnus")
	USpringArmComponent* Current_SpringArm_Comp;

	UPROPERTY()
	TArray<UProceduralMeshComponent*> AvatarMeshes;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Cavrnus")
	bool bLerpMove;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cavrnus")
	FTransform DefaultTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cavrnus")
	FTransform DefaultCameraTransform;
	// Sets default values for this pawn's properties
	APlayerAvatarPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/**
	 * LerpMoveTo public blueprint function to smooth pawn position change.
	 * @param Location destination position.
	 * @param LerpTime time to set final position
	 */
	UFUNCTION(BlueprintCallable, Category = "Cavrnus|Avatar")
	void LerpMoveTo(FVector Location, float LerpTime);

private:
	FVector LerpLocation;
	FVector StartLocation;
	float FullLerpTime = .0;
	float CurrentLerpTime = .0;
};
