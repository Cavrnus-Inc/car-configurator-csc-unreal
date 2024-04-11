#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CavrnusValueSyncBase.h"
#include <CavrnusFunctionLibrary.h>
#include "Types\CavrnusCallbackTypes.h"

#include "CavrnusValueSyncString.generated.h"

// Class definition
UCLASS(BlueprintType, Blueprintable)
class CAVRNUSCONNECTOR_API UCavrnusValueSyncString : public UCavrnusValueSyncBase
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusValueSyncString();

	// Destructor
	~UCavrnusValueSyncString();

	virtual void BeginPlay();
	virtual void EndPlay(EEndPlayReason::Type Reason);

	UFUNCTION(BlueprintNativeEvent)
	FString GetString();
	virtual FString GetString_Implementation() { return ""; }

	UFUNCTION(BlueprintNativeEvent)
	void SetString(const FString& PropertyValue);
	virtual void SetString_Implementation(const FString& PropertyValue) {}

	UFUNCTION()
	void StringPropertyUpdated(FString PropertyValue);

	void PostStringToServerTransiently();

	// --------------------- IPropertySyncInterface implementation ---------------------------------------

	void DefineDefaultPropertyValue();

	FCavrnusBinding BindPropertyValue();

	void SendPropertyChanges();

	// ----------------------------------------------------------------------------------------------------

protected:

	FCavrnusSpaceConnected OnSpaceConnected;
	FStringPropertyUpdated OnStringPropertyUpdated;
	FString lastPostedTransientValue;
};