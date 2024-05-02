#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CavrnusValueSyncBase.h"
#include <CavrnusFunctionLibrary.h>
#include "Types\CavrnusCallbackTypes.h"

#include "CavrnusValueSyncTransform.generated.h"

// Class definition
UCLASS(BlueprintType, Blueprintable)
class CAVRNUSCONNECTOR_API UCavrnusValueSyncTransform : public UCavrnusValueSyncBase
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusValueSyncTransform();

	// Destructor
	~UCavrnusValueSyncTransform();

	UFUNCTION(BlueprintNativeEvent)
	FTransform GetTransform();
	virtual FTransform GetTransform_Implementation() { return FTransform(); }

	UFUNCTION(BlueprintNativeEvent)
	void SetTransform(FTransform PropertyValue);
	virtual void SetTransform_Implementation(FTransform PropertyValue) { }

	Cavrnus::FPropertyValue GetPropertyValue() override;
	void SetPropertyValue(Cavrnus::FPropertyValue value) override;
};