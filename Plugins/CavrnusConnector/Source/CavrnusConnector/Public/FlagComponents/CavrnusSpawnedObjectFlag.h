// Copyright(c) Cavrnus. All rights reserved.
#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Types/CavrnusSpawnedObject.h"
#include "CavrnusSpawnedObjectFlag.generated.h"

// Class definition
UCLASS(BlueprintType, Blueprintable)
class CAVRNUSCONNECTOR_API UCavrnusSpawnedObjectFlag : public USceneComponent
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusSpawnedObjectFlag(){}

	// Destructor
	~UCavrnusSpawnedObjectFlag(){}

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus")
	FCavrnusSpawnedObject SpawnedObject;
};