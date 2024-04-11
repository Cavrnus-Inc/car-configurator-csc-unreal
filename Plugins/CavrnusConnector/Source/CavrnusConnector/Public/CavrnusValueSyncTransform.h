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

	virtual void BeginPlay();
	virtual void EndPlay(EEndPlayReason::Type Reason);

	UFUNCTION(BlueprintNativeEvent)
	FTransform GetTransform();
	virtual FTransform GetTransform_Implementation() { return FTransform(); }

	UFUNCTION(BlueprintNativeEvent)
	void SetTransform(FTransform PropertyValue);
	virtual void SetTransform_Implementation(FTransform PropertyValue) { }

	UFUNCTION()
	void TransformPropertyUpdated(FTransform PropertyValue);

	void PostTransformToServerTransiently();

	// --------------------- IPropertySyncInterface implementation ---------------------------------------

	void DefineDefaultPropertyValue();

	FCavrnusBinding BindPropertyValue();

	void SendPropertyChanges();

	// ----------------------------------------------------------------------------------------------------

protected:

	FCavrnusSpaceConnected OnSpaceConnected;
	FTransformPropertyUpdated OnTransformPropertyUpdated;
	FTransform lastPostedTransientValue;

	bool EulersAreEqual(FQuat4d a, FQuat4d b, float lambda);
};