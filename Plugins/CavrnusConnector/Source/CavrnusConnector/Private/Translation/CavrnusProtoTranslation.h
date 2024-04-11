#pragma once
#include "Comm/relay.pb.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../Public/Types/CavrnusSpaceConnection.h"
#include "../../Public/Types/CavrnusSpaceInfo.h"
#include "../../Public/Types/CavrnusInputDevice.h"
#include "../../Public/Types/CavrnusOutputDevice.h"
#include "../../Public/Types/CavrnusVideoInputDevice.h"
#include "../../Public/Types/CavrnusUser.h"
#include "../RelayModel/PropertyId.h"

namespace Cavrnus
{
	class CavrnusProtoTranslation
	{
	public:
		CavrnusProtoTranslation();
		virtual ~CavrnusProtoTranslation();

#pragma region Type Conversions
		static Common::Color4 ToProtoColor(const FLinearColor& color);
		static FLinearColor ToFLinearColor(const Common::Color4& color);
		static ServerData::TransformPropertyValue ToProtoTransform(const FTransform& transform);
		static FTransform ToFTransform(const ServerData::TransformPropertyValue& transform);
		static Common::Float4 ToProtoVector(const FVector4& vector);
		static FVector4 ToFVector4(const  Common::Float4& vector);

		static FCavrnusSpaceConnection FromPb(ServerData::CavrnusSpaceConnection InSpaceConnection);
		static ServerData::CavrnusSpaceConnection ToPb(FCavrnusSpaceConnection InSpaceConnection);
		static FCavrnusSpaceInfo ToSpaceInfo(ServerData::SpaceInfo space);
		static FCavrnusUser ToCavrnusUser(ServerData::CavrnusUser user);
#pragma endregion


#pragma region Message Builders
		static const ServerData::RelayClientMessage BuildKeepAliveMsg();
		static const ServerData::RelayClientMessage BuildUpdateTimeMsg(float currTime);

		static const ServerData::RelayClientMessage BuildAuthenticateGuest(int callbackId, const FString& server, const FString& screenName);
		static const ServerData::RelayClientMessage BuildAuthenticateWithPassword(int callbackId, const FString& server, const FString& email, const FString& password);

		static const ServerData::RelayClientMessage BuildFetchAvailableSpaces(int callbackId);
		static const ServerData::RelayClientMessage BuildJoinSpaceWithId(int callbackId, const FString& spaceId);
		static const ServerData::RelayClientMessage BuildExitSpaceMsg(const FCavrnusSpaceConnection& spaceConn);

		static const ServerData::RelayClientMessage BuildDefineColorPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, const FLinearColor& value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildUpdateColorPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, const FLinearColor& value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildBeginLiveColorUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FLinearColor value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildContinueLiveColorUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FLinearColor value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildFinalizeLiveColorUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FLinearColor value, const int localChangeId);

