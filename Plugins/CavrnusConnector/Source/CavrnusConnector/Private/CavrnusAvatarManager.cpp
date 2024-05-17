#include "CavrnusAvatarManager.h"
#include "ValueSyncs/CavrnusValueSyncVector.h"
#include "ValueSyncs/CavrnusValueSyncFloat.h"
#include "ValueSyncs/CavrnusValueSyncString.h"
#include "CavrnusPropertiesContainer.h"
#include "CavrnusSpatialConnector.h"
#include "CavrnusSpatialConnectorSubSystem.h"
#include "FlagComponents/CavrnusUserAvatarFlag.h"
#include <Kismet/KismetSystemLibrary.h>
#include <MaterialTypes.h>

//===========================================================
CavrnusAvatarManager::CavrnusAvatarManager()
{
}

//===========================================================
CavrnusAvatarManager::~CavrnusAvatarManager()
{
}

void CavrnusAvatarManager::RegisterUser(const FCavrnusUser& User, TSubclassOf<AActor> ActorClass, UWorld* World, FCavrnusSpaceConnection SpaceConn)
{
	//Always ignore the local user
	if (User.IsLocalUser)
		return;

	FTransform SpawnTransform = UCavrnusFunctionLibrary::GetTransformPropertyValue(SpaceConn, User.PropertiesContainerName, "Transform");

	FActorSpawnParameters SpawnParams;
	SpawnParams.OverrideLevel = World->PersistentLevel;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	AActor* SpawnedActor = World->SpawnActor(ActorClass, &SpawnTransform, SpawnParams);
	SpawnedAvatars.Add(User.PropertiesContainerName, SpawnedActor);

	if (SpawnedActor == nullptr)
	{
		UE_LOG(LogCavrnusConnector, Error, TEXT("Failed to successfully spawn actor"));
		return;
	}

	TArray<USceneComponent*> PropertiesContainers;
	USceneComponent* ActorRoot = SpawnedActor->GetRootComponent();

	if (ActorRoot == nullptr)
	{
		UE_LOG(LogCavrnusConnector, Error, TEXT("Failed to successfully spawn actor"));
		return;
	}

	UCavrnusUserAvatarFlag* ActorComponent = Cast<UCavrnusUserAvatarFlag>(SpawnedActor->AddComponentByClass(
		UCavrnusUserAvatarFlag::StaticClass(),
		true,
		FTransform::Identity,
		false));

	if (ActorComponent)
	{
		ActorComponent->CavrnusUser = User;
		ActorComponent->AttachToComponent(ActorRoot, FAttachmentTransformRules::KeepRelativeTransform);
	}

	TArray<USceneComponent*> RootChildren;
	ActorRoot->GetChildrenComponents(false, RootChildren);
	PropertiesContainers = RootChildren.FilterByPredicate([](USceneComponent* SceneComponent) {
		return SceneComponent->IsA<UCavrnusPropertiesContainer>();
	});

	if (PropertiesContainers.IsEmpty())
	{
		// Add a properties container to the root if none found
		UCavrnusPropertiesContainer* RootContainer = Cast<UCavrnusPropertiesContainer>(SpawnedActor->AddComponentByClass(
			UCavrnusPropertiesContainer::StaticClass(),
			true,
			FTransform::Identity,
			false));
		
		if (RootContainer)
		{
			RootContainer->AttachToComponent(ActorRoot, FAttachmentTransformRules::KeepRelativeTransform);
		}

		ActorRoot->GetChildrenComponents(false, RootChildren);
		PropertiesContainers = RootChildren.FilterByPredicate([](USceneComponent* SceneComponent) {
			return SceneComponent->IsA<UCavrnusPropertiesContainer>();
		});
	}

	checkf(PropertiesContainers.Num() == 1, TEXT("Expected a single properties container component on the root of the actor"));
	for (USceneComponent* Component : PropertiesContainers)
	{
		if (UCavrnusPropertiesContainer* PropertiesContainer = Cast<UCavrnusPropertiesContainer>(Component))
		{
			PropertiesContainer->SetContainerName(User.PropertiesContainerName);
		}
	}

	ActorRoot->SetVisibility(false, true);
	auto OnAvatarVisUpdated = [this, ActorRoot](bool bIsVisble, FString, FString)
	{
		ActorRoot->SetVisibility(bIsVisble, true);
	};
	AvatarVis = UCavrnusFunctionLibrary::BindBooleanPropertyValue(SpaceConn, User.PropertiesContainerName, "AvatarVis", OnAvatarVisUpdated);

	FTransform InitialTransform = UCavrnusFunctionLibrary::GetTransformPropertyValue(SpaceConn, User.PropertiesContainerName, "Transform");
	auto OnAvatarTransformPropertyUpdated = [this, InitialTransform, SpaceConn, User](const FTransform& PropValue, FString, FString)
	{
		if (InitialTransform.GetLocation() != PropValue.GetLocation() || InitialTransform.GetRotation() != PropValue.GetRotation())
		{
			UCavrnusFunctionLibrary::PostBoolPropertyUpdate(SpaceConn, User.PropertiesContainerName, "AvatarVis", true);
		}
	};
	AvatarTransformBinding = UCavrnusFunctionLibrary::BindTransformPropertyValue(SpaceConn, User.PropertiesContainerName, "Transform", OnAvatarTransformPropertyUpdated);

	UCavrnusPropertiesContainer::ResetLiveHierarchyRootName(SpawnedActor, User.PropertiesContainerName);
}

void CavrnusAvatarManager::UnregisterUser(const FCavrnusUser& SpawnedObject, UWorld* World)
{
	if (!SpawnedAvatars.Contains(SpawnedObject.PropertiesContainerName))
	{
		UE_LOG(LogCavrnusConnector, Error, TEXT("Failed to destroy actor, could not find spawned object with Container Name %s"), *SpawnedObject.PropertiesContainerName);
		return;
	}
	
	UCavrnusFunctionLibrary::Unbind(AvatarVis);
	UCavrnusFunctionLibrary::Unbind(AvatarTransformBinding);

	SpawnedAvatars[SpawnedObject.PropertiesContainerName]->Destroy();
}