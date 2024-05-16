#pragma once

#include "CoreMinimal.h"
#include "Types/CavrnusSpawnedObject.h"

class CAVRNUSCONNECTOR_API SpawnedObjectsManager 
{
public:
	SpawnedObjectsManager();
	~SpawnedObjectsManager();

	void RegisterSpawnedObject(const FCavrnusSpawnedObject& SpawnedObject, TSubclassOf<AActor> ActorClass, UWorld* world);
	void UnregisterSpawnedObject(const FCavrnusSpawnedObject& SpawnedObject, UWorld* World);

private:
	TMap<FString, AActor*> spawnedActors;
};
