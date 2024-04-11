#include "CavrnusValueSyncBoolean.h"
#include "Types/CavrnusLiveBoolPropertyUpdate.h"
#include <Kismet/KismetSystemLibrary.h>

//===========================================================
UCavrnusValueSyncBoolean::UCavrnusValueSyncBoolean()
{
	PropertyName = TEXT("Boolean");
}


//===========================================================
UCavrnusValueSyncBoolean::~UCavrnusValueSyncBoolean()
{
}

//===========================================================

void UCavrnusValueSyncBoolean::BeginPlay()
{
	Super::BeginPlay();

	OnSpaceConnected.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusValueSyncBoolean, SpaceConnected));
	OnBoolPropertyUpdated.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusValueSyncBoolean, BooleanPropertyUpdated));

	UCavrnusFunctionLibrary::AwaitAnySpaceConnection(OnSpaceConnected);
}

void UCavrnusValueSyncBoolean::EndPlay(EEndPlayReason::Type Reason)
{
	if (liveUpdater)
	{
		liveUpdater->Cancel();
		liveUpdater = nullptr;
	}

	Super::EndPlay(Reason);
}

void UCavrnusValueSyncBoolean::BooleanPropertyUpdated(bool bPropertyValue)
{
	if (liveUpdater != nullptr)
		return;

	SetBoolean(bPropertyValue);
}

void UCavrnusValueSyncBoolean::DefineDefaultPropertyValue()
{
	UCavrnusFunctionLibrary::DefineBoolPropertyDefaultValue(SpaceConn, ContainerName, PropertyName, GetBoolean());
}

FCavrnusBinding UCavrnusValueSyncBoolean::BindPropertyValue()
{
	return UCavrnusFunctionLibrary::BindBooleanPropertyValue(SpaceConn, ContainerName, PropertyName, OnBoolPropertyUpdated);
}

void UCavrnusValueSyncBoolean::SendPropertyChanges()
{
	if (!SendChanges)
		return;

	bool PropertyValue;
	if (liveUpdater == nullptr)
		PropertyValue = UCavrnusFunctionLibrary::GetBoolPropertyValue(SpaceConn, ContainerName, PropertyName);
	else
		PropertyValue = lastPostedTransientValue;
	bool LocalPropertyValue = GetBoolean();
	if (PropertyValue == LocalPropertyValue)
	{
		if (liveUpdater == nullptr)
			return;

		if (!ContainerName.StartsWith("users/"))
		{
			lastPostedTransientValue = LocalPropertyValue;
			CastChecked<UCavrnusLiveBoolPropertyUpdate>(liveUpdater)->Finalize(lastPostedTransientValue);
			liveUpdater = nullptr;
		}
	}
	else
	{
		PostBooleanToServerTransiently();
	}
}

void UCavrnusValueSyncBoolean::PostBooleanToServerTransiently()
{
	lastPostedTransientValue = GetBoolean();

	if (liveUpdater == nullptr)
		liveUpdater = UCavrnusFunctionLibrary::BeginTransientBoolPropertyUpdate(SpaceConn, ContainerName, PropertyName, lastPostedTransientValue);
	else
		CastChecked<UCavrnusLiveBoolPropertyUpdate>(liveUpdater)->UpdateWithNewData(lastPostedTransientValue);
}