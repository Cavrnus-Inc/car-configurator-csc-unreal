#pragma once

#include "CoreMinimal.h"
#include "CavrnusValueSyncVector.h"
#include "CavrnusValueSyncMaterialDoubleVector.generated.h"

// Class definition
UCLASS(BlueprintType, Blueprintable)
class CAVRNUSCONNECTOR_API UCavrnusValueSyncMaterialDoubleVector : public UCavrnusValueSyncVector
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusValueSyncMaterialDoubleVector();

	// Destructor
	~UCavrnusValueSyncMaterialDoubleVector();

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	void SetMaterialDoubleVectorParameterValue(UMaterialInstanceDynamic* Material, const FVector& Value);
};
