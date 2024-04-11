#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CavrnusValueSyncBase.h"
#include <CavrnusFunctionLibrary.h>
#include "Types\CavrnusCallbackTypes.h"

#include "CavrnusValueSyncBoolean.generated.h"

// Class definition
UCLASS(BlueprintType, Blueprintable)
class CAVRNUSCONNECTOR_API UCavrnusValueSyncBoolean : public UCavrnusValueSyncBase
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusValueSyncBoolean();

	// Destructor
	~UCavrnusValueSyncBoolean();

	virtual void BeginPlay();
	virtual void EndPlay(EEndPlayReason::Type Reason);

	UFUNCTION(BlueprintNativeEvent)
	bool GetBoolean();
	virtual bool GetBoolean_Implementation() { return false; }

	UFUNCTION(BlueprintNativeEvent)
	void SetBoolean(bool bPropertyValue);
	virtual void SetBoolean_Implementation(bool bPropertyValue) {}

	UFUNCTION()
	void BooleanPropertyUpdated(bool bPropertyValue);

	void PostBooleanToServerTransiently();

	// --------------------- IPropertySyncInterface implementation ---------------------------------------

	void DefineDefaultPropertyValue();

	FCavrnusBinding BindPropertyValue();

	void SendPropertyChanges();

	// ----------------------------------------------------------------------------------------------------

protected:

	FCavrnusSpaceConnected OnSpaceConnected;
	FBoolPropertyUpdated OnBoolPropertyUpdated;
	bool lastPostedTransientValue;
};