		static const ServerData::RelayClientMessage BuildDefineStringPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, const FString& value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildUpdateStringPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, const FString& value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildBeginLiveStringUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FString value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildContinueLiveStringUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FString value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildFinalizeLiveStringUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FString value, const int localChangeId);

		static const ServerData::RelayClientMessage BuildDefineBoolPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, bool value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildUpdateBoolPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, bool value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildBeginLiveBoolUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, bool value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildContinueLiveBoolUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, bool value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildFinalizeLiveBoolUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, bool value, const int localChangeId);

		static const ServerData::RelayClientMessage BuildDefineFloatPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, float value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildUpdateFloatPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, float value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildBeginLiveFloatUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, float value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildContinueLiveFloatUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, float value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildFinalizeLiveFloatUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, float value, const int localChangeId);

		static const ServerData::RelayClientMessage BuildDefineVectorPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, const FVector& value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildUpdateVectorPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, const FVector& value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildBeginLiveVectorUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FVector value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildContinueLiveVectorUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FVector value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildFinalizeLiveVectorUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FVector value, const int localChangeId);

		static const ServerData::RelayClientMessage BuildDefineTransformPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, const FTransform& value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildUpdateTransformPropMsg(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, const FTransform& value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildBeginLiveTransformUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FTransform value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildContinueLiveTransformUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FTransform value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildFinalizeLiveTransformUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const PropertyId& propertyId, FTransform value, const int localChangeId);

		static const ServerData::RelayClientMessage BuildCancelLiveUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId);

		static const ServerData::RelayClientMessage BuildSetLocalUserMuted(FCavrnusSpaceConnection spaceConn, bool muted);
		static const ServerData::RelayClientMessage BuildSetLocalUserStreaming(FCavrnusSpaceConnection spaceConn, bool streaming);

		static const ServerData::RelayClientMessage BuildRequestAudioInputs(int callbackId);
		static const ServerData::RelayClientMessage BuildRequestAudioOutputs(int callbackId);
		static const ServerData::RelayClientMessage BuildRequestVideoInputs(int callbackId);

		static const ServerData::RelayClientMessage BuildSetAudioInput(const FCavrnusInputDevice& device);
		static const ServerData::RelayClientMessage BuildSetAudioOutput(const FCavrnusOutputDevice& device);
		static const ServerData::RelayClientMessage BuildSetVideoInput(const FCavrnusVideoInputDevice& device);

		static const ServerData::RelayClientMessage BuildCreateOp(const FCavrnusSpaceConnection& spaceConn, const FString& uniqueObjectId, const FString& instanceId);
		static const ServerData::RelayClientMessage BuildDestroyOp(const FCavrnusSpaceConnection& spaceConn, const FString& opId);

		static const ServerData::RelayClientMessage BuildRequestGlobalPermission(const FString& permission);
		static const ServerData::RelayClientMessage BuildRequestSpacePermission(const FCavrnusSpaceConnection& spaceConn, const FString& permission);
#pragma endregion



	private:

		static ServerData::PropertyValue GenerateColorPropVal(const FLinearColor& value)
		{
			ServerData::PropertyValue propVal;
			propVal.mutable_colorval()->CopyFrom(ToProtoColor(value));
			return propVal;
		}

		static ServerData::PropertyValue GenerateStringPropVal(const FString& value)
		{
			ServerData::PropertyValue propVal;
			propVal.set_stringval(TCHAR_TO_UTF8(*value));
			return propVal;
		}

		static ServerData::PropertyValue GenerateBoolPropVal(bool value)
		{
			ServerData::PropertyValue propVal;
			propVal.set_boolval(value);
			return propVal;
		}

		static ServerData::PropertyValue GenerateFloatPropVal(float value)
		{
			ServerData::PropertyValue propVal;
			propVal.set_scalarval(value);
			return propVal;
		}

		static ServerData::PropertyValue GenerateVectorPropVal(const FVector& value)
		{
			ServerData::PropertyValue propVal;
			propVal.mutable_vectorval()->CopyFrom(ToProtoVector(value));
			return propVal;
		}

		static ServerData::PropertyValue GenerateTransformPropVal(const FTransform& value)
		{
			ServerData::PropertyValue propVal;
			propVal.mutable_transformval()->CopyFrom(ToProtoTransform(value));
			return propVal;
		}

		static ServerData::RelayClientMessage GeneratePropBoilerplate(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, const ServerData::PropertyValue& propVal, int localChangeId)
		{
			ServerData::PostPropertyUpdate req;
			req.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
			req.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
			req.mutable_propertyvalue()->CopyFrom(propVal);
			req.set_localchangeid(localChangeId);

			ServerData::RelayClientMessage msg;
			msg.mutable_postpropertyupdate()->CopyFrom(req);

			return msg;
		}

		static ServerData::RelayClientMessage GenerateDefinePropBoilerplate(const FCavrnusSpaceConnection& spaceConn, const PropertyId& propertyId, const ServerData::PropertyValue& propVal, int localChangeId)
		{
			ServerData::DefinePropertyDefaultValue req;
			req.mutable_spaceconn()->CopyFrom(ToPb(spaceConn));
			req.set_propertyid(TCHAR_TO_UTF8(*(PropertyId::GetCombinedName(propertyId))));
			req.mutable_propertyvalue()->CopyFrom(propVal);
			req.set_localchangeid(localChangeId);

			ServerData::RelayClientMessage msg;
			msg.mutable_definepropertydefaultvalue()->CopyFrom(req);

			return msg;
		}

	};

} // namespace CavrnusRelay