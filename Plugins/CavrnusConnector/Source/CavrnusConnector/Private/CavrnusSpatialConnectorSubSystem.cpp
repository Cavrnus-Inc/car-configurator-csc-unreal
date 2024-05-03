#include "CavrnusSpatialConnectorSubSystem.h"
#include "CavrnusFunctionLibrary.h"
#include "CavrnusSpatialConnector.h"
#include "SpawnedObjectsManager.h"
#include "CavrnusAvatarManager.h"
#include "PDFManager.h"
#include "CavrnusLocalUser.h"
#include "TimerManager.h"
#include "Engine/World.h" 
#include "UI/CavrnusUIManager.h"

#include <GameFramework/Pawn.h>
#include <GameFramework/PlayerController.h>

UCavrnusSpatialConnectorSubSystemProxy::UCavrnusSpatialConnectorSubSystemProxy()
{
	ObjectOwner = GetTransientPackage();
}


UCavrnusSpatialConnectorSubSystemProxy::~UCavrnusSpatialConnectorSubSystemProxy()
{
	AvatarManager = nullptr;
	SpawnedObjectsManager = nullptr;
	PDFManager = nullptr;
}

void UCavrnusSpatialConnectorSubSystemProxy::Initialize()
{
	UIManager = NewObject<UCavrnusUIManager>();

	AuthSuccess.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusSpatialConnectorSubSystemProxy, OnAuthSuccess));
	AuthFailure.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusSpatialConnectorSubSystemProxy, OnAuthFailure));
	SpaceConnectionSuccess.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusSpatialConnectorSubSystemProxy, OnSpaceConnectionSuccess));
	SpaceConnectionFailure.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusSpatialConnectorSubSystemProxy, OnSpaceConnectionFailure));

	GetSpawnedObjectsManager();
}

void UCavrnusSpatialConnectorSubSystemProxy::Deinitialize()
{
	AvatarManager = nullptr;
	SpawnedObjectsManager = nullptr;
	PDFManager = nullptr;
	UCavrnusFunctionLibrary::KillDataModel();
}

void UCavrnusSpatialConnectorSubSystemProxy::SetObjectOwner(UObject* Owner)
{
	ObjectOwner = Owner;
}

void UCavrnusSpatialConnectorSubSystemProxy::SetGameInstance(UGameInstance* GInstance)
{
	GameInstance = GInstance;
}

void UCavrnusSpatialConnectorSubSystemProxy::RegisterCavrnusSpatialConnector(ACavrnusSpatialConnector* CavrnusSpatialConnector)
{
	CurrentCavrnusSpatialConnector = CavrnusSpatialConnector;
	UIManager->Initialize(CavrnusSpatialConnector);
}

ACavrnusSpatialConnector* UCavrnusSpatialConnectorSubSystemProxy::GetCavrnusSpatialConnector() const
{
	return CurrentCavrnusSpatialConnector.Get();
}

void UCavrnusSpatialConnectorSubSystemProxy::AuthenticateAndJoin()
{
	ACavrnusSpatialConnector* CavrnusSpatialConnector = GetCavrnusSpatialConnector();
	if (!CavrnusSpatialConnector)
		return;

	// TO DO: Check if actually a valid token?
	if (Authentication.Token.IsEmpty())
	{
		if (CavrnusSpatialConnector->AuthMethod == ECavrnusAuthMethod::JoinAsGuest)
		{
			if (CavrnusSpatialConnector->GuestLoginMethod == ECavrnusGuestLoginMethod::EnterNameBelow)
			{
				UCavrnusFunctionLibrary::AuthenticateAsGuest
				(
					CavrnusSpatialConnector->MyServer,
					CavrnusSpatialConnector->GuestName,
					AuthSuccess, AuthFailure
				);
			}
			else if (CavrnusSpatialConnector->GuestLoginMethod == ECavrnusGuestLoginMethod::PromptToEnterName)
			{
				UIManager->ShowGuestLoginWidget(AuthSuccess, AuthFailure);
			}
			else
			{
				UE_LOG(LogCavrnusConnector, Error, TEXT("No guest login method selected in CavrnusSpatialConnector actor!"));
			}
		}
		else if (CavrnusSpatialConnector->AuthMethod == ECavrnusAuthMethod::JoinAsMember)
		{
			if (CavrnusSpatialConnector->MemberLoginMethod == ECavrnusMemberLoginMethod::EnterMemberLoginCredentials)
			{
				UCavrnusFunctionLibrary::AuthenticateWithPassword
				(
					CavrnusSpatialConnector->MyServer,
					CavrnusSpatialConnector->MemberLoginEmail,
					CavrnusSpatialConnector->MemberLoginPassword,
					AuthSuccess, AuthFailure
				);
			}
			else if (CavrnusSpatialConnector->MemberLoginMethod == ECavrnusMemberLoginMethod::PromptMemberToLogin)
			{
				UIManager->ShowLoginWidget(AuthSuccess, AuthFailure);
			}
			else
			{
				UE_LOG(LogCavrnusConnector, Error, TEXT("No member login method selected in CavrnusSpatialConnector actor!"));
			}
		}
		else
		{
			UE_LOG(LogCavrnusConnector, Error, TEXT("No authentication method selected in CavrnusSpatialConnector actor!"));
		}
	}
	else if (!bHasSpaceConnection) // Authenticated but not in a space
	{
		OnAuthSuccess(Authentication);
	}

	if (!AvatarManager)
	{
		AvatarManager = NewObject<UCavrnusAvatarManager>(ObjectOwner.Get());
	}
}

