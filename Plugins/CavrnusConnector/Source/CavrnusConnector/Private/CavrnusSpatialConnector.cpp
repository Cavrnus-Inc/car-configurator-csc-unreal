#include "CavrnusSpatialConnector.h"

#include "CavrnusAvatarManager.h"
#include "CavrnusConnectorModule.h"
#include "CavrnusFunctionLibrary.h"
#include "CavrnusSpatialConnectorSubSystem.h"
#include "CavrnusActorComponent.h"
#include "SpawnedObjectsManager.h"
#include <Engine/GameInstance.h>
#include <EngineUtils.h>

// Sets default values
ACavrnusSpatialConnector::ACavrnusSpatialConnector()
{
	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	AuthMethod = ECavrnusAuthMethod::JoinAsMember;
	MemberLoginMethod = ECavrnusMemberLoginMethod::EnterMemberLoginCredentials;
	GuestLoginMethod = ECavrnusGuestLoginMethod::EnterNameBelow;
	SpaceJoinMethod = ECavrnusSpaceJoinMethod::SpacesList;
}

void ACavrnusSpatialConnector::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (UCavrnusSpatialConnectorSubSystemProxy* SubProxy = UCavrnusFunctionLibrary::GetCavrnusSpatialConnectorSubSystemProxy())
	{
		SubProxy->RegisterCavrnusSpatialConnector(this);
	}
}

// Called when the game starts or when spawned
void ACavrnusSpatialConnector::BeginPlay()
{
	Super::BeginPlay();
	CavrnusBeginPlay();
}

void ACavrnusSpatialConnector::CavrnusBeginPlay()
{
	UWorld* WorldPtr = GetWorld();
	if (!WorldPtr)
	{
		UE_LOG(LogCavrnusConnector, Error, TEXT("No world in ACavrnusSpatialConnector::BeginPlay()"));
		return;
	}

	if (UCavrnusSpatialConnectorSubSystemProxy* SubProxy = UCavrnusFunctionLibrary::GetCavrnusSpatialConnectorSubSystemProxy())
	{
		SubProxy->AuthenticateAndJoin();
	}
}

void ACavrnusSpatialConnector::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	CavrnusEndPlay();
}

void ACavrnusSpatialConnector::CavrnusEndPlay()
{
}

AActor* ACavrnusSpatialConnector::SpawnActorFromIdentifier_Implementation(const FString& Identifier, const FTransform& Transform)
{
	AActor* SpawnedActor = nullptr;
	if (TSubclassOf<AActor>* ActorClass = SpawnableIdentifiers.Find(Identifier))
	{
		SpawnedActor = GetWorld()->SpawnActor(*ActorClass, &Transform);
	}
	else
	{
		UE_LOG(LogCavrnusConnector, Warning, TEXT("No actor was spawned as identifier %s was not in the 'SpawnableIdentifiers' map of the CavrnusSpatialConnector"), *Identifier);
	}

	return SpawnedActor;
}

void ACavrnusSpatialConnector::DestroyCavrnusActor_Implementation(const FCavrnusSpawnedObject& SpawnedObject)
{
	UCavrnusSpatialConnectorSubSystemProxy* SubProxy = UCavrnusFunctionLibrary::GetCavrnusSpatialConnectorSubSystemProxy();
	if (!SubProxy)
	{
		UE_LOG(LogCavrnusConnector, Error, TEXT("Attempting to delete object but CavrnusSpatialConnectorSubSystem not found"));
		return;
	}

	UWorld* World = SubProxy->GetWorld();
	if (!World)
	{
		UE_LOG(LogCavrnusConnector, Error, TEXT("Attempting to delete object but World not found"));
		return;
	}

	TSet<AActor*> ActorsToDelete;
	for (TActorIterator<AActor> It(World); It; ++It)
	{
		FCavrnusSpawnedObject ActorSpawnedObject = SubProxy->GetSpawnedObject(*It);
		if (ActorSpawnedObject.PropertiesContainerName.IsEmpty())
			continue;

		if (ActorSpawnedObject.PropertiesContainerName == SpawnedObject.PropertiesContainerName)
		{
			ActorsToDelete.Add(*It);
		}
	}

	for (AActor* Actor : ActorsToDelete)
	{
		Actor->Destroy();
		Actor = nullptr;
	}
}

