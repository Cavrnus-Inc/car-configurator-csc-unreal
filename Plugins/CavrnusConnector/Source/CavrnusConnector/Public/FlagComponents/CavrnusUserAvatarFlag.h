#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Types/CavrnusSpawnedObject.h"
#include "Types/CavrnusUser.h"
#include "CavrnusUserAvatarFlag.generated.h"

// Class definition
UCLASS(BlueprintType, Blueprintable)
class CAVRNUSCONNECTOR_API UCavrnusUserAvatarFlag : public USceneComponent
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusUserAvatarFlag(){}

	// Destructor
	~UCavrnusUserAvatarFlag(){}

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus")
	FCavrnusUser CavrnusUser;
};