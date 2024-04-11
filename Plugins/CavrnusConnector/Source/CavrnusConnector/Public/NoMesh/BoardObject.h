// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "NoMesh/NoMeshObject.h"

#include "BoardObject.generated.h"

UENUM(BlueprintType)
enum class ENomeshWidgetType : uint8
{
	ActionBar,
	LeftHandle,
	RightHandle,
	BottomHandle,
	HeaderBar
};

UENUM(BlueprintType)
enum class EPropertyEventType : uint8
{
	Transient,
	Final,
	Cancel
};

const static TMap<ENomeshWidgetType, FName> NoMeshWidgetNames = {
	{ ENomeshWidgetType::ActionBar, "ActionBar" },
	{ ENomeshWidgetType::LeftHandle, "LeftHandle" },
	{ ENomeshWidgetType::RightHandle, "RightHandle" },
	{ ENomeshWidgetType::BottomHandle, "BottomHandle" },
	{ ENomeshWidgetType::HeaderBar, "HeaderBar" }
};

UCLASS()
class CAVRNUSCONNECTOR_API ABoardObject : public ANoMeshObject
{
	GENERATED_BODY()

public:
	ABoardObject(const FObjectInitializer& ObjectInitializer);
	virtual void BeginPlay() override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/**
	 * Adjust the aspect ratio of the board based on its content.
	 */
	void AdjustAspectRatio() override;

	/// Performs a ray cast on to a plane constructed from NoMesh Right vector and Location.
	UFUNCTION(BlueprintCallable, Category = "Cavrnus|NoMesh")
	bool RayCastOnToBoard(FVector& Hit);

	/// Declared widgets will be created for NoMeshObject in the constructor. Widgets can be assigned from blueprint.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Cavrnus")
	TArray<ENomeshWidgetType> WidgetDeclarations;

	/// Board handles.
	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus")
	TArray<class UBoardHandle*> Handles;

	/// Board header.
	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus")
	class UBoardHeader* BoardHeader = nullptr;

	/// Board Action bar.
	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus")
	class UNoMeshActionsWidget* Actions;

	/// Widgets assigned to NoMeshObject from Blueprint.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Cavrnus")
	TArray<UWidgetComponent*> WidgetComponents;

protected:
	/// Updates the handle locations based on scale differences.
	void UpdateHandleLocations();

	void DefineWidgets();

	// Used to store the collision detection type so can restore it when the board is unhidden
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Cavrnus")
	TEnumAsByte<ECollisionEnabled::Type> BoardCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Cavrnus")
	TMap<FString, TEnumAsByte<ECollisionEnabled::Type>> BoardHandleCollisions;

	/// Initial Handle locations stored to calculate widget placement due to scale.
	TArray<FVector> InitialWidgetLocations;

	TArray<FVector> InitialWidgetScale;

	/// Hide / Show widgets belonging to the board.
	UFUNCTION(BlueprintCallable, Category = "Cavrnus|NoMesh")
	void ToggleBoardFrame();

	UFUNCTION(BlueprintCallable, Category = "Cavrnus|NoMesh")
	bool IsFrameVisible();

	UFUNCTION(BlueprintCallable, Category = "Cavrnus|NoMesh")
	void ToggleBoardCollisions(bool bEnableCollisions);

	UFUNCTION(BlueprintCallable, Category = "Cavrnus|NoMesh")
	void ToggleBoardHandleCollisions(UWidgetComponent* Widget, bool bEnableCollisions);
};
