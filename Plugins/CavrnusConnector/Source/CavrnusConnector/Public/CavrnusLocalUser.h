#pragma once
#include "CoreMinimal.h"
#include "CavrnusFunctionLibrary.h"
#include <Components/SceneComponent.h>
#include <Materials/MaterialInstanceDynamic.h>
#include "CavrnusLocalUser.generated.h"

// Class definition
UCLASS(BlueprintType, Blueprintable)
class CAVRNUSCONNECTOR_API UCavrnusLocalUser : public USceneComponent
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusLocalUser();

	// Destructor
	~UCavrnusLocalUser();

	virtual void BeginPlay();

	UFUNCTION()
	void SpaceConnected(FCavrnusSpaceConnection spaceConn);

	FCavrnusSpaceConnection SpaceConn;

private:
	FCavrnusSpaceConnected OnSpaceConnected;
};