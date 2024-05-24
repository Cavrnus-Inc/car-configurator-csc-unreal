#pragma once
#include "CoreMinimal.h"
#include "CavrnusFunctionLibrary.h"
#include <Components/SceneComponent.h>
#include <Materials/MaterialInstanceDynamic.h>

#include "CavrnusAvatarManager.generated.h"

class USpawnObjectHelpers;

// Class definition
UCLASS()
class CAVRNUSCONNECTOR_API UCavrnusAvatarManager : public UObject
{
	GENERATED_BODY()

public:
	UCavrnusAvatarManager();
	~UCavrnusAvatarManager();
	
	void RegisterUser(const FCavrnusUser& SpawnedObject, TSubclassOf<AActor> ActorClass, UWorld* World, USpawnObjectHelpers* spawnHelpers);
	void UnregisterUser(const FCavrnusUser& SpawnedObject, UWorld* World);

private:
	TMap<FString, AActor*> SpawnedAvatars;

	UPROPERTY()
	UCavrnusBinding* AvatarVis;
};
