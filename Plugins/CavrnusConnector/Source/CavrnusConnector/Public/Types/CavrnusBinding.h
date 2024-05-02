#pragma once

#include "CoreMinimal.h"
#include "GenericPlatform/GenericPlatformMisc.h"

// Always last
#include "CavrnusBinding.generated.h"
/**
 *
 */
USTRUCT(BlueprintType)
struct CAVRNUSCONNECTOR_API FCavrnusBinding
{
	GENERATED_BODY()

	TFunction<void()> Unhook = [] {};

	FCavrnusBinding(TFunction<void()> unhook) : Unhook(unhook) { }

	FCavrnusBinding() = default;
};