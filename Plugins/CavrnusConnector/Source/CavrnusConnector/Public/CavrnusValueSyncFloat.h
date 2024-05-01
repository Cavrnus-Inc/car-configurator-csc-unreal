#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CavrnusValueSyncBase.h"
#include <CavrnusFunctionLibrary.h>
#include "Types\CavrnusCallbackTypes.h"

#include "CavrnusValueSyncFloat.generated.h"

// Class definition
UCLASS(BlueprintType, Blueprintable)
class CAVRNUSCONNECTOR_API UCavrnusValueSyncFloat : public UCavrnusValueSyncBase
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusValueSyncFloat();

	// Destructor
	~UCavrnusValueSyncFloat();

	UFUNCTION(BlueprintNativeEvent)
	float GetFloat();
	virtual float GetFloat_Implementation() { return 0.0; }

	UFUNCTION(BlueprintNativeEvent)
	void SetFloat(float PropertyValue);
	virtual void SetFloat_Implementation(float PropertyValue) {};

	Cavrnus::FPropertyValue GetPropertyValue() override;
	void SetPropertyValue(Cavrnus::FPropertyValue value) override;
};