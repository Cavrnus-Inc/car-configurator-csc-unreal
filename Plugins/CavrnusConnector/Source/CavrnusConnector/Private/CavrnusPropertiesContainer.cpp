#include "CavrnusPropertiesContainer.h"
#include "Components/SceneComponent.h"
#include <Engine/Level.h>
#include <GameFramework/Actor.h>

//===========================================================
UCavrnusPropertiesContainer::UCavrnusPropertiesContainer()
{
}

//===========================================================
UCavrnusPropertiesContainer::~UCavrnusPropertiesContainer()
{
}

FString UCavrnusPropertiesContainer::GetContainerName() const
{
	return ContainerName;
}

void UCavrnusPropertiesContainer::SetContainerName(const FString& NewContainerName)
{
	ContainerName = NewContainerName;
	OnContainerNameUpdated.Broadcast(ContainerName);
}

void UCavrnusPropertiesContainer::ResetLiveHierarchyRootName(AActor* Actor, const FString& NewRootName)
{
	//What is the ContainerName of the top-level props container?  That is what we'll be replacing.
	TArray<UCavrnusPropertiesContainer*> RootComponent;
	Actor->GetComponents(RootComponent);
	//If nothing on the root, do nothing
	if (RootComponent.Num() == 0)
		return;
	FString rootString = RootComponent[0]->ContainerName;

	TArray<UCavrnusPropertiesContainer*> PropertiesContainers;
	Actor->GetComponents(PropertiesContainers, true);
	for (UCavrnusPropertiesContainer* PropertiesContainer : PropertiesContainers)
	{
		UCavrnusPropertiesContainer::ReplacePlaceholderInPropertiesContainer(PropertiesContainer, rootString, NewRootName);
	}
}

void UCavrnusPropertiesContainer::ReplacePlaceholderInPropertiesContainer(UCavrnusPropertiesContainer* PropertiesContainer, const FString& Placeholder, const FString& ReplacementString)
{
	FString ContainerName = PropertiesContainer->GetContainerName();
	if (ContainerName.IsEmpty())
	{
		PropertiesContainer->SetContainerName(ReplacementString);
	}
	else if (ContainerName.StartsWith(Placeholder))
	{
		ContainerName.RemoveFromStart(Placeholder);
		ContainerName.InsertAt(0, ReplacementString);
		PropertiesContainer->SetContainerName(ContainerName);
	}
}
