#include "RelayModel/RelayCallbackModel.h"
#include "CoreMinimal.h"
#include "RelayModel/CavrnusRelayModel.h"
#include "CavrnusConnectorModule.h"
#include "Types\CavrnusRemoteContent.h"

namespace Cavrnus
{
	RelayCallbackModel::RelayCallbackModel(CavrnusRelayModel* model)
	{
		relayModel = model;
	}

	RelayCallbackModel::~RelayCallbackModel()
	{
	}

	void RelayCallbackModel::HandleServerCallback(int callbackId, const ServerData::RelayRemoteMessage& msg)
	{
		switch (msg.Msg_case())
		{
		case ServerData::RelayRemoteMessage::kAuthenticateResp:
			HandleLoginPasswordResponse(callbackId, msg.authenticateresp());
			break;
		case ServerData::RelayRemoteMessage::kAuthenticateGuestResp:
			HandleLoginGuestResponse(callbackId, msg.authenticateguestresp());
			break;
		case ServerData::RelayRemoteMessage::kJoinSpaceFromIdResp:
			HandleJoinSpaceResponse(callbackId, msg.joinspacefromidresp());
			break;
		case ServerData::RelayRemoteMessage::kGetAudioInputDevicesResp:
			HandleAudioInputsResponse(callbackId, msg.getaudioinputdevicesresp());
			break;
		case ServerData::RelayRemoteMessage::kGetAudioOutputDevicesResp:
			HandleAudioOutputsResponse(callbackId, msg.getaudiooutputdevicesresp());
			break;
		case ServerData::RelayRemoteMessage::kGetVideoInputDevicesResp:
			HandleVideoInputsResponse(callbackId, msg.getvideoinputdevicesresp());
			break;
		case ServerData::RelayRemoteMessage::kAllJoinableSpacesResp:
			HandleJoinableSpacesRecv(callbackId, msg.alljoinablespacesresp());
			break;
		case ServerData::RelayRemoteMessage::kFetchAllUploadedContentResp:
			HandleAllRemoteContentRecv(callbackId, msg.fetchalluploadedcontentresp());
			break;
		case ServerData::RelayRemoteMessage::kUploadLocalFileResp:
			HandleUploadComplete(callbackId, msg.uploadlocalfileresp());
			break;
		default:
			UE_LOG(LogCavrnusConnector, Warning, TEXT("Unhandled server message, message type: %d"), static_cast<int>(msg.Msg_case()));
			break;
		}
	}

	void RelayCallbackModel::HandleAuthRecv(FCavrnusAuthentication auth)
	{
		for (int i = 0; i < AuthCallbacks.Num(); i++) 
		{
			AuthCallbacks[i].ExecuteIfBound(auth);
		}
		AuthCallbacks.Empty();
	}

	int RelayCallbackModel::RegisterLoginPasswordCallback(FCavrnusAuthRecv onSuccess, FCavrnusError onFailure)
	{
		int reqId = ++currReqId;

		LoginPasswordSuccessCallbacks.Add(reqId, onSuccess);
		LoginPasswordErrorCallbacks.Add(reqId, onFailure);

		return reqId;
	}

	void RelayCallbackModel::HandleLoginPasswordResponse(int callbackId, ServerData::AuthenticateResp resp)
	{
		if (resp.has_auth())
		{
			FString token = resp.auth().token().c_str();

			FCavrnusAuthentication auth = FCavrnusAuthentication(token);
			HandleAuthRecv(auth);

			relayModel->GetDataState()->CurrentAuthentication = new FCavrnusAuthentication(token);

			UE_LOG(LogCavrnusConnector, Log, TEXT("[AUTH SUCCESS]"));

			if (LoginPasswordSuccessCallbacks.Contains(callbackId))
				LoginPasswordSuccessCallbacks[callbackId].ExecuteIfBound(auth);
		}
		else
		{
			FString error = resp.error().c_str();
			UE_LOG(LogCavrnusConnector, Log, TEXT("[AUTH FAILURE]: %s"), *error);

			if (LoginPasswordErrorCallbacks.Contains(callbackId))
				LoginPasswordErrorCallbacks[callbackId].ExecuteIfBound(error);
		}

		LoginPasswordSuccessCallbacks.Remove(callbackId);
		LoginPasswordErrorCallbacks.Remove(callbackId);

	}

