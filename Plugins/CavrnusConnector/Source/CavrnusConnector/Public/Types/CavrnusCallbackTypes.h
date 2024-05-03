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

typedef TFunction<void(FString)> CavrnusSpaceBeginLoading;
typedef TFunction<void(FCavrnusSpaceConnection)> CavrnusSpaceConnected;

typedef TFunction<void(Cavrnus::FPropertyValue, FString, FString)> CavrnusPropertyFunction;
typedef TFunction<void(FString, FString, FString)> CavrnusStringFunction;
typedef TFunction<void(bool, FString, FString)> CavrnusBoolFunction;
typedef TFunction<void(float, FString, FString)> CavrnusFloatFunction;
typedef TFunction<void(FLinearColor, FString, FString)> CavrnusColorFunction;
typedef TFunction<void(FVector4, FString, FString)> CavrnusVectorFunction;
typedef TFunction<void(FTransform, FString, FString)> CavrnusTransformFunction;

typedef TFunction<void(UTexture2D*)> VideoFrameUpdateFunction;

typedef TFunction<void(FString, bool)> CavrnusPolicyUpdated;

typedef TFunction<void(FCavrnusSpawnedObject)> CavrnusSpawnedObjectFunction;

typedef TFunction<void(float, FString)> CavrnusContentProgressFunction;
typedef TFunction<void(TArray<uint8>)> CavrnusContentFunction;
typedef TFunction<void(TArray<FCavrnusRemoteContent>)> CavrnusRemoteContentFunction;
typedef TFunction<void(FCavrnusRemoteContent)> CavrnusUploadCompleteFunction;

DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusError, FString, Error);

DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusAuthRecv, FCavrnusAuthentication, Auth);

DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusAllSpacesInfoEvent, TArray<FCavrnusSpaceInfo>, SpacesInfo);
DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusSpaceInfoEvent, FCavrnusSpaceInfo, SpaceInfo);

DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusSpaceUserEvent, FCavrnusUser, User);
DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusUserVideoFrameEvent, UTexture2D*, UserVideoFrame);

DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusAvailableInputDevices, const TArray<FCavrnusInputDevice>&, InputDevices);
DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusAvailableOutputDevices, const TArray<FCavrnusOutputDevice>&, OutputDevices);
DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusAvailableVideoInputDevices, const TArray<FCavrnusVideoInputDevice>&, VideoInputDevices);


DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusSpaceConnected, FCavrnusSpaceConnection, SpaceConnection);
DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusSpaceBeginLoading, FString, SpaceIdBeingLoaded);





UCLASS(Abstract)
class UCavrnusCallbackTypes : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

private:

};

