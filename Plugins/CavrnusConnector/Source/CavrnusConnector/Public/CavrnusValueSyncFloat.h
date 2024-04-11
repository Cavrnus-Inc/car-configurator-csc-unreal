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

	virtual void BeginPlay();
	virtual void EndPlay(EEndPlayReason::Type Reason);

	UFUNCTION(BlueprintNativeEvent)
	float GetFloat();
	virtual float GetFloat_Implementation() { return 0.0; }

	UFUNCTION(BlueprintNativeEvent)
	void SetFloat(float PropertyValue);
	virtual void SetFloat_Implementation(float PropertyValue) {};

	UFUNCTION()
	void FloatPropertyUpdated(float PropertyValue);

	void PostFloatToServerTransiently();

	// --------------------- IPropertySyncInterface implementation ---------------------------------------

	void DefineDefaultPropertyValue();

	FCavrnusBinding BindPropertyValue();

	void SendPropertyChanges();

	// ----------------------------------------------------------------------------------------------------

protected:

	FCavrnusSpaceConnected OnSpaceConnected;
	FFloatPropertyUpdated OnFloatPropertyUpdated;
	float lastPostedTransientValue;
};