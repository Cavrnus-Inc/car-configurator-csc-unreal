#include "CavrnusValueSyncVector.h"
#include "Types/CavrnusLiveVectorPropertyUpdate.h"
#include <Kismet/KismetSystemLibrary.h>
#include <Materials/MaterialInstanceDynamic.h>
#include <Misc/EngineVersionComparison.h>

//===========================================================
UCavrnusValueSyncVector::UCavrnusValueSyncVector()
{
	PropertyName = TEXT("Vector");
}


//===========================================================
UCavrnusValueSyncVector::~UCavrnusValueSyncVector()
{
}

//===========================================================

void UCavrnusValueSyncVector::BeginPlay()
{
	Super::BeginPlay();

	OnSpaceConnected.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusValueSyncVector, SpaceConnected));
	OnVectorPropertyUpdated.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusValueSyncVector, VectorPropertyUpdated));

	UCavrnusFunctionLibrary::AwaitAnySpaceConnection(OnSpaceConnected);
}

void UCavrnusValueSyncVector::EndPlay(EEndPlayReason::Type Reason)
{
	if (liveUpdater)
	{
		liveUpdater->Cancel();
		liveUpdater = nullptr;
	}

	Super::EndPlay(Reason);
}

void UCavrnusValueSyncVector::DefineDefaultPropertyValue()
{
	UCavrnusFunctionLibrary::DefineVectorPropertyDefaultValue(SpaceConn, ContainerName, PropertyName, GetVector());
}

FCavrnusBinding UCavrnusValueSyncVector::BindPropertyValue()
{
	return UCavrnusFunctionLibrary::BindVectorPropertyValue(SpaceConn, ContainerName, PropertyName, OnVectorPropertyUpdated);
}

void UCavrnusValueSyncVector::VectorPropertyUpdated(FVector PropertyValue)
{
	if (liveUpdater != nullptr)
		return;

	SetVector(PropertyValue);
}

void UCavrnusValueSyncVector::SendPropertyChanges()
{
	if (!SendChanges)
		return;

	FVector PropertyValue;
	if (liveUpdater == nullptr)
		PropertyValue = UCavrnusFunctionLibrary::GetVectorPropertyValue(SpaceConn, ContainerName, PropertyName);
	else
		PropertyValue = lastPostedTransientValue;

	FVector LocalPropertyValue = GetVector();
	if (PropertyValue.Equals(LocalPropertyValue, 0.001f))
	{
		if (liveUpdater == nullptr)
			return;

		if (!ContainerName.StartsWith("users/"))
		{
			lastPostedTransientValue = LocalPropertyValue;
			CastChecked<UCavrnusLiveVectorPropertyUpdate>(liveUpdater)->Finalize(lastPostedTransientValue);
			liveUpdater = nullptr;
		}
	}
	else
	{
		PostVectorToServerTransiently();
	}
}

void UCavrnusValueSyncVector::PostVectorToServerTransiently()
{
	lastPostedTransientValue = GetVector();

	if (liveUpdater == nullptr)
		liveUpdater = UCavrnusFunctionLibrary::BeginTransientVectorPropertyUpdate(SpaceConn, ContainerName, PropertyName, lastPostedTransientValue);
	else
		CastChecked<UCavrnusLiveVectorPropertyUpdate>(liveUpdater)->UpdateWithNewData(lastPostedTransientValue);
}

void UCavrnusValueSyncVector::SetMaterialDoubleVectorParameterValue(UMaterialInstanceDynamic* Material, const FVector& Value)
{
	if (Material)
	{
#if UE_VERSION_OLDER_THAN(5,1,0)
		Material->SetDoubleVectorParameterValue(FName(*PropertyName), Value);
#else
		Material->SetDoubleVectorParameterValue(FName(*PropertyName), FVector4(Value, 0.0f));
#endif
	}
}