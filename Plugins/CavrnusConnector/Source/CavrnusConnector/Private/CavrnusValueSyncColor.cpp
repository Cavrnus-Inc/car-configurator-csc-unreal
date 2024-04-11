#include "CavrnusValueSyncColor.h"
#include "Types/CavrnusLiveColorPropertyUpdate.h"
#include <Kismet/KismetSystemLibrary.h>

//===========================================================
UCavrnusValueSyncColor::UCavrnusValueSyncColor()
{
	PropertyName = TEXT("Color");
}


//===========================================================
UCavrnusValueSyncColor::~UCavrnusValueSyncColor()
{
}

//===========================================================

void UCavrnusValueSyncColor::BeginPlay()
{
	Super::BeginPlay();

	OnSpaceConnected.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusValueSyncColor, SpaceConnected));
	OnColorPropertyUpdated.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusValueSyncColor, ColorPropertyUpdated));

	UCavrnusFunctionLibrary::AwaitAnySpaceConnection(OnSpaceConnected);
}

void UCavrnusValueSyncColor::EndPlay(EEndPlayReason::Type Reason)
{
	if (liveUpdater)
	{
		liveUpdater->Cancel();
		liveUpdater = nullptr;
	}

	Super::EndPlay(Reason);
}

void UCavrnusValueSyncColor::DefineDefaultPropertyValue()
{
	UCavrnusFunctionLibrary::DefineColorPropertyDefaultValue(SpaceConn, ContainerName, PropertyName, GetColor());
}

FCavrnusBinding UCavrnusValueSyncColor::BindPropertyValue()
{
	return UCavrnusFunctionLibrary::BindColorPropertyValue(SpaceConn, ContainerName, PropertyName, OnColorPropertyUpdated);
}

void UCavrnusValueSyncColor::ColorPropertyUpdated(FLinearColor PropertyValue)
{
	if (liveUpdater != nullptr)
		return;

	SetColor(PropertyValue);
}

void UCavrnusValueSyncColor::SendPropertyChanges()
{
	if (!SendChanges)
		return;

	FLinearColor PropertyValue;
	if (liveUpdater == nullptr)
		PropertyValue = UCavrnusFunctionLibrary::GetColorPropertyValue(SpaceConn, ContainerName, PropertyName);
	else
		PropertyValue = lastPostedTransientValue;

	FLinearColor LocalPropertyValue = GetColor();
	if (PropertyValue.Equals(LocalPropertyValue, 0.0001))
	{
		if (liveUpdater == nullptr)
			return;

		if (!ContainerName.StartsWith("users/"))
		{
			lastPostedTransientValue = LocalPropertyValue;
			CastChecked<UCavrnusLiveColorPropertyUpdate>(liveUpdater)->Finalize(LocalPropertyValue);
			liveUpdater = nullptr;
		}
	}
	else
	{
		PostColorToServerTransiently();
	}
}

void UCavrnusValueSyncColor::PostColorToServerTransiently()
{
	lastPostedTransientValue = GetColor();

	if (liveUpdater == nullptr)
		liveUpdater = UCavrnusFunctionLibrary::BeginTransientColorPropertyUpdate(SpaceConn, ContainerName, PropertyName, lastPostedTransientValue);
	else
		CastChecked<UCavrnusLiveColorPropertyUpdate>(liveUpdater)->UpdateWithNewData(lastPostedTransientValue);
}