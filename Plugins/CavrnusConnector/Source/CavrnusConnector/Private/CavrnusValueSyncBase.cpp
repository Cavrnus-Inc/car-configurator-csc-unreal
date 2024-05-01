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
	PrimaryComponentTick.bCanEverTick = true;
}


//===========================================================
UCavrnusValueSyncBase::~UCavrnusValueSyncBase()
{
}

//===========================================================

void UCavrnusValueSyncBase::BeginPlay()
{
	Super::BeginPlay();

	CavrnusSpaceFunction spaceCallback = [this](const FCavrnusSpaceConnection& SpaceConn)
	{
		SpaceConnected(SpaceConn);
	};
	UCavrnusFunctionLibrary::AwaitAnySpaceConnection(spaceCallback);
}

void UCavrnusValueSyncBase::SpaceConnected(FCavrnusSpaceConnection SpaceConnection)
{
	SpaceConn = SpaceConnection;
}

void UCavrnusValueSyncBase::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	shouldSync = false;

	if (liveUpdater != nullptr)
		liveUpdater->Finalize();
	liveUpdater = nullptr;

	PropertyBinding.Unhook();
}

void UCavrnusValueSyncBase::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	if (SpaceConn.SpaceConnectionId == -1)
		return;

	// This can't go in SpaceConnected, cuz the container state is still invalid during component regen at that point.
	// We need to wait for a valid state to start polling/bindinge :P
	if (!shouldSync) 
	{
		if (!GetContainer())
		{
			// This can be valid if Unreal rebuilds the component tree
			//UE_LOG(LogTemp, Error, TEXT("Component: %s, Owner: %s, PropertyName: %s - Properties Container not found"), *GetName(), *ReportOwnerName(), *PropertyName);
			return;
		}
		if (GetContainerName().IsEmpty())
		{
			// This can be valid if Unreal rebuilds the component tree
			//UE_LOG(LogTemp, Error, TEXT("Component: %s, Owner: %s, PropertyName: %s - Container Name on UCavrnusPropertiesContainer is Empty"), *GetName(), *ReportOwnerName(), *PropertyName);
			return;
		}

		shouldSync = true;

		if (InitialSetupComplete && !(UCavrnusFunctionLibrary::GetGenericPropertyValue(SpaceConn, GetContainerName(), PropertyName) == GetPropertyValue()))
		{
			UCavrnusFunctionLibrary::PostGenericPropertyUpdate(SpaceConn, GetContainerName(), PropertyName, GetPropertyValue());
		}

		UCavrnusFunctionLibrary::DefineGenericPropertyDefaultValue(SpaceConn, GetContainerName(), PropertyName, GetPropertyValue(), false);
		if (RecvChanges)
		{
			CavrnusPropertyFunction propUpdateCallback = [this](const Cavrnus::FPropertyValue& Value, const FString& ContainerName, const FString& PropertyName)
			{
				if (liveUpdater == nullptr)
					SetPropertyValue(Value);
			};

			PropertyBinding = UCavrnusFunctionLibrary::BindGenericPropertyValue(SpaceConn, GetContainerName(), PropertyName, propUpdateCallback);
		}
		else
		{
			PropertyBinding = FCavrnusBinding();
		}

		InitialSetupComplete = true;
	}

	//if (GetContainerName() == "TransformCube")
	//	UE_LOG(LogTemp, Error, TEXT("test"));

	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!shouldSync || !SendChanges)
		return;

	float gameTimeMs = FPlatformTime::ToMilliseconds(FPlatformTime::Cycles());
	if (gameTimeMs < msLastPollTime + msPollingTime)
		return;

	msLastPollTime = gameTimeMs;

	if (GIsReconstructingBlueprintInstances || GIsReinstancing)
		return;

	TrySendPropertyChanges();
}

void UCavrnusValueSyncBase::TrySendPropertyChanges()
{
	Cavrnus::FPropertyValue localValue = GetPropertyValue();
	Cavrnus::FPropertyValue serverValue = UCavrnusFunctionLibrary::GetGenericPropertyValue(SpaceConn, GetContainerName(), PropertyName);

	if (liveUpdater != nullptr)
		serverValue = lastSentPropValue;

	if (serverValue == localValue)
	{
		if (liveUpdater == nullptr)
			return;

		float gameTimeMs = FPlatformTime::ToMilliseconds(FPlatformTime::Cycles());
		if (gameTimeMs - liveUpdater->lastUpdatedTimeMs <= msToWaitBeforePosting)
			return;

		if (!GetContainerName().StartsWith("users/"))
		{
			lastSentPropValue = localValue;
			liveUpdater->Finalize(localValue);
			liveUpdater = nullptr;
		}
	}
	else
	{
		lastSentPropValue = localValue;

		if (liveUpdater == nullptr)
		{
			liveUpdater = new Cavrnus::CavrnusVirtualPropertyUpdate(UCavrnusFunctionLibrary::GetDataModel(), SpaceConn, FPropertyId(GetContainerName(), PropertyName), lastSentPropValue);
		}
		else
		{
			liveUpdater->UpdateWithNewData(lastSentPropValue);
		}
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

FString UCavrnusValueSyncBase::GetContainerName() const
{
	return GetContainer()->GetContainerName();
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



#pragma region EditorScript

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

#pragma endregion

