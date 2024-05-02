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

	UFUNCTION(BlueprintNativeEvent)
	FString GetString();
	virtual FString GetString_Implementation() { return ""; }

	UFUNCTION(BlueprintNativeEvent)
	void SetString(const FString& PropertyValue);
	virtual void SetString_Implementation(const FString& PropertyValue) {}

	Cavrnus::FPropertyValue GetPropertyValue() override;
	void SetPropertyValue(Cavrnus::FPropertyValue value) override;
};