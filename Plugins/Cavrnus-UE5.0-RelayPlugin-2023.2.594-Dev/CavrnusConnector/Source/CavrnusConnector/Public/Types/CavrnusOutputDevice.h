#pragma once

#include "CoreMinimal.h"

// Always last
#include "CavrnusOutputDevice.generated.h"
/**
 *
 */
USTRUCT(BlueprintType)
struct CAVRNUSCONNECTOR_API FCavrnusOutputDevice
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Input")
	FString DeviceName;

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Input")
	FString DeviceId;
};