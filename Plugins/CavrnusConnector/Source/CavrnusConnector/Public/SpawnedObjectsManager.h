#pragma once

#include "CoreMinimal.h"
#include "Types/CavrnusSpawnedObject.h"
#include "SpawnedObjectsManager.generated.h"

class ACavrnusSpatialConnector;

UCLASS()
class CAVRNUSCONNECTOR_API USpawnedObjectsManager : public UObject
{
	GENERATED_BODY()

public:

	~USpawnedObjectsManager();

	FCavrnusSpawnedObject GetSpawnedObject(AActor* Actor);
	void RegisterSpawnedObject(FCavrnusSpawnedObject SpawnedObject);
	void UnregisterSpawnedObject(FCavrnusSpawnedObject SpawnedObject);
	static void RegisterSpawnManager(USpawnedObjectsManager* Manager);
	static USpawnedObjectsManager* GetInstance();

	UFUNCTION()
	void SpawnCavrnusActor(const FCavrnusSpawnedObject& SpawnedObject, ACavrnusSpatialConnector * CavrnusSpatialConnector);

private:
	USpawnedObjectsManager();

	// Do not directly set this variable, initialized via a call to RegisterSpawnManager from the 
	// CavrnusSpatialConnectorSubSystem - registering in this way should guarantee the game instance is
	// accessible from the spawn manager's Outer
	static TWeakObjectPtr<USpawnedObjectsManager> Instance;
};
