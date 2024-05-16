#pragma once

#include "CoreMinimal.h"

// Always last
#include "CavrnusInputDevice.generated.h"
/**
 *
 */
USTRUCT(BlueprintType)
struct CAVRNUSCONNECTOR_API FCavrnusInputDevice
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Input")
	FString DeviceName = "";

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Input")
	FString DeviceId = "";

	FCavrnusInputDevice() = default;

	FCavrnusInputDevice(const FString& DeviceName, const FString& DeviceId)
		: DeviceName(DeviceName), DeviceId(DeviceId)
	{
	}
};