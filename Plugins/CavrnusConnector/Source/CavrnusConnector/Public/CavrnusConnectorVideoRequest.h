#pragma once

#include <CoreMinimal.h>
#include <Containers/Map.h>
#include <Delegates/Delegate.h>

#include "CavrnusRelayLibrary.h"

class UTexture2D;

// SpaceConnId, UserId, ResX, ResY, Bytes
DECLARE_MULTICAST_DELEGATE_ThreeParams(FUserVideoFrameDelegate, int, const FString&, UTexture2D*);

class CAVRNUSCONNECTOR_API UCavrnusConnectorVideoRequest
{
public:
	UCavrnusConnectorVideoRequest();
	virtual ~UCavrnusConnectorVideoRequest();

	static FDelegateHandle RegisterVideoFrameCallback(const int InSpaceConnId, const FString& InUserConnectionId, FUserVideoFrameDelegate::FDelegate& Callback);
	static void UnregisterVideoFrameCallback(const int InSpaceConnId, const FString& InUserConnectionId, FDelegateHandle& CallbackHandle);

private:
	void Initialize(const int InSpaceConnId, const FString& InUserConnectionId);

	static const FString GetMapKey(const int InSpaceConnId, const FString& InUserConnectionId);

	static TMap<FString, TSharedPtr<UCavrnusConnectorVideoRequest>> VideoStreamMap;

	void ReceiveUserVideoFrame(const ServerData::UserVideoFrame& message);

	int SpaceConnId;
	FString UserConnectionId;
	int RelayCallbackId;

	UTexture2D* RtcTexture;

	FUserVideoFrameDelegate VideoFrameCallbacks;
};