	int RelayCallbackModel::RegisterLoginGuestCallback(FCavrnusAuthRecv onSuccess, FCavrnusError onFailure)
	{
		int reqId = ++currReqId;

		LoginGuestSuccessCallbacks.Add(reqId, onSuccess);
		LoginGuestErrorCallbacks.Add(reqId, onFailure);

		return reqId;
	}

	void RelayCallbackModel::RegisterAuthCallback(FCavrnusAuthRecv onAuth)
	{
		AuthCallbacks.Add(onAuth);
	}

	void RelayCallbackModel::HandleLoginGuestResponse(int callbackId, ServerData::AuthenticateGuestResp resp)
	{
		if (resp.has_auth())
		{
			FString token = resp.auth().token().c_str();

			FCavrnusAuthentication auth = FCavrnusAuthentication(token);
			HandleAuthRecv(auth);

			relayModel->GetDataState()->CurrentAuthentication = new FCavrnusAuthentication(token);

			UE_LOG(LogCavrnusConnector, Log, TEXT("[AUTH SUCCESS]"));

			if (LoginGuestSuccessCallbacks.Contains(callbackId))
				LoginGuestSuccessCallbacks[callbackId].ExecuteIfBound(auth);
		}
		else
		{
			FString error = resp.error().c_str();
			UE_LOG(LogCavrnusConnector, Log, TEXT("[AUTH FAILURE]: %s"), *error);

			if (LoginGuestErrorCallbacks.Contains(callbackId))
				LoginGuestErrorCallbacks[callbackId].ExecuteIfBound(error);
		}

		LoginGuestSuccessCallbacks.Remove(callbackId);
		LoginGuestErrorCallbacks.Remove(callbackId);
	}

	void RelayCallbackModel::RegisterBeginLoadingSpaceCallback(CavrnusSpaceBeginLoading onBeginLoading)
	{
		TSharedPtr<const CavrnusSpaceBeginLoading> CallbackPtr = MakeShareable(new const CavrnusSpaceBeginLoading(onBeginLoading));
		BeginLoadingSpaceCallbacks.Add(CallbackPtr);
	}

	void RelayCallbackModel::HandleSpaceBeginLoading(FString spaceId)
	{
		for (int i = 0; i < BeginLoadingSpaceCallbacks.Num(); i++) 
		{
			(*BeginLoadingSpaceCallbacks[i])(spaceId);
		}
		BeginLoadingSpaceCallbacks.Empty();
	}

	int RelayCallbackModel::RegisterJoinSpaceCallback(CavrnusSpaceConnected onConnected, CavrnusError onFailure)
	{
		int reqId = ++currReqId;

		TSharedPtr<const CavrnusSpaceConnected> CallbackPtr = MakeShareable(new const CavrnusSpaceConnected(onConnected));
		TSharedPtr<const CavrnusError> ErrorPtr = MakeShareable(new const CavrnusError(onFailure));

		JoinSpaceSuccessCallbacks.Add(reqId, CallbackPtr);
		JoinSpaceErrorCallbacks.Add(reqId, ErrorPtr);

		return reqId;
	}

	int RelayCallbackModel::RegisterFetchAvailableSpacesCallback(FCavrnusAllSpacesInfoEvent onAllSpacesArrived)
	{
		int reqId = ++currReqId;

		AllSpacesInfoCallbacks.Add(reqId, onAllSpacesArrived);

		return reqId;
	}

