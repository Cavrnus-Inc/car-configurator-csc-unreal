#include "CavrnusValueSyncTransform.h"
#include "Types/CavrnusLiveTransformPropertyUpdate.h"
#include <Kismet/KismetSystemLibrary.h>

//===========================================================
UCavrnusValueSyncTransform::UCavrnusValueSyncTransform()
{
	PropertyName = TEXT("Transform");
}


//===========================================================
UCavrnusValueSyncTransform::~UCavrnusValueSyncTransform()
{
}

//===========================================================

void UCavrnusValueSyncTransform::BeginPlay()
{
	Super::BeginPlay();

	OnSpaceConnected.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusValueSyncTransform, SpaceConnected));
	OnTransformPropertyUpdated.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusValueSyncTransform, TransformPropertyUpdated));

	UCavrnusFunctionLibrary::AwaitAnySpaceConnection(OnSpaceConnected);
}

void UCavrnusValueSyncTransform::EndPlay(EEndPlayReason::Type Reason)
{
	if (liveUpdater)
	{
		liveUpdater->Cancel();
		liveUpdater = nullptr;
	}

	Super::EndPlay(Reason);
}

void UCavrnusValueSyncTransform::DefineDefaultPropertyValue()
{
	UCavrnusFunctionLibrary::DefineTransformPropertyDefaultValue(SpaceConn, ContainerName, PropertyName, GetTransform());
}

FCavrnusBinding UCavrnusValueSyncTransform::BindPropertyValue()
{
	return UCavrnusFunctionLibrary::BindTransformPropertyValue(SpaceConn, ContainerName, PropertyName, OnTransformPropertyUpdated);
}

void UCavrnusValueSyncTransform::TransformPropertyUpdated(FTransform PropertyValue)
{
	if (liveUpdater != nullptr)
		return;

	SetTransform(PropertyValue);
}

void UCavrnusValueSyncTransform::SendPropertyChanges()
{
	if (!SendChanges)
		return;

	FTransform PropertyValue;
	if (liveUpdater == nullptr)
		PropertyValue = UCavrnusFunctionLibrary::GetTransformPropertyValue(SpaceConn, ContainerName, PropertyName);
	else
		PropertyValue = lastPostedTransientValue;

	FTransform LocalPropertyValue = GetTransform();
	if (PropertyValue.GetLocation().Equals(LocalPropertyValue.GetLocation(), 0.001f) && EulersAreEqual(PropertyValue.GetRotation(), LocalPropertyValue.GetRotation(), 0.00174533f) && PropertyValue.GetScale3D().Equals(LocalPropertyValue.GetScale3D(), 0.001f))
	{
		if (liveUpdater == nullptr)
			return;

		if (!ContainerName.StartsWith("users/"))
		{
			lastPostedTransientValue = LocalPropertyValue;
			CastChecked<UCavrnusLiveTransformPropertyUpdate>(liveUpdater)->Finalize(lastPostedTransientValue);
			liveUpdater = nullptr;
		}
	}
	else
	{
		PostTransformToServerTransiently();
	}
}

bool UCavrnusValueSyncTransform::EulersAreEqual(FQuat4d a, FQuat4d b, float lambda)
{
	double angle = a.AngularDistance(b);

	return angle < lambda;
}

void UCavrnusValueSyncTransform::PostTransformToServerTransiently()
{
	lastPostedTransientValue = GetTransform();

	if (liveUpdater == nullptr)
		liveUpdater = UCavrnusFunctionLibrary::BeginTransientTransformPropertyUpdate(SpaceConn, ContainerName, PropertyName, lastPostedTransientValue);
	else
		CastChecked<UCavrnusLiveTransformPropertyUpdate>(liveUpdater)->UpdateWithNewData(lastPostedTransientValue);
}