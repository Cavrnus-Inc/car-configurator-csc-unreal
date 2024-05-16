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

typedef TFunction<void(FString)> CavrnusError;

typedef TFunction<void(FCavrnusAuthentication)> CavrnusAuthRecv;

typedef TFunction<void(TArray<FCavrnusSpaceInfo>)> CavrnusAllSpacesInfoEvent;
typedef TFunction<void(FCavrnusSpaceInfo)> CavrnusSpaceInfoEvent;

typedef TFunction<void(FString)> CavrnusSpaceBeginLoading;
typedef TFunction<void(FCavrnusSpaceConnection)> CavrnusSpaceConnected;

typedef TFunction<void(Cavrnus::FPropertyValue, FString, FString)> CavrnusPropertyFunction;
typedef TFunction<void(FString, FString, FString)> CavrnusStringFunction;
typedef TFunction<void(bool, FString, FString)> CavrnusBoolFunction;
typedef TFunction<void(float, FString, FString)> CavrnusFloatFunction;
typedef TFunction<void(FLinearColor, FString, FString)> CavrnusColorFunction;
typedef TFunction<void(FVector4, FString, FString)> CavrnusVectorFunction;
typedef TFunction<void(FTransform, FString, FString)> CavrnusTransformFunction;

typedef TFunction<void(FCavrnusUser user)> CavrnusSpaceUserEvent;

typedef TFunction<void(const TArray<FCavrnusInputDevice>&)> CavrnusAvailableInputDevices;
typedef TFunction<void(const TArray<FCavrnusOutputDevice>&)> CavrnusAvailableOutputDevices;
typedef TFunction<void(const TArray<FCavrnusVideoInputDevice>&)> CavrnusAvailableVideoInputDevices;

typedef TFunction<void(UTexture2D*)> VideoFrameUpdateFunction;

typedef TFunction<void(FString, bool)> CavrnusPolicyUpdated;

typedef TFunction<void(FCavrnusSpawnedObject)> CavrnusSpawnedObjectFunction;

typedef TFunction<void(float, FString)> CavrnusContentProgressFunction;
typedef TFunction<void(TArray<uint8>)> CavrnusContentFunction;
typedef TFunction<void(TArray<FCavrnusRemoteContent>)> CavrnusRemoteContentFunction;
typedef TFunction<void(FCavrnusRemoteContent)> CavrnusUploadCompleteFunction;

UCLASS(Abstract)
class UCavrnusCallbackTypes : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

private:

};

