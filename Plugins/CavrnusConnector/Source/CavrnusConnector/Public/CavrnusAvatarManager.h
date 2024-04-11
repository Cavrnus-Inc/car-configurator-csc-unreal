#pragma once
#include "CoreMinimal.h"
#include "CavrnusFunctionLibrary.h"
#include <Components/SceneComponent.h>
#include <Materials/MaterialInstanceDynamic.h>
#include "CavrnusAvatarManager.generated.h"

// Class definition
UCLASS(BlueprintType)
class CAVRNUSCONNECTOR_API UCavrnusAvatarManager : public UObject
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusAvatarManager();

	// Destructor
	~UCavrnusAvatarManager();

	UFUNCTION()
	void SpaceConnected(FCavrnusSpaceConnection SpaceConn);

	UFUNCTION()
	void OnUserJoined(FCavrnusUser User);

	UFUNCTION()
	void OnUserLeft(FCavrnusUser User);

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	void SwapAvatars(FCavrnusUser User, TSubclassOf<class AActor> AvatarClass);

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	AActor* SpawnNewAvatar(TSubclassOf<class AActor> AvatarClass, FVector Location, FRotator Rotation, FString PropertiesContainerName);

private:
	FString LocalUserConnectionId;

	FCavrnusSpaceConnected OnSpaceConnected;
	FCavrnusSpaceUserEvent UserAdded;
	FCavrnusSpaceUserEvent UserRemoved;

	TMap<FString, AActor*> UserMap;

	TSubclassOf<AActor> GetRemoteAvatarClass() const;
};