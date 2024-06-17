// Copyright(c) Cavrnus. All rights reserved.
#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "CavrnusPropertiesContainer.generated.h"

/**
 * @brief UCavrnusPropertiesContainer is a component class used for containing properties within the Cavrnus plugin. This component can be attached to actors and used to manage property containers for Cavrnus.
 */
UCLASS(BlueprintType, Blueprintable, HideCategories = (Transform, Physics, LOD, Collision, Rendering, ComponentTick), meta = (BlueprintSpawnableComponent))
class CAVRNUSCONNECTOR_API UCavrnusPropertiesContainer : public USceneComponent
{
	GENERATED_BODY()

public:
	UCavrnusPropertiesContainer();

	/**
	 * @brief Called when the component is initialized, allowing for custom initialization logic.
	 */
	virtual void InitializeComponent() override;

	/**
	 * @brief This property stores the name of the container, which can be used to identify it within the Cavrnus system.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cavrnus")
	FString ContainerName = "";
};