	void RelayCallbackModel::HandleJoinableSpacesRecv(int callbackId, ServerData::AllJoinableSpacesResp resp)
	{
		TArray<FCavrnusSpaceInfo> AvailableSpaces;

		for (int i = 0; i < resp.availablespaces().size(); i++)
		{
			AvailableSpaces.Add(CavrnusProtoTranslation::ToSpaceInfo(resp.availablespaces()[i]));
		}

		if (AllSpacesInfoCallbacks.Contains(callbackId))
			AllSpacesInfoCallbacks[callbackId].ExecuteIfBound(AvailableSpaces);

		AllSpacesInfoCallbacks.Remove(callbackId);
	}

	void RelayCallbackModel::HandleJoinSpaceResponse(int callbackId, ServerData::JoinSpaceFromIdResp resp)
	{
		if (resp.Resp_case() == ServerData::JoinSpaceFromIdResp::kSpaceConn)
		{
			FCavrnusSpaceConnection spaceConn = Cavrnus::CavrnusProtoTranslation::FromPb(resp.spaceconn());

			relayModel->GetDataState()->AddSpaceConnection(spaceConn);

			UE_LOG(LogCavrnusConnector, Log, TEXT("[JOIN SPACE SUCCESS]"));
			if (JoinSpaceSuccessCallbacks.Contains(callbackId))
				(*JoinSpaceSuccessCallbacks[callbackId])(FCavrnusSpaceConnection(spaceConn));
		}
		else
		{
			FString error = resp.error().c_str();
			UE_LOG(LogCavrnusConnector, Log, TEXT("[JOIN SPACE FAILURE]: %s"), *error);
			if (JoinSpaceErrorCallbacks.Contains(callbackId))
				(*JoinSpaceErrorCallbacks[callbackId])(error);
		}

		JoinSpaceSuccessCallbacks.Remove(callbackId);
		JoinSpaceErrorCallbacks.Remove(callbackId);
	}

	int RelayCallbackModel::RegisterFetchAudioInputs(FCavrnusAvailableInputDevices onRecvDevices)
	{
		int reqId = ++currReqId;

		FetchAudioInputsCallbacks.Add(reqId, onRecvDevices);

		return reqId;
	}

	void RelayCallbackModel::HandleAudioInputsResponse(int callbackId, ServerData::GetAudioInputDevicesResp resp)
	{
		TArray<FCavrnusInputDevice> devices;

		const auto& devices_field = resp.devices();
		for (int i = 0; i < devices_field.devices_size(); ++i)
		{
			const ServerData::RtcAudioInputDevice& device = devices_field.devices(i);
			FCavrnusInputDevice item = { device.name().c_str(), device.id().c_str() };

			devices.Add(item);
		}

		if (FetchAudioInputsCallbacks.Contains(callbackId))
			FetchAudioInputsCallbacks[callbackId].ExecuteIfBound(devices);
	}

	int RelayCallbackModel::RegisterFetchAudioOutputs(FCavrnusAvailableOutputDevices onRecvDevices)
	{
		int reqId = ++currReqId;

		FetchAudioOutputsCallbacks.Add(reqId, onRecvDevices);

		return reqId;
	}

	void RelayCallbackModel::HandleAudioOutputsResponse(int callbackId, ServerData::GetAudioOutputDevicesResp resp)
	{
		TArray<FCavrnusOutputDevice> devices;

		const auto& devices_field = resp.devices();
		for (int i = 0; i < devices_field.devices_size(); ++i)
		{
			const ServerData::RtcAudioOutputDevice& device = devices_field.devices(i);
			FCavrnusOutputDevice item = { device.name().c_str(), device.id().c_str() };

			devices.Add(item);
		}

		if (FetchAudioOutputsCallbacks.Contains(callbackId))
			FetchAudioOutputsCallbacks[callbackId].ExecuteIfBound(devices);
	}

