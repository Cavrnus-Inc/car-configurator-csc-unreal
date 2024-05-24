#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "CavrnusPropertiesContainer.generated.h"

// Class definition
UCLASS(BlueprintType, Blueprintable, HideCategories = (Transform, Physics, LOD, Collision, Rendering, ComponentTick), meta = (BlueprintSpawnableComponent))
class CAVRNUSCONNECTOR_API UCavrnusPropertiesContainer : public USceneComponent
{
	GENERATED_BODY()

public:
	UCavrnusPropertiesContainer();

	virtual void InitializeComponent() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cavrnus")
	FString ContainerName = "";
};