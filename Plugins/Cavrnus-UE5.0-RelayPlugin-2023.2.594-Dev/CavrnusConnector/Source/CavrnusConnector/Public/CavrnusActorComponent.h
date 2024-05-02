#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Types/CavrnusSpawnedObject.h"
#include "CavrnusActorComponent.generated.h"

// Class definition
UCLASS(BlueprintType, Blueprintable)
class CAVRNUSCONNECTOR_API UCavrnusActorComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusActorComponent();

	// Destructor
	~UCavrnusActorComponent();

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus")
	FCavrnusSpawnedObject SpawnedObject;

private:

};