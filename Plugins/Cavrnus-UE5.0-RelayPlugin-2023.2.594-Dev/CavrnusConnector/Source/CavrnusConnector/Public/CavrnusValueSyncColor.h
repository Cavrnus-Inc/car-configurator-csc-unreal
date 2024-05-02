#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CavrnusValueSyncBase.h"
#include <CavrnusFunctionLibrary.h>
#include "Types\CavrnusCallbackTypes.h"

#include "CavrnusValueSyncColor.generated.h"

// Class definition
UCLASS(BlueprintType, Blueprintable)
class CAVRNUSCONNECTOR_API UCavrnusValueSyncColor : public UCavrnusValueSyncBase
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusValueSyncColor();

	// Destructor
	~UCavrnusValueSyncColor();

	UFUNCTION(BlueprintNativeEvent)
	FLinearColor GetColor();
	virtual FLinearColor GetColor_Implementation() { return FLinearColor::Black; }

	UFUNCTION(BlueprintNativeEvent)
	void SetColor(FLinearColor PropertyValue);
	virtual void SetColor_Implementation(FLinearColor PropertyValue) {};

	Cavrnus::FPropertyValue GetPropertyValue() override;
	void SetPropertyValue(Cavrnus::FPropertyValue value) override;
};