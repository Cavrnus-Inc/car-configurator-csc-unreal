#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include <Containers/Map.h>
#include <Delegates/Delegate.h>
#include "Types/CavrnusInputDevice.h"
#include "Types/CavrnusOutputDevice.h"
#include "Types/CavrnusVideoInputDevice.h"
#include "Types/CavrnusAuthentication.h"
#include "Types/CavrnusSpaceConnection.h"
#include "Types/CavrnusSpaceInfo.h"
#include "Types/CavrnusUser.h"
#include "Types/CavrnusBinding.h"
#include "Types/CavrnusSpawnedObject.h"
#include "Types/CavrnusPropertyValue.h"
#include "CavrnusRemoteContent.h"

// Always last
#include "CavrnusCallbackTypes.generated.h"
/**
 *
 */

typedef TFunction<void(const FString&)> CavrnusError;

typedef TFunction<void(const FCavrnusAuthentication&)> CavrnusAuthRecv;

typedef TFunction<void(const TArray<FCavrnusSpaceInfo>&)> CavrnusAllSpacesInfoEvent;
typedef TFunction<void(const FCavrnusSpaceInfo&)> CavrnusSpaceInfoEvent;

typedef TFunction<void(const FString&)> CavrnusSpaceBeginLoading;
typedef TFunction<void(const FCavrnusSpaceConnection&)> CavrnusSpaceConnected;

typedef TFunction<void(const Cavrnus::FPropertyValue&, const FString&, const FString&)> CavrnusPropertyFunction;
typedef TFunction<void(const FString&, const FString&, const FString&)> CavrnusStringFunction;
typedef TFunction<void(bool, const FString&, const FString&)> CavrnusBoolFunction;
typedef TFunction<void(float, const FString&, const FString&)> CavrnusFloatFunction;
typedef TFunction<void(const FLinearColor&, const FString&, const FString&)> CavrnusColorFunction;
typedef TFunction<void(const FVector4&, const FString&, const FString&)> CavrnusVectorFunction;
typedef TFunction<void(const FTransform&, const FString&, const FString&)> CavrnusTransformFunction;

typedef TFunction<void(const FCavrnusUser&)> CavrnusSpaceUserEvent;

typedef TFunction<void(const TArray<FCavrnusInputDevice>&)> CavrnusAvailableInputDevices;
typedef TFunction<void(const TArray<FCavrnusOutputDevice>&)> CavrnusAvailableOutputDevices;
typedef TFunction<void(const TArray<FCavrnusVideoInputDevice>&)> CavrnusAvailableVideoInputDevices;

typedef TFunction<void(const FCavrnusInputDevice&)> CavrnusSavedInputDevice;
typedef TFunction<void(const FCavrnusOutputDevice&)> CavrnusSavedOutputDevice;

typedef TFunction<void(UTexture2D*)> VideoFrameUpdateFunction;

typedef TFunction<void(const FString&, bool)> CavrnusPolicyUpdated;

typedef TFunction<void(const FCavrnusSpawnedObject&)> CavrnusSpawnedObjectFunction;

typedef TFunction<void(float, const FString&)> CavrnusContentProgressFunction;
typedef TFunction<void(const TArray<uint8>&)> CavrnusContentFunction;
typedef TFunction<void(const TArray<FCavrnusRemoteContent>&)> CavrnusRemoteContentFunction;
typedef TFunction<void(const FCavrnusRemoteContent&)> CavrnusUploadCompleteFunction;

UCLASS(Abstract)
class UCavrnusCallbackTypes : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

private:

};

