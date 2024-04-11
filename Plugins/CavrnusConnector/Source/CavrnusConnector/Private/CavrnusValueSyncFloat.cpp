#include "CavrnusValueSyncFloat.h"
#include "Types/CavrnusLiveFloatPropertyUpdate.h"
#include <Kismet/KismetSystemLibrary.h>

//===========================================================
UCavrnusValueSyncFloat::UCavrnusValueSyncFloat()
{
	PropertyName = TEXT("Float");
}


//===========================================================
UCavrnusValueSyncFloat::~UCavrnusValueSyncFloat()
{
}

//===========================================================

void UCavrnusValueSyncFloat::BeginPlay()
{
	Super::BeginPlay();

	OnSpaceConnected.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusValueSyncFloat, SpaceConnected));
	OnFloatPropertyUpdated.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusValueSyncFloat, FloatPropertyUpdated));

	UCavrnusFunctionLibrary::AwaitAnySpaceConnection(OnSpaceConnected);
}

void UCavrnusValueSyncFloat::EndPlay(EEndPlayReason::Type Reason)
{
	if (liveUpdater)
	{
		liveUpdater->Cancel();
		liveUpdater = nullptr;
	}

	Super::EndPlay(Reason);
}

void UCavrnusValueSyncFloat::DefineDefaultPropertyValue()
{
	UCavrnusFunctionLibrary::DefineFloatPropertyDefaultValue(SpaceConn, ContainerName, PropertyName, GetFloat());
}

FCavrnusBinding UCavrnusValueSyncFloat::BindPropertyValue()
{
	return UCavrnusFunctionLibrary::BindFloatPropertyValue(SpaceConn, ContainerName, PropertyName, OnFloatPropertyUpdated);
}

void UCavrnusValueSyncFloat::FloatPropertyUpdated(float PropertyValue)
{
	if (liveUpdater != nullptr)
		return;

	SetFloat(PropertyValue);
}

void UCavrnusValueSyncFloat::SendPropertyChanges()
{
	if (!SendChanges)
		return;

	float PropertyValue;
	if (liveUpdater == nullptr)
		PropertyValue = UCavrnusFunctionLibrary::GetFloatPropertyValue(SpaceConn, ContainerName, PropertyName);
	else
		PropertyValue = lastPostedTransientValue;

	float LocalPropertyValue = GetFloat();
	if (FMath::IsNearlyEqual(PropertyValue, LocalPropertyValue, .0001f))
	{
		if (liveUpdater == nullptr)
			return;

		if (!ContainerName.StartsWith("users/"))
		{
			lastPostedTransientValue = LocalPropertyValue;
			CastChecked<UCavrnusLiveFloatPropertyUpdate>(liveUpdater)->Finalize(lastPostedTransientValue);
			liveUpdater = nullptr;
		}
	}
	else
	{
		PostFloatToServerTransiently();
	}
}

void UCavrnusValueSyncFloat::PostFloatToServerTransiently()
{
	lastPostedTransientValue = GetFloat();

	if (liveUpdater == nullptr)
		liveUpdater = UCavrnusFunctionLibrary::BeginTransientFloatPropertyUpdate(SpaceConn, ContainerName, PropertyName, lastPostedTransientValue);
	else
		CastChecked<UCavrnusLiveFloatPropertyUpdate>(liveUpdater)->UpdateWithNewData(lastPostedTransientValue);
}