#pragma once

#include "CoreMinimal.h"

// Always last
#include "CavrnusVideoInputDevice.generated.h"
/**
 *
 */
USTRUCT(BlueprintType)
struct CAVRNUSCONNECTOR_API FCavrnusVideoInputDevice
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Input")
	FString DeviceName = "";

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Input")
	FString DeviceId = "";

	FCavrnusVideoInputDevice() = default;

	FCavrnusVideoInputDevice(const FString& DeviceName, const FString& DeviceId)
		: DeviceName(DeviceName), DeviceId(DeviceId)
	{
	}
};