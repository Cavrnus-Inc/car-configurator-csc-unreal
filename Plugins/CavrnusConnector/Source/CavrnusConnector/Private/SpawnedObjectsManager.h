#pragma once

#include "CoreMinimal.h"
#include "Types/CavrnusSpawnedObject.h"

class USpawnObjectHelpers;

class CAVRNUSCONNECTOR_API SpawnedObjectsManager 
{
public:
	SpawnedObjectsManager();
	~SpawnedObjectsManager();

	void RegisterSpawnedObject(const FCavrnusSpawnedObject& SpawnedObject, TSubclassOf<AActor> ActorClass, UWorld* world, USpawnObjectHelpers* spawnHelpers);
	void UnregisterSpawnedObject(const FCavrnusSpawnedObject& SpawnedObject, UWorld* World);

private:
	TMap<FString, AActor*> spawnedActors;
};
