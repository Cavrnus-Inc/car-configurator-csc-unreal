#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "CavrnusPropertiesContainer.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FContainerNameUpdated, FString, NewContainerName);

// Class definition
UCLASS(BlueprintType, Blueprintable, HideCategories = (Transform, Physics, LOD, Collision, Rendering, ComponentTick), meta = (BlueprintSpawnableComponent))
class CAVRNUSCONNECTOR_API UCavrnusPropertiesContainer : public USceneComponent
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusPropertiesContainer();

	// Destructor
	~UCavrnusPropertiesContainer();

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	FString GetContainerName() const;

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	void SetContainerName(const FString& ContainerName);

	UPROPERTY(EditAnywhere, Category = "Cavrnus")
	FString ContainerName;

	UPROPERTY(BlueprintAssignable, Category = "Cavrnus")
	FContainerNameUpdated OnContainerNameUpdated;

	static void ResetLiveHierarchyRootName(AActor* Actor, const FString& ReplacementString);
	
private:

	// Returns true if the container name was modified, false if not
	static void ReplacePlaceholderInPropertiesContainer(UCavrnusPropertiesContainer* PropertiesContainer, const FString& Placeholder, const FString& ReplacementString);
};