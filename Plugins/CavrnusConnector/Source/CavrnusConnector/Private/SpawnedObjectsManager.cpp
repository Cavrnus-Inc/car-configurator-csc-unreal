#include "SpawnedObjectsManager.h"
#include "CavrnusConnectorModule.h"
#include "CavrnusSpatialConnector.h"
#include "CavrnusSpatialConnectorSubSystem.h"
#include "CavrnusFunctionLibrary.h"
#include "FlagComponents/CavrnusSpawnedObjectFlag.h"
#include "CavrnusPropertiesContainer.h"
#include "CoreMinimal.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
SpawnedObjectsManager::SpawnedObjectsManager()
{
}

SpawnedObjectsManager::~SpawnedObjectsManager()
{
}

void SpawnedObjectsManager::RegisterSpawnedObject(const FCavrnusSpawnedObject& SpawnedObject, TSubclassOf<AActor> ActorClass, UWorld* World)
{
	FTransform SpawnTransform = UCavrnusFunctionLibrary::GetTransformPropertyValue(SpawnedObject.SpaceConnection, SpawnedObject.PropertiesContainerName, "Transform");

	FActorSpawnParameters SpawnParams;
	SpawnParams.OverrideLevel = World->PersistentLevel;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	AActor* SpawnedActor = World->SpawnActor(ActorClass, &SpawnTransform, SpawnParams);
	spawnedActors.Add(SpawnedObject.PropertiesContainerName, SpawnedActor);

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

	UCavrnusSpawnedObjectFlag* ActorComponent = Cast<UCavrnusSpawnedObjectFlag>(SpawnedActor->AddComponentByClass(
		UCavrnusSpawnedObjectFlag::StaticClass(),
		true,
		FTransform::Identity,
		false));

	if (ActorComponent)
	{
		ActorComponent->SpawnedObject = SpawnedObject;
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
			PropertiesContainer->SetContainerName(SpawnedObject.PropertiesContainerName);
		}
	}

	UCavrnusPropertiesContainer::ResetLiveHierarchyRootName(SpawnedActor, SpawnedObject.PropertiesContainerName);
}

void SpawnedObjectsManager::UnregisterSpawnedObject(const FCavrnusSpawnedObject& SpawnedObject, UWorld* World)
{
	if (!spawnedActors.Contains(SpawnedObject.PropertiesContainerName))
	{
		UE_LOG(LogCavrnusConnector, Error, TEXT("Failed to destroy actor, could not find spawned object with Container Name %s"), *SpawnedObject.PropertiesContainerName);
		return;
	}

	spawnedActors[SpawnedObject.PropertiesContainerName]->Destroy();
}