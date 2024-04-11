#include "CavrnusValueSyncBase.h"
#include "CavrnusPropertiesContainer.h"
#include "Types/CavrnusLivePropertyUpdate.h"
#include <Engine/World.h>
#include <GameFramework/Actor.h>
#include <Kismet/KismetSystemLibrary.h>
#include <TimerManager.h>
#include <CavrnusFunctionLibrary.h>

//===========================================================
UCavrnusValueSyncBase::UCavrnusValueSyncBase()
{
}


//===========================================================
UCavrnusValueSyncBase::~UCavrnusValueSyncBase()
{
}

//===========================================================

void UCavrnusValueSyncBase::BeginPlay()
{
	Super::BeginPlay();
	StartSyncing();
}

void UCavrnusValueSyncBase::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	StopSyncing();
	Super::EndPlay(EndPlayReason);
}

void UCavrnusValueSyncBase::StartSyncing()
{
	ensureAlwaysMsgf(!PropertyName.IsEmpty(), TEXT("Component: %s, Owner: %s - PropertyName not set"), *GetName(), *ReportOwnerName());
	bSyncingValue = true;
}

void UCavrnusValueSyncBase::StopSyncing()
{
	if (bSyncingValue)
	{
		if (UWorld* World = GetWorld())
		{
			World->GetTimerManager().ClearTimer(PollTimer);
		}

		UCavrnusFunctionLibrary::Unbind(PropertyBinding);
	}

	bSyncingValue = false;
}

// Overridden to automatically force the owning actor to
// have a UCavrnusPropertiesContainer at the same level as the
// UCavrnusValueSyncBase component. Called when adding an instance component from the details
// panel in the level editor. Overriding OnComponentCreated() rather than OnAttachmentChanged()
// so that the component is attached to its parent and the parent's AttachChildren are synced.
void UCavrnusValueSyncBase::OnComponentCreated()
{
	Super::OnComponentCreated();

	AutoAttachPropertiesContainer();
}

void UCavrnusValueSyncBase::AutoAttachPropertiesContainer()
{
	if (ShouldAutoAddPropertiesContainer())
	{
		AActor* Owner = GetOwner();
		UCavrnusPropertiesContainer* PropertiesContainer = Cast<UCavrnusPropertiesContainer>(Owner->AddComponentByClass(
			UCavrnusPropertiesContainer::StaticClass(),
			true,
			FTransform::Identity,
			false));
		if (PropertiesContainer)
		{
			PropertiesContainer->SetContainerName(GetGeneratedContainerName());
			PropertiesContainer->AttachToComponent(GetAttachParent(), FAttachmentTransformRules::KeepRelativeTransform);
			Owner->AddInstanceComponent(PropertiesContainer);
		}
	}
}

bool UCavrnusValueSyncBase::ShouldAutoAddPropertiesContainer() const
{
	if (USceneComponent* Parent = GetAttachParent())
	{
		if (AActor* Owner = Parent->GetOwner())
		{
			if (Owner->IsTemplate())
				return false;

			if (UWorld* World = Owner->GetWorld())
			{
				if (World->bIsTearingDown)
					return false;

				TArray<USceneComponent*> ParentChildren;
				Parent->GetChildrenComponents(false, ParentChildren);

				// Need to call at later point if this is the case
				if (!ParentChildren.Contains(this))
					return false;

				return ParentChildren.FilterByPredicate([](USceneComponent* SceneComponent) {
					return SceneComponent->IsA<UCavrnusPropertiesContainer>();
					}).IsEmpty();
			}
		}
	}

	return false;
}

FString UCavrnusValueSyncBase::GetGeneratedContainerName() const
{
	USceneComponent* CurrentComponent = GetAttachParent();
	FString PropertiesContainerName;

	do
	{
		FString ObjectName = CurrentComponent->GetName();
		if (PropertiesContainerName.IsEmpty())
		{
			PropertiesContainerName = ObjectName;
		}
		else
		{
			PropertiesContainerName = ObjectName + "/" + PropertiesContainerName;
		}

		CurrentComponent = CurrentComponent->GetAttachParent();
	} while (CurrentComponent != nullptr);

	// Add owner prefix which will be replaced with the spawned object ID 
	// when the actor is spawned
	if (AActor* Owner = GetOwner())
	{
		FString ActorClassName = Owner->GetClass()->GetName();
		ActorClassName.RemoveFromEnd(TEXT("_C"));
		PropertiesContainerName = ActorClassName + "/" + PropertiesContainerName;
	}

	return PropertiesContainerName;
}

void UCavrnusValueSyncBase::SpaceConnected(FCavrnusSpaceConnection SpaceConnection)
{
	SpaceConn = SpaceConnection;

	PollForPropertyChanges();
}

void UCavrnusValueSyncBase::PollForPropertyChanges()
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimer(
			PollTimer, [this]() {

				if (!GIsReconstructingBlueprintInstances)
				{
					if (ContainerName.IsEmpty())
					{
						UCavrnusPropertiesContainer* Container = GetContainer();
						if (Container)
						{
							if (!Container->GetContainerName().IsEmpty())
							{
								ContainerName = Container->GetContainerName();

								DefineDefaultPropertyValue();
								if (RecvChanges)
									PropertyBinding = BindPropertyValue();
								else
									PropertyBinding = FCavrnusBinding();
							}
						}
						else
						{
							ensureMsgf(Container != nullptr, TEXT("Component: %s, Owner: %s, PropertyName: %s - Properties Container not found"), *GetName(), *ReportOwnerName(), *PropertyName);
						}
					}
					else
					{
						if (SendChanges)
						{
							SendPropertyChanges();
						}
					}
				}
			},
			0.1f, true, 0.1);
	}
}


UCavrnusPropertiesContainer* UCavrnusValueSyncBase::GetContainer() const
{
	/*
		Search up the hierarchy towards the root to find a
		container component
	*/
	UCavrnusPropertiesContainer* ContainerComponent = nullptr;
	USceneComponent* Parent = GetAttachParent();
	while (Parent != nullptr && !ContainerComponent)
	{
		TArray<USceneComponent*> Children;
		Parent->GetChildrenComponents(false, Children);
		for (auto Child : Children)
		{
			if (Child->IsA(UCavrnusPropertiesContainer::StaticClass()))
			{
				ContainerComponent = Cast<UCavrnusPropertiesContainer>(Child);
				break;
			}
		}

		Parent = Parent->GetAttachParent();
	}

	// If no container found then try to get one from anywhere on the actor
	if (!ContainerComponent)
	{
		if (AActor* Owner = GetOwner())
		{
			if (UActorComponent* FoundComponent = Owner->GetComponentByClass(UCavrnusPropertiesContainer::StaticClass()))
			{
				ContainerComponent = Cast<UCavrnusPropertiesContainer>(FoundComponent);
			}
		}
	}

	return ContainerComponent;
}


FString UCavrnusValueSyncBase::ReportOwnerName() const
{
	FString OwnerName = TEXT("No Owner");
	if (AActor* Owner = GetOwner())
	{
		OwnerName = Owner->GetName();
	}

	return OwnerName;
}
