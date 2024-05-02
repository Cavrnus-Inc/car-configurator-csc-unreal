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

void UCavrnusPropertiesContainer::ReplaceClassNameInPropertiesContainers(AActor* Actor, const FString& ReplacementString, bool bIncludeFromChildActors)
{
	TArray<UCavrnusPropertiesContainer*> PropertiesContainers;
	Actor->GetComponents(PropertiesContainers, bIncludeFromChildActors);
	for (UCavrnusPropertiesContainer* PropertiesContainer : PropertiesContainers)
	{
		UClass* OwnerClass = PropertiesContainer->GetOwner()->GetClass();
		while (OwnerClass)
		{
			FString ActorClassName = OwnerClass->GetName();
			ActorClassName.RemoveFromEnd(TEXT("_C"));

			if (UCavrnusPropertiesContainer::ReplacePlaceholderInPropertiesContainers(PropertiesContainer, ActorClassName, ReplacementString))
				continue;

			OwnerClass = OwnerClass->GetSuperClass();
		}
	}
}

bool UCavrnusPropertiesContainer::ReplacePlaceholderInPropertiesContainers(UCavrnusPropertiesContainer* PropertiesContainer, const FString& Placeholder, const FString& ReplacementString)
{
	FString ContainerName = PropertiesContainer->GetContainerName();
	if (ContainerName.IsEmpty())
	{
		PropertiesContainer->SetContainerName(ReplacementString);
		return true;
	}
	else if (ContainerName.StartsWith(Placeholder))
	{
		ContainerName.RemoveFromStart(Placeholder);
		ContainerName.InsertAt(0, ReplacementString);
		PropertiesContainer->SetContainerName(ContainerName);
		return true;
	}

	return false;
}
