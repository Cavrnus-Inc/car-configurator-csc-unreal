#pragma once
#include "CoreMinimal.h"
#include "CavrnusFunctionLibrary.h"
#include <Components/SceneComponent.h>
#include <Materials/MaterialInstanceDynamic.h>

// Class definition
class CAVRNUSCONNECTOR_API CavrnusAvatarManager
{
public:
	CavrnusAvatarManager();
	~CavrnusAvatarManager();

	void RegisterUser(const FCavrnusUser& SpawnedObject, TSubclassOf<AActor> ActorClass, UWorld* World, FCavrnusSpaceConnection SpaceConn);
	void UnregisterUser(const FCavrnusUser& SpawnedObject, UWorld* World);

private:
	TMap<FString, AActor*> SpawnedAvatars;
};