#pragma once
#include "CoreMinimal.h"
#include "CavrnusValueSyncBase.h"
#include "CavrnusFunctionLibrary.h"
#include "Types\CavrnusCallbackTypes.h"
#include <Components/ActorComponent.h>
#include "CavrnusValueSyncVector.generated.h"

// Class definition
UCLASS(BlueprintType, Blueprintable)
class CAVRNUSCONNECTOR_API UCavrnusValueSyncVector : public UCavrnusValueSyncBase
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusValueSyncVector();

	// Destructor
	~UCavrnusValueSyncVector();

	UFUNCTION(BlueprintNativeEvent)
	FVector GetVector();
	virtual FVector GetVector_Implementation() { return FVector(); }

	UFUNCTION(BlueprintNativeEvent)
	void SetVector(FVector PropertyValue);
	virtual void SetVector_Implementation(FVector PropertyValue) {}

	Cavrnus::FPropertyValue GetPropertyValue() override;
	void SetPropertyValue(Cavrnus::FPropertyValue value) override;
};