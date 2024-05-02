#include "CavrnusAvatarManager.h"
#include "CavrnusValueSyncVector.h"
#include "CavrnusValueSyncFloat.h"
#include "CavrnusValueSyncString.h"
#include "CavrnusPropertiesContainer.h"
#include "CavrnusSpatialConnector.h"
#include "CavrnusSpatialConnectorSubSystem.h"
#include <Kismet/KismetSystemLibrary.h>
#include <MaterialTypes.h>

//===========================================================
UCavrnusAvatarManager::UCavrnusAvatarManager()
{
	// Don't want to start relay client by loading CDO
	if (!IsTemplate())
	{
		OnSpaceConnected.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusAvatarManager, SpaceConnected));

		UserAdded.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusAvatarManager, OnUserJoined));
		UserRemoved.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusAvatarManager, OnUserLeft));

		UCavrnusFunctionLibrary::AwaitAnySpaceConnection(OnSpaceConnected);
	}
}


//===========================================================
UCavrnusAvatarManager::~UCavrnusAvatarManager()
{
}

//===========================================================


void UCavrnusAvatarManager::SpaceConnected(FCavrnusSpaceConnection SpaceConn)
{
	LocalUserConnectionId = SpaceConn.LocalUserConnectionId;
	UCavrnusFunctionLibrary::BindSpaceUsers(SpaceConn, UserAdded, UserRemoved);
}

void UCavrnusAvatarManager::OnUserJoined(FCavrnusUser User)
{
	//Don't spawn an avatar for the local user
	if (User.UserConnectionId == LocalUserConnectionId)
		return;

	FActorSpawnParameters SpawnParams;
	UWorld* World = GetWorld();
	if (!World) return;

	TSubclassOf<AActor> RemoteAvatarClass = GetRemoteAvatarClass();
	if (!RemoteAvatarClass)
	{
		UE_LOG(LogCavrnusConnector, Error, TEXT("No RemoteAvatarClasses specified!"));
		return;
	}

	SwapAvatars(User, RemoteAvatarClass);
}

void UCavrnusAvatarManager::OnUserLeft(FCavrnusUser User)
{
	AActor** FoundActor = UserMap.Find(User.UserConnectionId);
	if (FoundActor)
	{
		(*FoundActor)->Destroy();
	}

	UserMap.Remove(User.UserConnectionId);
}

void UCavrnusAvatarManager::SwapAvatars(FCavrnusUser User, TSubclassOf<class AActor> AvatarClass) {
	FVector MyVector;
	FRotator MyRotator;

	//Don't spawn an avatar for the local user
	if (User.UserConnectionId == LocalUserConnectionId)
		return;

	AActor** FoundActor = UserMap.Find(User.UserConnectionId);

	if (FoundActor)
	{
		MyVector = (*FoundActor)->GetActorLocation();
		MyRotator = (*FoundActor)->GetActorRotation();
		(*FoundActor)->Destroy();
		UserMap.Remove(User.UserConnectionId);
	}

	UWorld* World = GetWorld();
	if (!World) return;

	if (AActor* RemoteAvatar = SpawnNewAvatar(AvatarClass, MyVector, MyRotator, User.PropertiesContainerName))
	{
		UserMap.Add(User.UserConnectionId, RemoteAvatar);
	}
}

AActor* UCavrnusAvatarManager::SpawnNewAvatar(TSubclassOf<class AActor> AvatarClass, FVector Location, FRotator Rotation, FString PropertiesContainerName)
{
	UWorld* World = GetWorld();
	if (!World) return nullptr;

	FActorSpawnParameters SpawnParams;
	SpawnParams.OverrideLevel = World->PersistentLevel;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	AActor* RemoteAvatar = World->SpawnActor<AActor>(AvatarClass, Location, Rotation, SpawnParams);

	if (!RemoteAvatar) return nullptr;

	TArray<UCavrnusValueSyncBase*> ValueSyncComponents;
	RemoteAvatar->GetComponents(ValueSyncComponents);
	for (UActorComponent* Component : ValueSyncComponents)
	{
		if (UCavrnusValueSyncBase* ValueSync = Cast<UCavrnusValueSyncBase>(Component))
		{
			ValueSync->SendChanges = false;
		}
	}

	UCavrnusPropertiesContainer::ReplaceClassNameInPropertiesContainers(RemoteAvatar, PropertiesContainerName, true);

	return RemoteAvatar;
}

TSubclassOf<AActor> UCavrnusAvatarManager::GetRemoteAvatarClass() const
{
	TSubclassOf<AActor> RemoteAvatarClass = nullptr;
	if (UCavrnusSpatialConnectorSubSystemProxy* SubProxy = UCavrnusFunctionLibrary::GetCavrnusSpatialConnectorSubSystemProxy())
	{
		if (ACavrnusSpatialConnector* CavrnusSpatialConnector = SubProxy->GetCavrnusSpatialConnector())
		{
			RemoteAvatarClass = CavrnusSpatialConnector->RemoteAvatarClass;
		}
	}

	return RemoteAvatarClass;
}
