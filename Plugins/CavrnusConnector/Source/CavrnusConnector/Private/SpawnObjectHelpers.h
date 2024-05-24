#pragma once
#include "CoreMinimal.h"
#include "../Public/CavrnusPropertiesContainer.h"
#include "Types/CavrnusUser.h"
#include "Types/CavrnusSpawnedObject.h"
#include <Components/SceneComponent.h>
#include <Materials/MaterialInstanceDynamic.h>

#include "SpawnObjectHelpers.generated.h"

class AActor;
class UWorld;

// Class definition
UCLASS()
class CAVRNUSCONNECTOR_API USpawnObjectHelpers : public UObject
{
	GENERATED_BODY()

public:
	USpawnObjectHelpers();
	
	AActor* SpawnUserAndSetup(UWorld* World, TSubclassOf<AActor> ActorClass, const FCavrnusUser& User);
	AActor* SpawnObjectAndSetup(UWorld* World, TSubclassOf<AActor> ActorClass, const FCavrnusSpawnedObject& SpawnedObject);

	static void ResetLiveHierarchyRootName(AActor* Actor, const FString& ReplacementString);

	void InitializeCavrnusActor(AActor* InActor);

private:
	TMap<AActor*, FCavrnusUser> userSpawns;
	TMap<AActor*, FCavrnusSpawnedObject> objectSpawns;

	void HandleSpawnedUser(AActor* actor, const FCavrnusUser& user);

	void HandleSpawnedObject(AActor* actor, const FCavrnusSpawnedObject& object);

	AActor* SetupObjectPropsContainers(AActor* spawnedActor, const FString& propsContainerName);

	// Returns true if the container name was modified, false if not
	static void ReplacePlaceholderInPropertiesContainer(UCavrnusPropertiesContainer* PropertiesContainer, const FString& Placeholder, const FString& ReplacementString);
};