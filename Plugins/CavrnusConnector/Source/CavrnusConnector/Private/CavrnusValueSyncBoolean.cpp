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

Cavrnus::FPropertyValue UCavrnusValueSyncBoolean::GetPropertyValue()
{
	return Cavrnus::FPropertyValue::BoolPropValue(GetBoolean());
}

void UCavrnusValueSyncBoolean::SetPropertyValue(Cavrnus::FPropertyValue value)
{
	SetBoolean(value.BoolValue);
}
