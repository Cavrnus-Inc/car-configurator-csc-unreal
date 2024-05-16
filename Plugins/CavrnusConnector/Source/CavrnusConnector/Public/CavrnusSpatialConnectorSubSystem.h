#pragma once
#include "CoreMinimal.h"
#include <Blueprint/UserWidget.h>
#include <Engine/GameInstance.h>
#include "Subsystems/GameInstanceSubsystem.h"
#include "UObject/Object.h"

#include "Types/CavrnusAuthentication.h"
#include "Types/CavrnusCallbackTypes.h"

#include "CavrnusFunctionLibrary.h"

#include "CavrnusSpatialConnectorSubSystem.generated.h"

class UCavrnusWidgetBase;
class ACavrnusSpatialConnector;
class AController;
class APawn;
class SpawnedObjectsManager;
class CavrnusAvatarManager;
class UPDFManager;

UCLASS(BlueprintType, Blueprintable)
class CAVRNUSCONNECTOR_API UCavrnusSpatialConnectorSubSystemProxy : public UObject
{
	GENERATED_BODY()

public:
	class UIManager
	{
	public:
		UIManager();

		void Initialize(ACavrnusSpatialConnector* Connector);

		UUserWidget* SpawnWidget(TSubclassOf<UUserWidget> WidgetClass);

		void RemoveWidget(UUserWidget* Widget);

		void RemoveAllWidgets();

		void ShowGuestLoginWidget(CavrnusAuthRecv SuccessDelegate, CavrnusError FailureDelegate);

		void ShowLoginWidget(CavrnusAuthRecv SuccessDelegate, CavrnusError FailureDelegate);

		void ShowLoadingWidget(bool bShowWidget);

		void ShowSpaceList();
		ACavrnusSpatialConnector* GetConnector();

		TArray<TWeakObjectPtr<UUserWidget>> CavrnusWidgets;

	private:
		UWorld* World = nullptr;
		TWeakObjectPtr<UUserWidget> LoadingWidget;
		TWeakObjectPtr<ACavrnusSpatialConnector> CurrentCavrnusSpatialConnector;
	};
	
	UIManager* GetUIManager();

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

private:
	UFUNCTION()
	void OnPawnControllerChanged(APawn* InPawn, AController* InController);

	UFUNCTION()
	void OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn);

	UFUNCTION()
	void SetupLocalUserPawn();

private:
	UIManager* UIManagerInstance;
	TWeakObjectPtr<ACavrnusSpatialConnector> CurrentCavrnusSpatialConnector;

	CavrnusAuthRecv AuthSuccess;
	CavrnusError AuthFailure;
	CavrnusSpaceConnected SpaceConnectionSuccess;
	CavrnusError SpaceConnectionFailure;

	UPROPERTY()
	FCavrnusAuthentication Authentication;

	bool hasSpaceConn;
	FCavrnusSpaceConnection SpaceConn;

	SpawnedObjectsManager* SpawnManager;
	CavrnusAvatarManager* AvatarManager;

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