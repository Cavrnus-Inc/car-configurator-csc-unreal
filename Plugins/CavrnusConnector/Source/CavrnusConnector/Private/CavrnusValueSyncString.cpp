#include "CavrnusValueSyncString.h"
#include "Types/CavrnusLiveStringPropertyUpdate.h"
#include <Kismet/KismetSystemLibrary.h>

//===========================================================
UCavrnusValueSyncString::UCavrnusValueSyncString()
{
	PropertyName = TEXT("Text");
}


//===========================================================
UCavrnusValueSyncString::~UCavrnusValueSyncString()
{
}

//===========================================================

void UCavrnusValueSyncString::BeginPlay()
{
	Super::BeginPlay();

	OnSpaceConnected.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusValueSyncString, SpaceConnected));
	OnStringPropertyUpdated.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusValueSyncString, StringPropertyUpdated));

	UCavrnusFunctionLibrary::AwaitAnySpaceConnection(OnSpaceConnected);
}

void UCavrnusValueSyncString::EndPlay(EEndPlayReason::Type Reason)
{
	if (liveUpdater)
	{
		liveUpdater->Cancel();
		liveUpdater = nullptr;
	}

	Super::EndPlay(Reason);
}

void UCavrnusValueSyncString::DefineDefaultPropertyValue()
{
	UCavrnusFunctionLibrary::DefineStringPropertyDefaultValue(SpaceConn, ContainerName, PropertyName, GetString());
}

FCavrnusBinding UCavrnusValueSyncString::BindPropertyValue()
{
	return UCavrnusFunctionLibrary::BindStringPropertyValue(SpaceConn, ContainerName, PropertyName, OnStringPropertyUpdated);
}


void UCavrnusValueSyncString::StringPropertyUpdated(FString PropertyValue)
{
	if (liveUpdater != nullptr)
		return;

	SetString(PropertyValue);
}

void UCavrnusValueSyncString::SendPropertyChanges()
{
	if (!SendChanges)
		return;

	FString PropertyValue;
	if (liveUpdater == nullptr)
		PropertyValue = UCavrnusFunctionLibrary::GetStringPropertyValue(SpaceConn, ContainerName, PropertyName);
	else
		PropertyValue = lastPostedTransientValue;

	FString LocalPropertyValue = GetString();
	if (PropertyValue == LocalPropertyValue)
	{
		if (liveUpdater == nullptr)
			return;

		if (!ContainerName.StartsWith("users/"))
		{
			lastPostedTransientValue = LocalPropertyValue;
			CastChecked<UCavrnusLiveStringPropertyUpdate>(liveUpdater)->Finalize(lastPostedTransientValue);
			liveUpdater = nullptr;
		}
	}
	else
	{
		PostStringToServerTransiently();
	}
}

void UCavrnusValueSyncString::PostStringToServerTransiently()
{
	lastPostedTransientValue = GetString();

	if (liveUpdater == nullptr)
		liveUpdater = UCavrnusFunctionLibrary::BeginTransientStringPropertyUpdate(SpaceConn, ContainerName, PropertyName, lastPostedTransientValue);
	else
		CastChecked<UCavrnusLiveStringPropertyUpdate>(liveUpdater)->UpdateWithNewData(lastPostedTransientValue);
}