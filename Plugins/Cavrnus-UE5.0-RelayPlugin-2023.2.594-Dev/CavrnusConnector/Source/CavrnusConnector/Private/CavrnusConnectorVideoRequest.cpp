#include "CavrnusConnectorVideoRequest.h"

#include <Engine/World.h>
#include <Engine/Texture2D.h>
#include <TextureResource.h>

#include "CavrnusFunctionLibrary.h"

TMap<FString, TSharedPtr<UCavrnusConnectorVideoRequest>> UCavrnusConnectorVideoRequest::VideoStreamMap;

UCavrnusConnectorVideoRequest::UCavrnusConnectorVideoRequest() :
	SpaceConnId(-1),
	RelayCallbackId(-1),
	RtcTexture(nullptr)
{
}

UCavrnusConnectorVideoRequest::~UCavrnusConnectorVideoRequest()
{
	if (RelayCallbackId != -1)
	{
		/*auto ClientPtr = UCavrnusFunctionLibrary::GetRelayClient_Internal();

		if (ClientPtr)
		{
			ServerData::CavrnusSpaceConnection* Conn = new ServerData::CavrnusSpaceConnection();
			Conn->set_spaceconnectionid(SpaceConnId);

			ClientPtr->unregisterUserVideoFramesCallback(*Conn, TCHAR_TO_UTF8(*UserConnectionId), RelayCallbackId);
		}*/
	}
}

void UCavrnusConnectorVideoRequest::Initialize(const int InSpaceConnId, const FString& InUserConnectionId)
{
	SpaceConnId = InSpaceConnId;
	RelayCallbackId = InSpaceConnId;
	UserConnectionId = InUserConnectionId;

	/*UCavrnusFunctionLibrary::ValidateRelayRunning();

	auto ClientPtr = UCavrnusFunctionLibrary::GetRelayClient_Internal();
	if (ClientPtr)
	{
		auto Fn = std::bind(&UCavrnusConnectorVideoRequest::ReceiveUserVideoFrame, this, std::placeholders::_1);

		ServerData::CavrnusSpaceConnection* Conn = new ServerData::CavrnusSpaceConnection();
		Conn->set_spaceconnectionid(SpaceConnId);

		RelayCallbackId = ClientPtr->registerUserVideoFramesCallback(*Conn, TCHAR_TO_UTF8(*UserConnectionId), Fn);
	}*/
}

FDelegateHandle UCavrnusConnectorVideoRequest::RegisterVideoFrameCallback(const int InSpaceConnId, const FString& InUserConnectionId, FUserVideoFrameDelegate::FDelegate& Callback)
{
	FString MapKey = GetMapKey(InSpaceConnId, InUserConnectionId);

	if (VideoStreamMap.Contains(MapKey))
	{
		return VideoStreamMap.Find(MapKey)->Get()->VideoFrameCallbacks.Add(Callback);
	}
	else
	{
		TSharedPtr<UCavrnusConnectorVideoRequest> VideoRequest(new UCavrnusConnectorVideoRequest());
		VideoStreamMap.Add(MapKey, VideoRequest);
		VideoRequest->Initialize(InSpaceConnId, InUserConnectionId);
		return VideoRequest->VideoFrameCallbacks.Add(Callback);
	}
}

void UCavrnusConnectorVideoRequest::UnregisterVideoFrameCallback(const int InSpaceConnId, const FString& InUserConnectionId, FDelegateHandle& Callback)
{
	FString MapKey = GetMapKey(InSpaceConnId, InUserConnectionId);

	if (VideoStreamMap.Contains(MapKey))
	{
		UCavrnusConnectorVideoRequest* VideoRequest = VideoStreamMap.Find(MapKey)->Get();
		VideoRequest->VideoFrameCallbacks.Remove(Callback);

		if (!VideoRequest->VideoFrameCallbacks.IsBound())
		{
			// if no one is bound, release this instance
			VideoStreamMap.Remove(MapKey);
		}
	}
}

const FString UCavrnusConnectorVideoRequest::GetMapKey(const int InSpaceConnId, const FString& InUserConnectionId)
{
	return FString::Printf(TEXT("%d.%s"), InSpaceConnId, *InUserConnectionId);
}

void UCavrnusConnectorVideoRequest::ReceiveUserVideoFrame(const ServerData::UserVideoFrame& message)
{
	FString userIdString = message.userid().c_str();

	TArray<uint8> bytes((uint8*)message.stream().c_str(), message.stream().size());

	if (!RtcTexture || RtcTexture->GetSizeX() != message.resx() || RtcTexture->GetSizeY() != message.resy())
	{
		FName UniqueName = MakeUniqueObjectName(nullptr, UTexture2D::StaticClass(), "RTCStream");
		RtcTexture = UTexture2D::CreateTransient(message.resx(), message.resy(), PF_B8G8R8A8, UniqueName);

		/*
		InitializeRtcMaterialInstancesIfNeeded();

		for (int32 i = 0; i < static_cast<int32>(ERtcMaterialVariant::RMV_MAX); i++)
		{
			ERtcMaterialVariant MaterialVariant = static_cast<ERtcMaterialVariant>(i);

			RtcMaterialInstances[i]->SetTextureParameterValue("RTC", RtcTexture);
			RtcMaterialInstances[i]->SetScalarParameterValue("AspectRatio", CalculateAspectRatio(MaterialVariant));
			RtcMaterialInstances[i]->SetScalarParameterValue("TargetAspectRatio", MaterialVariant == ERtcMaterialVariant::RMV_STREAMBOARD ? AStreamBoard::MeshAspectRatio : 1.0f);
		}
		*/
	}

	void* TextureData = RtcTexture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
	FMemory::Memcpy(TextureData, bytes.GetData(), bytes.Num());
	RtcTexture->GetPlatformData()->Mips[0].BulkData.Unlock();
	RtcTexture->UpdateResource();

	VideoFrameCallbacks.Broadcast(message.spaceconn().spaceconnectionid(), userIdString, RtcTexture);
}
