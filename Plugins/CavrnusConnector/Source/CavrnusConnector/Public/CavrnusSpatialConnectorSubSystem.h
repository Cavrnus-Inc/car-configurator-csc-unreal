#pragma once
#include "CoreMinimal.h"
#include <Engine/GameInstance.h>
#include "Subsystems/GameInstanceSubsystem.h"
#include "UObject/Object.h"

#include "Types/CavrnusAuthentication.h"
#include "Types/CavrnusSpawnedObject.h"
#include "Types/CavrnusCallbackTypes.h"

#include "CavrnusSpatialConnectorSubSystem.generated.h"

class ACavrnusSpatialConnector;
class AController;
class APawn;
class USpawnedObjectsManager;
class UCavrnusAvatarManager;
class UPDFManager;

UCLASS(BlueprintType, Blueprintable)
class CAVRNUSCONNECTOR_API UCavrnusSpatialConnectorSubSystemProxy : public UObject
{
	GENERATED_BODY()
public:
	UCavrnusSpatialConnectorSubSystemProxy();
	virtual ~UCavrnusSpatialConnectorSubSystemProxy();

	void Initialize();
	void Deinitialize();

	/**
	* The objects created within the Core will be belong to given object.
	* If not set, default is transient package.
	*/
	void SetObjectOwner(UObject* Owner);

	/**
	* If pie or standalone mode runs, it sets a game instance.
	* Requirement is to get the first local player. Editor mode provides its own local player.
	*/
	void SetGameInstance(UGameInstance* GameInstance);

	void RegisterCavrnusSpatialConnector(ACavrnusSpatialConnector* CavrnusSpatialConnector);

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	ACavrnusSpatialConnector* GetCavrnusSpatialConnector() const;

	void AuthenticateAndJoin();
	void AttemptToJoinSpace(FString JoinSpaceId);

	UFUNCTION()
	void OnAuthSuccess(FCavrnusAuthentication Authentication);

	UFUNCTION()
	void OnAuthFailure(FString Error);

	UFUNCTION()
	void OnSpaceConnectionSuccess(FCavrnusSpaceConnection SpaceConnection);

	UFUNCTION()
	void OnSpaceConnectionFailure(FString Error);

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	UCavrnusAvatarManager* GetAvatarManager();

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	UPDFManager* GetPDFManager();

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	class UCavrnusUIManager* GetUIManager();

private:
	UFUNCTION()
	void OnPawnControllerChanged(APawn* InPawn, AController* InController);

	UFUNCTION()
	void OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn);

	UFUNCTION()
	void AttachLocalUserComponentToPawn();

private:
	TWeakObjectPtr<ACavrnusSpatialConnector> CurrentCavrnusSpatialConnector;

	FCavrnusAuthRecv AuthSuccess;
	FCavrnusError AuthFailure;
	FCavrnusSpaceConnected SpaceConnectionSuccess;
	FCavrnusError SpaceConnectionFailure;

	UPROPERTY()
	class UCavrnusUIManager* UIManager;

	UPROPERTY()
	FCavrnusAuthentication Authentication;

	UPROPERTY()
	bool bHasSpaceConnection = false;

	USpawnedObjectsManager* SpawnedObjectsManager;

	UPROPERTY()
	UCavrnusAvatarManager* AvatarManager;

	UPROPERTY()
	UPDFManager* PDFManager;

	TWeakObjectPtr<UGameInstance> GameInstance;
	TWeakObjectPtr<UObject> ObjectOwner;

public:
	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus")
	bool bInEditorMode = false;
};

// Class definition
UCLASS(BlueprintType, Blueprintable)
class CAVRNUSCONNECTOR_API UCavrnusSpatialConnectorSubSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusSpatialConnectorSubSystem();

	// Destructor
	~UCavrnusSpatialConnectorSubSystem();

	virtual void Initialize(FSubsystemCollectionBase& Collection);
	virtual void Deinitialize();

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	UCavrnusSpatialConnectorSubSystemProxy* GetSystemProxy();

private:
	UPROPERTY()
	UCavrnusSpatialConnectorSubSystemProxy* SystemProxy;
};