void UCavrnusSpatialConnectorSubSystemProxy::OnAuthSuccess(FCavrnusAuthentication Auth)
{
	Authentication = Auth;
	ACavrnusSpatialConnector* CavrnusSpatialConnector = GetCavrnusSpatialConnector();
	UE_LOG(LogCavrnusConnector, Log, TEXT("Successfully authenticated"));
	if (CavrnusSpatialConnector->SpaceJoinMethod == ECavrnusSpaceJoinMethod::EnterSpaceId)
	{
		AttemptToJoinSpace(CavrnusSpatialConnector->AutomaticSpaceJoinId);
	}
	else if (CavrnusSpatialConnector->SpaceJoinMethod == ECavrnusSpaceJoinMethod::SpacesList)
	{
		UIManager->ShowSpaceList();
	}
}

void UCavrnusSpatialConnectorSubSystemProxy::OnAuthFailure(FString ErrorMessage)
{
	Authentication = FCavrnusAuthentication();
	ACavrnusSpatialConnector* CavrnusSpatialConnector = GetCavrnusSpatialConnector();
	UE_LOG(LogCavrnusConnector, Error, TEXT("Failed to authenticate, error: %s"), *ErrorMessage);
	if (CavrnusSpatialConnector->AuthMethod == ECavrnusAuthMethod::JoinAsMember)
	{
		UIManager->ShowLoginWidget(AuthSuccess, AuthFailure);
	}
	else if (CavrnusSpatialConnector->AuthMethod == ECavrnusAuthMethod::JoinAsGuest)
	{
		UIManager->ShowGuestLoginWidget(AuthSuccess, AuthFailure);
	}
}

void UCavrnusSpatialConnectorSubSystemProxy::OnSpaceConnectionSuccess(FCavrnusSpaceConnection SpaceConnection)
{
	bHasSpaceConnection = true;

	// Listen for future controller or pawn changes
	if (GameInstance.IsValid())
	{
		GameInstance->GetOnPawnControllerChanged().AddDynamic(this, &UCavrnusSpatialConnectorSubSystemProxy::OnPawnControllerChanged);
		if (APlayerController* PlayerController = GameInstance->GetFirstLocalPlayerController())
		{
			PlayerController->OnPossessedPawnChanged.AddDynamic(this, &UCavrnusSpatialConnectorSubSystemProxy::OnPossessedPawnChanged);
		}
	}

	AttachLocalUserComponentToPawn();

	ACavrnusSpatialConnector* CavrnusSpatialConnector = GetCavrnusSpatialConnector();
	UE_LOG(LogCavrnusConnector, Log, TEXT("Successfully joined space!"));

	UIManager->ShowLoadingWidget(false);

	for (TSubclassOf<UCavrnusWidgetBase>& Widget : CavrnusSpatialConnector->WidgetsToLoad)
	{
		UIManager->SpawnWidget(Widget);
	}
}

void UCavrnusSpatialConnectorSubSystemProxy::OnPawnControllerChanged(APawn* InPawn, AController* InController)
{
	if (InController && InController->IsLocalPlayerController() && InPawn)
	{
		AttachLocalUserComponentToPawn();
	}
}

void UCavrnusSpatialConnectorSubSystemProxy::OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn)
{
	if (NewPawn)
	{
		AttachLocalUserComponentToPawn();
	}

	if (OldPawn)
	{
		OldPawn->Destroy();
	}
}

void UCavrnusSpatialConnectorSubSystemProxy::AttachLocalUserComponentToPawn()
{
	if (GameInstance == nullptr)
	{
		return;
	}

	APlayerController* PlayerController = GameInstance->GetFirstLocalPlayerController();
	if (PlayerController == nullptr)
	{
		return;
	}

	APawn* Pawn = PlayerController->GetPawn();
	if (Pawn && !Pawn->GetComponentByClass(UCavrnusLocalUser::StaticClass()))
	{
		USceneComponent* PawnRootComponent = Pawn->GetRootComponent();
		ensureAlwaysMsgf(PawnRootComponent != nullptr, TEXT("No root component on pawn when attaching local user component"));
		UCavrnusLocalUser* LocalUserComponent = Cast<UCavrnusLocalUser>(Pawn->AddComponentByClass(
			UCavrnusLocalUser::StaticClass(),
			true,
			FTransform::Identity,
			false));

		ensureAlwaysMsgf(LocalUserComponent != nullptr, TEXT("No local user component to attach"));
		LocalUserComponent->AttachToComponent(PawnRootComponent, FAttachmentTransformRules::KeepRelativeTransform);
		LocalUserComponent->RegisterComponent();
	}
}

