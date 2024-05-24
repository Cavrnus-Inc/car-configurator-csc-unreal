#pragma once

#include "CoreMinimal.h"
#include "GenericPlatform/GenericPlatformMisc.h"

// Always last
#include "CavrnusBinding.generated.h"
/**
 *
 */
UCLASS(BlueprintType)
class CAVRNUSCONNECTOR_API UCavrnusBinding : public UObject
{
	GENERATED_BODY()

public:

	void SetupUnbind(TFunction<void()> unhook);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Cavrnus")
	void Unbind();

private:

	TFunction<void()>* Unhook = nullptr;
};