#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"

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

	void SpawnCavrnusActor(const FCavrnusSpawnedObject& SpawnedObject);
	FCavrnusSpawnedObject GetSpawnedObject(AActor* Actor);

	void DestroyCavrnusActor(const FCavrnusSpawnedObject& SpawnedObject);

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	UCavrnusAvatarManager* GetAvatarManager();

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	USpawnedObjectsManager* GetSpawnedObjectsManager();

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	UPDFManager* GetPDFManager();
protected:
	void ShowGuestLoginWidget();

	void ShowLoginWidget();

private:
	TWeakObjectPtr<ACavrnusSpatialConnector> CurrentCavrnusSpatialConnector;

	FCavrnusAuthRecv AuthSuccess;
	FCavrnusError AuthFailure;
	FCavrnusSpaceConnected SpaceConnectionSuccess;
	FCavrnusError SpaceConnectionFailure;

	UPROPERTY()
	FCavrnusAuthentication Authentication;

	UPROPERTY()
	bool bHasSpaceConnection = false;

	UPROPERTY()
	USpawnedObjectsManager* SpawnedObjectsManager;

	UPROPERTY()
	UCavrnusAvatarManager* AvatarManager;

	UPROPERTY()
	UPDFManager* PDFManager;

	UPROPERTY()
	UUserWidget* LoadingWidget;

	UPROPERTY()
	UGameInstance* GameInstance;

	UPROPERTY()
	UObject* ObjectOwner;

	UFUNCTION()
	UUserWidget* SpawnWidget(TSubclassOf<UUserWidget> WidgetClass);

	UFUNCTION()
	void OnPawnControllerChanged(APawn* InPawn, AController* InController);

	UFUNCTION()
	void OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn);

	UFUNCTION()
	void AttachLocalUserComponentToPawn();

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