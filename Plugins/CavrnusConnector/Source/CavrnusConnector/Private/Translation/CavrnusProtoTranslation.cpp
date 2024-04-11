#include "CavrnusProtoTranslation.h"

namespace Cavrnus
{

	CavrnusProtoTranslation::CavrnusProtoTranslation()
	{
	}

	CavrnusProtoTranslation::~CavrnusProtoTranslation()
	{

	}

#pragma region Message Builders

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildKeepAliveMsg()
	{
		ServerData::KeepAlive keepAlive;

		ServerData::RelayClientMessage msg;
		msg.mutable_keepalive()->CopyFrom(keepAlive);
		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildUpdateTimeMsg(float currTime)
	{
		ServerData::UpdateTime t;
		t.set_time(currTime);

		ServerData::RelayClientMessage msg;
		msg.mutable_updatetime()->CopyFrom(t);
		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildAuthenticateWithPassword(int callbackId, const FString& server, const FString& email, const FString& password)
	{
		ServerData::AuthenticateReq req;
		req.set_reqid(callbackId);
		req.set_server(TCHAR_TO_UTF8(*server));
		req.set_email(TCHAR_TO_UTF8(*email));
		req.set_password(TCHAR_TO_UTF8(*password));

		ServerData::RelayClientMessage msg;
		msg.mutable_authenticatereq()->CopyFrom(req);
		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildAuthenticateGuest(int callbackId, const FString& server, const FString& screenName)
	{
		ServerData::AuthenticateGuestReq req;
		req.set_reqid(callbackId);
		req.set_server(TCHAR_TO_UTF8(*server));
		req.set_screenname(TCHAR_TO_UTF8(*screenName));

		ServerData::RelayClientMessage msg;
		msg.mutable_authenticateguestreq()->CopyFrom(req);
		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildFetchAvailableSpaces(int callbackId)
	{
		ServerData::AllJoinableSpacesReq req;
		req.set_reqid(callbackId);

		ServerData::RelayClientMessage msg;
		msg.mutable_alljoinablespacesreq()->CopyFrom(req);

		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildJoinSpaceWithId(int callbackId, const FString& spaceId)
	{
		ServerData::JoinSpaceFromIdReq req;
		req.set_reqid(callbackId);
		req.set_spaceid(TCHAR_TO_UTF8(*spaceId));

		ServerData::RelayClientMessage msg;
		msg.mutable_joinspacefromidreq()->CopyFrom(req);

		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildExitSpaceMsg(const FCavrnusSpaceConnection& spaceConn)
	{
		ServerData::ShutdownSpaceConnectionReq req;
		req.mutable_spaceconnection()->CopyFrom(ToPb(spaceConn));

		ServerData::RelayClientMessage msg;
		msg.mutable_shutdownspaceconnectionreq()->CopyFrom(req);

		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildDefineColorPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, const FLinearColor& value, const int localChangeId)
	{
		return GenerateDefinePropBoilerplate(spaceConn, propertyId, GenerateColorPropVal(value), localChangeId);
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildUpdateColorPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, const FLinearColor& value, const int localChangeId)
	{
		return GeneratePropBoilerplate(spaceConn, propertyId, GenerateColorPropVal(value), localChangeId);
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildBeginLiveColorUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FLinearColor value, const int localChangeId)
	{
		ServerData::BeginTransientPropertyUpdate transMsg;
		transMsg.set_liveupdaterid(TCHAR_TO_UTF8(*liveUpdaterId));
		transMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
		transMsg.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
		transMsg.mutable_propertyvalue()->CopyFrom(GenerateColorPropVal(value));
		transMsg.set_localchangeid(localChangeId);

		ServerData::RelayClientMessage msg;
		msg.mutable_begintransientpropertyupdate()->CopyFrom(transMsg);
		return msg;
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildContinueLiveColorUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FLinearColor value, const int localChangeId)
	{
		ServerData::ContinueTransientPropertyUpdate transMsg;
		transMsg.set_liveupdaterid(TCHAR_TO_UTF8(*liveUpdaterId));
		transMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
		transMsg.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
		transMsg.mutable_propertyvalue()->CopyFrom(GenerateColorPropVal(value));
		transMsg.set_localchangeid(localChangeId);

		ServerData::RelayClientMessage msg;
		msg.mutable_continuetransientpropertyupdate()->CopyFrom(transMsg);
		return msg;
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildFinalizeLiveColorUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FLinearColor value, const int localChangeId)
	{
		ServerData::FinalizeTransientPropertyUpdate transMsg;
		transMsg.set_liveupdaterid(TCHAR_TO_UTF8(*liveUpdaterId));
		transMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
		transMsg.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
		transMsg.mutable_propertyvalue()->CopyFrom(GenerateColorPropVal(value));
		transMsg.set_localchangeid(localChangeId);

		ServerData::RelayClientMessage msg;
		msg.mutable_finalizetransientpropertyupdate()->CopyFrom(transMsg);
		return msg;
	}


	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildDefineStringPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, const FString& value, const int localChangeId)
	{
		return GenerateDefinePropBoilerplate(spaceConn, propertyId, GenerateStringPropVal(value), localChangeId);
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildUpdateStringPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, const FString& value, const int localChangeId)
	{
		return GeneratePropBoilerplate(spaceConn, propertyId, GenerateStringPropVal(value), localChangeId);
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildBeginLiveStringUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FString value, const int localChangeId)
	{
		ServerData::BeginTransientPropertyUpdate transMsg;
		transMsg.set_liveupdaterid(TCHAR_TO_UTF8(*liveUpdaterId));
		transMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
		transMsg.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
		transMsg.mutable_propertyvalue()->CopyFrom(GenerateStringPropVal(value));
		transMsg.set_localchangeid(localChangeId);

		ServerData::RelayClientMessage msg;
		msg.mutable_begintransientpropertyupdate()->CopyFrom(transMsg);
		return msg;
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildContinueLiveStringUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FString value, const int localChangeId)
	{
		ServerData::ContinueTransientPropertyUpdate transMsg;
		transMsg.set_liveupdaterid(TCHAR_TO_UTF8(*liveUpdaterId));
		transMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
		transMsg.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
		transMsg.mutable_propertyvalue()->CopyFrom(GenerateStringPropVal(value));
		transMsg.set_localchangeid(localChangeId);

		ServerData::RelayClientMessage msg;
		msg.mutable_continuetransientpropertyupdate()->CopyFrom(transMsg);
		return msg;
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildFinalizeLiveStringUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FString value, const int localChangeId)
	{
		ServerData::FinalizeTransientPropertyUpdate transMsg;
		transMsg.set_liveupdaterid(TCHAR_TO_UTF8(*liveUpdaterId));
		transMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
		transMsg.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
		transMsg.mutable_propertyvalue()->CopyFrom(GenerateStringPropVal(value));
		transMsg.set_localchangeid(localChangeId);

		ServerData::RelayClientMessage msg;
		msg.mutable_finalizetransientpropertyupdate()->CopyFrom(transMsg);
		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildDefineBoolPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, bool value, const int localChangeId)
	{
		return GenerateDefinePropBoilerplate(spaceConn, propertyId, GenerateBoolPropVal(value), localChangeId);
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildUpdateBoolPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, bool value, const int localChangeId)
	{
		return GeneratePropBoilerplate(spaceConn, propertyId, GenerateBoolPropVal(value), localChangeId);
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildBeginLiveBoolUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, bool value, const int localChangeId)
	{
		ServerData::BeginTransientPropertyUpdate transMsg;
		transMsg.set_liveupdaterid(TCHAR_TO_UTF8(*liveUpdaterId));
		transMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
		transMsg.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
		transMsg.mutable_propertyvalue()->CopyFrom(GenerateBoolPropVal(value));
		transMsg.set_localchangeid(localChangeId);

		ServerData::RelayClientMessage msg;
		msg.mutable_begintransientpropertyupdate()->CopyFrom(transMsg);
		return msg;
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildContinueLiveBoolUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, bool value, const int localChangeId)
	{
		ServerData::ContinueTransientPropertyUpdate transMsg;
		transMsg.set_liveupdaterid(TCHAR_TO_UTF8(*liveUpdaterId));
		transMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
		transMsg.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
		transMsg.mutable_propertyvalue()->CopyFrom(GenerateBoolPropVal(value));
		transMsg.set_localchangeid(localChangeId);

		ServerData::RelayClientMessage msg;
		msg.mutable_continuetransientpropertyupdate()->CopyFrom(transMsg);
		return msg;
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildFinalizeLiveBoolUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, bool value, const int localChangeId)
	{
		ServerData::FinalizeTransientPropertyUpdate transMsg;
		transMsg.set_liveupdaterid(TCHAR_TO_UTF8(*liveUpdaterId));
		transMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
		transMsg.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
		transMsg.mutable_propertyvalue()->CopyFrom(GenerateBoolPropVal(value));
		transMsg.set_localchangeid(localChangeId);

		ServerData::RelayClientMessage msg;
		msg.mutable_finalizetransientpropertyupdate()->CopyFrom(transMsg);
		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildDefineFloatPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, float value, const int localChangeId)
	{
		return GenerateDefinePropBoilerplate(spaceConn, propertyId, GenerateFloatPropVal(value), localChangeId);
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildUpdateFloatPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, float value, const int localChangeId)
	{
		return GeneratePropBoilerplate(spaceConn, propertyId, GenerateFloatPropVal(value), localChangeId);
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildBeginLiveFloatUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, float value, const int localChangeId)
	{
		ServerData::BeginTransientPropertyUpdate transMsg;
		transMsg.set_liveupdaterid(TCHAR_TO_UTF8(*liveUpdaterId));
		transMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
		transMsg.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
		transMsg.mutable_propertyvalue()->CopyFrom(GenerateFloatPropVal(value));
		transMsg.set_localchangeid(localChangeId);

		ServerData::RelayClientMessage msg;
		msg.mutable_begintransientpropertyupdate()->CopyFrom(transMsg);
		return msg;
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildContinueLiveFloatUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, float value, const int localChangeId)
	{
		ServerData::ContinueTransientPropertyUpdate transMsg;
		transMsg.set_liveupdaterid(TCHAR_TO_UTF8(*liveUpdaterId));
		transMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
		transMsg.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
		transMsg.mutable_propertyvalue()->CopyFrom(GenerateFloatPropVal(value));
		transMsg.set_localchangeid(localChangeId);

		ServerData::RelayClientMessage msg;
		msg.mutable_continuetransientpropertyupdate()->CopyFrom(transMsg);
		return msg;
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildFinalizeLiveFloatUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, float value, const int localChangeId)
	{
		ServerData::FinalizeTransientPropertyUpdate transMsg;
		transMsg.set_liveupdaterid(TCHAR_TO_UTF8(*liveUpdaterId));
		transMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
		transMsg.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
		transMsg.mutable_propertyvalue()->CopyFrom(GenerateFloatPropVal(value));
		transMsg.set_localchangeid(localChangeId);

		ServerData::RelayClientMessage msg;
		msg.mutable_finalizetransientpropertyupdate()->CopyFrom(transMsg);
		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildDefineVectorPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, const FVector& value, const int localChangeId)
	{
		return GenerateDefinePropBoilerplate(spaceConn, propertyId, GenerateVectorPropVal(value), localChangeId);
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildUpdateVectorPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, const FVector& value, const int localChangeId)
	{
		return GeneratePropBoilerplate(spaceConn, propertyId, GenerateVectorPropVal(value), localChangeId);
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildBeginLiveVectorUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FVector value, const int localChangeId)
	{
		ServerData::BeginTransientPropertyUpdate transMsg;
		transMsg.set_liveupdaterid(TCHAR_TO_UTF8(*liveUpdaterId));
		transMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
		transMsg.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
		transMsg.mutable_propertyvalue()->CopyFrom(GenerateVectorPropVal(value));
		transMsg.set_localchangeid(localChangeId);

		ServerData::RelayClientMessage msg;
		msg.mutable_begintransientpropertyupdate()->CopyFrom(transMsg);
		return msg;
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildContinueLiveVectorUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FVector value, const int localChangeId)
	{
		ServerData::ContinueTransientPropertyUpdate transMsg;
		transMsg.set_liveupdaterid(TCHAR_TO_UTF8(*liveUpdaterId));
		transMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
		transMsg.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
		transMsg.mutable_propertyvalue()->CopyFrom(GenerateVectorPropVal(value));
		transMsg.set_localchangeid(localChangeId);

		ServerData::RelayClientMessage msg;
		msg.mutable_continuetransientpropertyupdate()->CopyFrom(transMsg);
		return msg;
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildFinalizeLiveVectorUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FVector value, const int localChangeId)
	{
		ServerData::FinalizeTransientPropertyUpdate transMsg;
		transMsg.set_liveupdaterid(TCHAR_TO_UTF8(*liveUpdaterId));
		transMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
		transMsg.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
		transMsg.mutable_propertyvalue()->CopyFrom(GenerateVectorPropVal(value));
		transMsg.set_localchangeid(localChangeId);

		ServerData::RelayClientMessage msg;
		msg.mutable_finalizetransientpropertyupdate()->CopyFrom(transMsg);
		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildDefineTransformPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, const FTransform& value, const int localChangeId)
	{
		return GenerateDefinePropBoilerplate(spaceConn, propertyId, GenerateTransformPropVal(value), localChangeId);
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildUpdateTransformPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, const FTransform& value, const int localChangeId)
	{
		return GeneratePropBoilerplate(spaceConn, propertyId, GenerateTransformPropVal(value), localChangeId);
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildBeginLiveTransformUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FTransform value, const int localChangeId)
	{
		ServerData::BeginTransientPropertyUpdate transMsg;
		transMsg.set_liveupdaterid(TCHAR_TO_UTF8(*liveUpdaterId));
		transMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
		transMsg.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
		transMsg.mutable_propertyvalue()->CopyFrom(GenerateTransformPropVal(value));
		transMsg.set_localchangeid(localChangeId);

		ServerData::RelayClientMessage msg;
		msg.mutable_begintransientpropertyupdate()->CopyFrom(transMsg);
		return msg;
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildContinueLiveTransformUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FTransform value, const int localChangeId)
	{
		ServerData::ContinueTransientPropertyUpdate transMsg;
		transMsg.set_liveupdaterid(TCHAR_TO_UTF8(*liveUpdaterId));
		transMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
		transMsg.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
		transMsg.mutable_propertyvalue()->CopyFrom(GenerateTransformPropVal(value));
		transMsg.set_localchangeid(localChangeId);

		ServerData::RelayClientMessage msg;
		msg.mutable_continuetransientpropertyupdate()->CopyFrom(transMsg);
		return msg;
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildFinalizeLiveTransformUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FTransform value, const int localChangeId)
	{
		ServerData::FinalizeTransientPropertyUpdate transMsg;
		transMsg.set_liveupdaterid(TCHAR_TO_UTF8(*liveUpdaterId));
		transMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
		transMsg.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
		transMsg.mutable_propertyvalue()->CopyFrom(GenerateTransformPropVal(value));
		transMsg.set_localchangeid(localChangeId);

		ServerData::RelayClientMessage msg;
		msg.mutable_finalizetransientpropertyupdate()->CopyFrom(transMsg);
		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildCancelLiveUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId)
	{
		ServerData::CancelTransientPropertyUpdate cancelMsg;
		cancelMsg.set_liveupdaterid(TCHAR_TO_UTF8(*liveUpdaterId));
		cancelMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));

		ServerData::RelayClientMessage msg;
		msg.mutable_canceltransientpropertyupdate()->CopyFrom(cancelMsg);
		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildSetLocalUserMuted(FCavrnusSpaceConnection spaceConn, bool muted)
	{
		ServerData::UpdateLocalUserMuted mutedMsg;
		mutedMsg.set_muted(muted);
		mutedMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));

		ServerData::RelayClientMessage msg;
		msg.mutable_updatelocalusermuted()->CopyFrom(mutedMsg);
		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildSetLocalUserStreaming(FCavrnusSpaceConnection spaceConn, bool streaming)
	{
		ServerData::UpdateLocalUserStreamState streamStateMsg;
		streamStateMsg.set_streaming(streaming);
		streamStateMsg.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));

		ServerData::RelayClientMessage msg;
		msg.mutable_updatelocaluserstreamstate()->CopyFrom(streamStateMsg);
		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildRequestAudioInputs(int callbackId)
	{
		ServerData::GetAudioInputDevicesReq req;
		req.set_reqid(callbackId);

		ServerData::RelayClientMessage msg;
		msg.mutable_getaudioinputdevicesreq()->CopyFrom(req);
		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildRequestAudioOutputs(int callbackId)
	{
		ServerData::GetAudioOutputDevicesReq req;
		req.set_reqid(callbackId);

		ServerData::RelayClientMessage msg;
		msg.mutable_getaudiooutputdevicesreq()->CopyFrom(req);
		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildRequestVideoInputs(int callbackId)
	{
		ServerData::GetVideoInputDevicesReq req;
		req.set_reqid(callbackId);

		ServerData::RelayClientMessage msg;
		msg.mutable_getvideoinputdevicesreq()->CopyFrom(req);
		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildSetAudioInput(const FCavrnusInputDevice& device)
	{
		ServerData::SetAudioInputDeviceReq req;
		req.mutable_device()->set_id(TCHAR_TO_UTF8(*device.DeviceId));
		req.mutable_device()->set_name(TCHAR_TO_UTF8(*device.DeviceName));

		ServerData::RelayClientMessage msg;
		msg.mutable_setaudioinputdevicereq()->CopyFrom(req);
		return msg;
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildSetAudioOutput(const FCavrnusOutputDevice& device)
	{
		ServerData::SetAudioOutputDeviceReq req;
		req.mutable_device()->set_id(TCHAR_TO_UTF8(*device.DeviceId));
		req.mutable_device()->set_name(TCHAR_TO_UTF8(*device.DeviceName));

		ServerData::RelayClientMessage msg;
		msg.mutable_setaudiooutputdevicereq()->CopyFrom(req);
		return msg;
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildSetVideoInput(const FCavrnusVideoInputDevice& device)
	{
		ServerData::SetVideoInputDeviceReq req;
		req.mutable_device()->set_id(TCHAR_TO_UTF8(*device.DeviceId));
		req.mutable_device()->set_name(TCHAR_TO_UTF8(*device.DeviceName));

		ServerData::RelayClientMessage msg;
		msg.mutable_setvideoinputdevicereq()->CopyFrom(req);
		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildCreateOp(const FCavrnusSpaceConnection& spaceConn, const FString& uniqueObjectId, const FString& instanceId)
	{
		ServerData::PostCreateObject req;
		req.set_newinstanceid(TCHAR_TO_UTF8(*instanceId));
		req.set_uniqueobjectident(TCHAR_TO_UTF8(*uniqueObjectId));
		req.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));

		ServerData::RelayClientMessage msg;
		msg.mutable_postcreateobject()->CopyFrom(req);
		return msg;
	}

	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildDestroyOp(const FCavrnusSpaceConnection& spaceConn, const FString& opId)
	{
		ServerData::PostRemoveObject req;
		req.set_opid(TCHAR_TO_UTF8(*opId));
		req.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));

		ServerData::RelayClientMessage msg;
		msg.mutable_postremoveobject()->CopyFrom(req);
		return msg;
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildRequestGlobalPermission(const FString& permission)
	{
		ServerData::PermissionStatusReq req;
		req.set_permission(TCHAR_TO_UTF8(*permission));

		ServerData::RelayClientMessage msg;
		msg.mutable_permissionstatusreq()->CopyFrom(req);
		return msg;
	}
	const ServerData::RelayClientMessage CavrnusProtoTranslation::BuildRequestSpacePermission(const FCavrnusSpaceConnection& spaceConn, const FString& permission)
	{
		ServerData::PermissionStatusReq req;
		req.set_permission(TCHAR_TO_UTF8(*permission));
		req.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));

		ServerData::RelayClientMessage msg;
		msg.mutable_permissionstatusreq()->CopyFrom(req);
		return msg;
	}
#pragma endregion


#pragma region Type Conversions

	FLinearColor CavrnusProtoTranslation::ToFLinearColor(const Common::Color4& color4)
	{
		return FLinearColor(color4.r(), color4.g(), color4.b(), color4.a());
	}

	Common::Color4 CavrnusProtoTranslation::ToProtoColor(const FLinearColor& color)
	{
		Common::Color4 c;
		c.set_r(color.R);
		c.set_g(color.G);
		c.set_b(color.B);
		c.set_a(color.A);
		return c;
	}

	ServerData::TransformPropertyValue CavrnusProtoTranslation::ToProtoTransform(const FTransform& transform)
	{
		Common::Float3 pos;
		pos.set_x(transform.GetTranslation().Y / (float)100);
		pos.set_y(transform.GetTranslation().Z / (float)100);
		pos.set_z(transform.GetTranslation().X / (float)100);

		Common::Float3 rot;
		rot.set_x(-transform.GetRotation().Euler().Y);
		rot.set_y(transform.GetRotation().Euler().Z);
		rot.set_z(-transform.GetRotation().Euler().X);

		Common::Float3 scl;
		scl.set_x(transform.GetScale3D().Y);
		scl.set_y(transform.GetScale3D().Z);
		scl.set_z(transform.GetScale3D().X);

		ServerData::TransformPropertyValue v;
		v.mutable_pos()->CopyFrom(pos);
		v.mutable_rot()->CopyFrom(rot);
		v.mutable_scl()->CopyFrom(scl);
		return v;
	}

	FTransform CavrnusProtoTranslation::ToFTransform(const ServerData::TransformPropertyValue& propVal)
	{
		FVector pos = FVector(propVal.pos().z() * (float)100, propVal.pos().x() * (float)100, propVal.pos().y() * (float)100);
		FVector rot = FVector(-propVal.rot().z(), -propVal.rot().x(), propVal.rot().y());
		FVector scl = FVector(propVal.scl().z(), propVal.scl().x(), propVal.scl().y());

		FQuat r = FQuat::MakeFromEuler(rot);

		return FTransform(r, pos, scl);
	}

	FVector4 CavrnusProtoTranslation::ToFVector4(const Common::Float4& float4)
	{
		return FVector4(float4.x(), float4.y(), float4.z(), float4.w());
	}

	Common::Float4 CavrnusProtoTranslation::ToProtoVector(const FVector4& vector)
	{
		Common::Float4 v;
		v.set_x(vector.X);
		v.set_y(vector.Y);
		v.set_z(vector.Z);
		v.set_w(vector.W);
		return v;
	}

	FCavrnusSpaceConnection CavrnusProtoTranslation::FromPb(ServerData::CavrnusSpaceConnection InSpaceConnection)
	{
		FString usersContainerPrefix = "users/";
		return FCavrnusSpaceConnection(InSpaceConnection.spaceconnectionid(), InSpaceConnection.localuserconnectionid().c_str(), usersContainerPrefix + InSpaceConnection.localuserconnectionid().c_str());
	}

	ServerData::CavrnusSpaceConnection CavrnusProtoTranslation::ToPb(FCavrnusSpaceConnection InSpaceConnection)
	{
		ServerData::CavrnusSpaceConnection SpaceConnection;
		SpaceConnection.set_spaceconnectionid(InSpaceConnection.SpaceConnectionId);
		SpaceConnection.set_localuserconnectionid(TCHAR_TO_UTF8(*InSpaceConnection.LocalUserConnectionId));

		return SpaceConnection;
	}

	FCavrnusSpaceInfo CavrnusProtoTranslation::ToSpaceInfo(ServerData::SpaceInfo space)
	{
		return FCavrnusSpaceInfo(space.spaceid().c_str(), space.spacename().c_str(), space.spacethumbnailurl().c_str());
	}
	FCavrnusUser CavrnusProtoTranslation::ToCavrnusUser(ServerData::CavrnusUser user)
	{
		FString UserConnectionId = user.userconnectionid().c_str();

		return { user.islocaluser(), ("users/" + UserConnectionId), UserConnectionId };
	}
#pragma endregion


} // namespace CavrnusRelay