	int RelayCallbackModel::RegisterFetchVideoInputs(FCavrnusAvailableVideoInputDevices onRecvDevices)
	{
		int reqId = ++currReqId;

		FetchVideoInputsCallbacks.Add(reqId, onRecvDevices);

		return reqId;
	}

	void RelayCallbackModel::HandleVideoInputsResponse(int callbackId, ServerData::GetVideoInputDevicesResp resp)
	{
		TArray<FCavrnusVideoInputDevice> devices;

		const auto& devices_field = resp.devices();
		for (int i = 0; i < devices_field.devices_size(); ++i)
		{
			const ServerData::RtcVideoInputDevice& device = devices_field.devices(i);
			FCavrnusVideoInputDevice item = { device.name().c_str(), device.id().c_str() };

			devices.Add(item);
		}

		if (FetchVideoInputsCallbacks.Contains(callbackId))
			FetchVideoInputsCallbacks[callbackId].ExecuteIfBound(devices);
	}

	int RelayCallbackModel::RegisterFetchAllAvailableContent(CavrnusRemoteContentFunction onfetchedContent)
	{
		int reqId = ++currReqId;

		using contentFunction = const CavrnusRemoteContentFunction;
		TSharedPtr<contentFunction> CallbackPtr = MakeShareable(new contentFunction(onfetchedContent));

		AllRemoteContentCallbacks.Add(reqId, CallbackPtr);

		return reqId;
	}

	void RelayCallbackModel::HandleAllRemoteContentRecv(int callbackId, ServerData::FetchAllUploadedContentResp resp)
	{
		TArray<FCavrnusRemoteContent> remoteContent;
		for (int i = 0; i < resp.availablecontent().size(); i++) 
		{
			TMap<FString, FString> tags;
			for (int j = 0; j < resp.availablecontent()[i].tagkeys_size(); j++) 
			{
				tags.Add(resp.availablecontent()[i].tagkeys()[j].c_str(), resp.availablecontent()[i].tagvalues()[j].c_str());
			}

			remoteContent.Add(FCavrnusRemoteContent(resp.availablecontent()[i].id().c_str(), resp.availablecontent()[i].name().c_str(), resp.availablecontent()[i].filename().c_str(), resp.availablecontent()[i].thumbnailurl().c_str(), tags));
		}

		if (AllRemoteContentCallbacks.Contains(callbackId))
		{
			(*AllRemoteContentCallbacks[callbackId])(remoteContent);
			AllRemoteContentCallbacks.Remove(callbackId);
		}
	}

	int RelayCallbackModel::RegisterUploadContent(CavrnusUploadCompleteFunction onUploadComplete)
	{
		int reqId = ++currReqId;

		using contentFunction = const CavrnusUploadCompleteFunction;
		TSharedPtr<contentFunction> CallbackPtr = MakeShareable(new contentFunction(onUploadComplete));

		AllUploadContentCallbacks.Add(reqId, CallbackPtr);

		return reqId;
	}

	void RelayCallbackModel::HandleUploadComplete(int callbackId, ServerData::UploadLocalFileResp resp)
	{
		TMap<FString, FString> tags;
		for (int j = 0; j < resp.uploadedcontent().tagkeys_size(); j++)
		{
			tags.Add(resp.uploadedcontent().tagkeys()[j].c_str(), resp.uploadedcontent().tagvalues()[j].c_str());
		}

		FCavrnusRemoteContent remoteContent = FCavrnusRemoteContent(resp.uploadedcontent().id().c_str(), resp.uploadedcontent().name().c_str(), resp.uploadedcontent().filename().c_str(), resp.uploadedcontent().thumbnailurl().c_str(), tags);

		if (AllUploadContentCallbacks.Contains(callbackId))
		{
			(*AllUploadContentCallbacks[callbackId])(remoteContent);
			AllUploadContentCallbacks.Remove(callbackId);
		}
	}
}