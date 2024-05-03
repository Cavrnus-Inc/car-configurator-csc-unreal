#pragma once
#include "Comm/relay.pb.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Types/CavrnusSpaceConnection.h"
#include "Types/CavrnusSpaceInfo.h"
#include "Types/CavrnusInputDevice.h"
#include "Types/CavrnusOutputDevice.h"
#include "Types/CavrnusVideoInputDevice.h"
#include "Types/CavrnusUser.h"
#include "Types/PropertyId.h"
#include "Types/CavrnusPropertyValue.h"

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

		static const ServerData::RelayClientMessage BuildDefinePropMsg(const FCavrnusSpaceConnection& spaceConn, const FPropertyId& propertyId, const FPropertyValue& value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildUpdatePropMsg(const FCavrnusSpaceConnection& spaceConn, const FPropertyId& propertyId, const FPropertyValue& value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildBeginLivePropertyUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const FPropertyId& propertyId, const FPropertyValue& value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildContinueLivePropertyUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const FPropertyId& propertyId, const FPropertyValue& value, const int localChangeId);
		static const ServerData::RelayClientMessage BuildFinalizeLivePropertyUpdateMsg(const FCavrnusSpaceConnection& spaceConn, const FString& liveUpdaterId, const FPropertyId& propertyId, const FPropertyValue& value, const int localChangeId);
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

		static const ServerData::RelayClientMessage BuildRequestFileById(const FString& contentId);
		static const ServerData::RelayClientMessage BuildRequestAllUploadedContent(int callbackId);
		static const ServerData::RelayClientMessage BuildUploadContent(int callbackId, const FString& filePath, const TMap<FString, FString>& tags);
#pragma endregion



	private:

		static ServerData::PropertyValue GeneratePropVal(const FPropertyValue& value)
		{
			ServerData::PropertyValue propVal;

			if (value.PropType == FPropertyValue::PropertyType::Bool)
				propVal.set_boolval(value.BoolValue);
			if (value.PropType == FPropertyValue::PropertyType::Float)
				propVal.set_scalarval(value.FloatValue);
			if (value.PropType == FPropertyValue::PropertyType::String)
				propVal.set_stringval(TCHAR_TO_UTF8(*value.StringValue));
			if (value.PropType == FPropertyValue::PropertyType::Color)
				propVal.mutable_colorval()->CopyFrom(ToProtoColor(value.ColorValue));
			if (value.PropType == FPropertyValue::PropertyType::Vector)
				propVal.mutable_vectorval()->CopyFrom(ToProtoVector(value.VectorValue));
			if (value.PropType == FPropertyValue::PropertyType::Transform)
				propVal.mutable_transformval()->CopyFrom(ToProtoTransform(value.TransformValue));
			
			return propVal;
		}
	};

} // namespace CavrnusRelay