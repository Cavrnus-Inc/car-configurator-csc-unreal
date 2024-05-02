#include "CavrnusValueSyncMaterialDoubleVector.h"
#include <Kismet/KismetSystemLibrary.h>
#include <Materials/MaterialInstanceDynamic.h>
#include <Misc/EngineVersionComparison.h>

//===========================================================
UCavrnusValueSyncMaterialDoubleVector::UCavrnusValueSyncMaterialDoubleVector()
{
}


//===========================================================
UCavrnusValueSyncMaterialDoubleVector::~UCavrnusValueSyncMaterialDoubleVector()
{
}

void UCavrnusValueSyncMaterialDoubleVector::SetMaterialDoubleVectorParameterValue(UMaterialInstanceDynamic* Material, const FVector& Value)
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
