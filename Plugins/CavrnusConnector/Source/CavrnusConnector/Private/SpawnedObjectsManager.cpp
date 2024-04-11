#include "SpawnedObjectsManager.h"
#include "CavrnusConnectorModule.h"
#include "CavrnusSpatialConnector.h"
#include "CavrnusSpatialConnectorSubSystem.h"
#include "CavrnusFunctionLibrary.h"
#include "CavrnusActorComponent.h"
#include "CavrnusPropertiesContainer.h"
#include "CoreMinimal.h"
#include <Kismet/GameplayStatics.h>

TWeakObjectPtr<USpawnedObjectsManager> USpawnedObjectsManager::Instance = nullptr;

// Sets default values
USpawnedObjectsManager::USpawnedObjectsManager()
{
}

USpawnedObjectsManager::~USpawnedObjectsManager()
{
}

void USpawnedObjectsManager::RegisterSpawnManager(USpawnedObjectsManager* Manager)
{
	Instance = Manager;
}


USpawnedObjectsManager* USpawnedObjectsManager::GetInstance()
{
	return Instance.Get();
}

FCavrnusSpawnedObject USpawnedObjectsManager::GetSpawnedObject(AActor* Actor)
{
	if (UCavrnusActorComponent* CavrnusActorComponent = Actor->FindComponentByClass<UCavrnusActorComponent>())
	{
		return CavrnusActorComponent->SpawnedObject;
	}

	return FCavrnusSpawnedObject();
}

void USpawnedObjectsManager::RegisterSpawnedObject(FCavrnusSpawnedObject SpawnedObject)
{
	if (UCavrnusSpatialConnectorSubSystemProxy* SubProxy = UCavrnusFunctionLibrary::GetCavrnusSpatialConnectorSubSystemProxy())
	{
		SubProxy->SpawnCavrnusActor(SpawnedObject);
	}
	else
	{
		UE_LOG(LogCavrnusConnector, Error, TEXT("Attempting to spawn object but Game Instance not found"));
	}
}

void USpawnedObjectsManager::UnregisterSpawnedObject(FCavrnusSpawnedObject SpawnedObject)
{
	UGameInstance* GameInstance = Cast<UGameInstance>(GetOuter());
	if (!GameInstance)
	{
		UE_LOG(LogCavrnusConnector, Error, TEXT("Attempting to delete object but Game Instance not found"));
		return;
	}

	if (UCavrnusSpatialConnectorSubSystemProxy* SubProxy = UCavrnusFunctionLibrary::GetCavrnusSpatialConnectorSubSystemProxy())
	{
		SubProxy->DestroyCavrnusActor(SpawnedObject);
	}
}

void USpawnedObjectsManager::SpawnCavrnusActor(const FCavrnusSpawnedObject& SpawnedObject, ACavrnusSpatialConnector* CavrnusSpatialConnector)
{
	FTransform SpawnTransform = UCavrnusFunctionLibrary::GetTransformPropertyValue(SpawnedObject.SpaceConnection, SpawnedObject.PropertiesContainerName, "Transform");
	AActor* SpawnedActor = CavrnusSpatialConnector->SpawnActorFromIdentifier(SpawnedObject.UniqueIdentifier, SpawnTransform);
	if (SpawnedActor)
	{
		TArray<USceneComponent*> PropertiesContainers;
		USceneComponent* ActorRoot = SpawnedActor->GetRootComponent();
		if (ActorRoot)
		{
			UCavrnusActorComponent* ActorComponent = Cast<UCavrnusActorComponent>(SpawnedActor->AddComponentByClass(
				UCavrnusActorComponent::StaticClass(),
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

			UCavrnusPropertiesContainer::ReplaceClassNameInPropertiesContainers(SpawnedActor, SpawnedObject.PropertiesContainerName);
		}
	}
}