void UCavrnusSpatialConnectorSubSystemProxy::OnSpaceConnectionFailure(FString ErrorMessage)
{
	bHasSpaceConnection = false;

	UE_LOG(LogCavrnusConnector, Error, TEXT("Failed to join space, error: %s"), *ErrorMessage);
}

UCavrnusAvatarManager* UCavrnusSpatialConnectorSubSystemProxy::GetAvatarManager() {
	return AvatarManager;
}

void UCavrnusSpatialConnectorSubSystemProxy::AttemptToJoinSpace(FString JoinSpaceId)
{
	UIManager->ShowLoadingWidget(true);

	UE_LOG(LogCavrnusConnector, Log, TEXT("Attempting to join space: %s"), *JoinSpaceId);
	UCavrnusFunctionLibrary::JoinSpace(JoinSpaceId, SpaceConnectionSuccess, SpaceConnectionFailure);
}

USpawnedObjectsManager* UCavrnusSpatialConnectorSubSystemProxy::GetSpawnedObjectsManager()
{
	if (!SpawnedObjectsManager)
	{
		SpawnedObjectsManager = NewObject<USpawnedObjectsManager>(ObjectOwner.Get());
		USpawnedObjectsManager::RegisterSpawnManager(SpawnedObjectsManager);
	}

	return SpawnedObjectsManager;
}

UPDFManager* UCavrnusSpatialConnectorSubSystemProxy::GetPDFManager()
{
	if (!PDFManager)
	{
		PDFManager = NewObject<UPDFManager>(ObjectOwner.Get());
		PDFManager->Init();
		UCavrnusFunctionLibrary::GetDataModel()->SetPDFManager(PDFManager);
	}

	return PDFManager;
}

UCavrnusUIManager* UCavrnusSpatialConnectorSubSystemProxy::GetUIManager()
{
	return UIManager;
}

void UCavrnusSpatialConnectorSubSystemProxy::SpawnCavrnusActor(const FCavrnusSpawnedObject& SpawnedObject)
{
	if (ACavrnusSpatialConnector* CavrnusSpatialConnector = GetCavrnusSpatialConnector())
	{
		if (USpawnedObjectsManager* SpawnedObjectManager = GetSpawnedObjectsManager())
		{
			FTimerHandle UnusedHandle;
			FTimerDelegate Delegate;
			Delegate.BindUFunction(SpawnedObjectManager, "SpawnCavrnusActor", SpawnedObject, CavrnusSpatialConnector);

			if (UWorld* World = GetWorld())
			{
				FTimerManager& TimeMan = World->GetTimerManager();
				TimeMan.SetTimer(UnusedHandle, Delegate, .1f, false);
			}
		}
	}
}

void UCavrnusSpatialConnectorSubSystemProxy::DestroyCavrnusActor(const FCavrnusSpawnedObject& SpawnedObject)
{
	if (ACavrnusSpatialConnector* CavrnusSpatialConnector = GetCavrnusSpatialConnector())
	{
		CavrnusSpatialConnector->DestroyCavrnusActor(SpawnedObject);
	}
}

FCavrnusSpawnedObject UCavrnusSpatialConnectorSubSystemProxy::GetSpawnedObject(AActor* Actor)
{
	if (USpawnedObjectsManager* SpawnedObjectManager = GetSpawnedObjectsManager())
	{
		return SpawnedObjectManager->GetSpawnedObject(Actor);
	}

	return FCavrnusSpawnedObject();
}

UCavrnusSpatialConnectorSubSystem::UCavrnusSpatialConnectorSubSystem()
{
	SystemProxy = nullptr;
}

UCavrnusSpatialConnectorSubSystem::~UCavrnusSpatialConnectorSubSystem()
{
	SystemProxy = nullptr;
}

void UCavrnusSpatialConnectorSubSystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	if (SystemProxy == nullptr)
	{
		if (UGameInstance* GameInstance = GetGameInstance())
		{
			SystemProxy = NewObject <UCavrnusSpatialConnectorSubSystemProxy>(GameInstance);
			SystemProxy->SetGameInstance(GameInstance);
			SystemProxy->SetObjectOwner(GameInstance);
			SystemProxy->Initialize();
		}
	}
}

void UCavrnusSpatialConnectorSubSystem::Deinitialize()
{
	SystemProxy->Deinitialize();
	SystemProxy = nullptr;

	Super::Deinitialize();
}

UCavrnusSpatialConnectorSubSystemProxy* UCavrnusSpatialConnectorSubSystem::GetSystemProxy()
{
	return SystemProxy;
}
