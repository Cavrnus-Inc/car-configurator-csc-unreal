#include "CavrnusRelayModel.h"
#include "CavrnusConnectorSettings.h"
#include "SpacePropertyModel.h"
#include "SpacePermissionsModel.h"
#include "../Interop/CavrnusInteropLayer.h"
#include "RelayCallbackModel.h"
#include "DataState.h"
#include <HAL/PlatformTime.h>
#include "CoreMinimal.h"
#include "Types/CavrnusSpawnedObject.h"
#include "SpawnedObjectsManager.h"
#include "PDFManager.h"

namespace Cavrnus
{
	CavrnusRelayModel::CavrnusRelayModel()
	{
		// Get settings class
		UCavrnusConnectorSettings* settings = GetMutableDefault<UCavrnusConnectorSettings>();
		if (!settings)
		{
			UE_LOG(LogCavrnusConnector, Log, TEXT("[CavrnusRelayModel::CavrnusRelayModel()] Could not get UCavrnusConnectorSettings class."));
			return;
		}

		// Now get our network settings
		int RelayNetPort = settings->RelayNetPort;
		FString RelayNetIPAddress = settings->RelayNetIPAddress;

		interopLayer = new CavrnusInteropLayer(RelayNetIPAddress, RelayNetPort);

		dataState = new DataState();
		callbackModel = new RelayCallbackModel(this);
	}

	CavrnusRelayModel::~CavrnusRelayModel()
	{
		delete interopLayer;
		delete callbackModel;
	}

	bool CavrnusRelayModel::IsTickableInEditor() const
	{
		return true;
	}

	void CavrnusRelayModel::Tick(float DeltaTime)
	{
		interopLayer->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildKeepAliveMsg());

		float CurrentTime = FPlatformTime::ToMilliseconds(FPlatformTime::Cycles());

		interopLayer->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildUpdateTimeMsg(CurrentTime/1000));

		interopLayer->DoTick();

		auto receivedMessages = interopLayer->GetReceivedMessages();
		for (int i = 0; i < receivedMessages.Num(); i++)
		{
			HandleServerMsg(receivedMessages[i]);
		}

		if (PDFManager)
			PDFManager->Update(DeltaTime);
	}

	TStatId CavrnusRelayModel::GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(CavrnusRelayModel, STATGROUP_Tickables);
	}

	SpacePermissionsModel* CavrnusRelayModel::GetGlobalPermissionsModel()
	{
		if (globalPermissionsModel == nullptr)
			globalPermissionsModel = new SpacePermissionsModel();

		return globalPermissionsModel;
	}

	SpacePermissionsModel* CavrnusRelayModel::GetSpacePermissionsModel(FCavrnusSpaceConnection spaceConn)
	{
		if (!spacePermissionsModelLookup.Contains(spaceConn.SpaceConnectionId))
			spacePermissionsModelLookup.Add(spaceConn.SpaceConnectionId, new SpacePermissionsModel());

		return spacePermissionsModelLookup[spaceConn.SpaceConnectionId];
	}

	SpacePropertyModel* CavrnusRelayModel::GetSpacePropertyModel(FCavrnusSpaceConnection spaceConn)
	{
		if (!spacePropertyModelLookup.Contains(spaceConn.SpaceConnectionId))
			spacePropertyModelLookup.Add(spaceConn.SpaceConnectionId, new SpacePropertyModel());

		return spacePropertyModelLookup[spaceConn.SpaceConnectionId];
	}

	RelayCallbackModel* CavrnusRelayModel::GetCallbackModel()
	{
		return callbackModel;
	}

	DataState* CavrnusRelayModel::GetDataState()
	{
		return dataState;
	}

	void CavrnusRelayModel::SetPDFManager(UPDFManager* PDFMan)
	{
		PDFManager = PDFMan;
	}

	void CavrnusRelayModel::SendMessage(const ServerData::RelayClientMessage& msg)
	{
		interopLayer->SendMessage(msg);
	}

	void CavrnusRelayModel::HandleServerMsg(const ServerData::RelayRemoteMessage& msg)
	{
		/*bool shouldPrint = true;

		if (msg.Msg_case() == ServerData::RelayRemoteMessage::kPropertyValueStatus) {
			std::string propId = msg.propertyvaluestatus().propertypath().id();
			if (propId._Starts_with("/users") || propId._Starts_with("/date") || propId._Starts_with("/time"))
				shouldPrint = false;
		}

		if (msg.Msg_case() == ServerData::RelayRemoteMessage::kUserVideoFrame)
			shouldPrint = false;



		if (shouldPrint)
		{
			FString output = msg.DebugString().c_str();

			UE_LOG(LogCavrnusConnector, Log, TEXT("CLIENT RECV: %s"), *output);
		}*/

		switch (msg.Msg_case())
		{
		case ServerData::RelayRemoteMessage::kPropertyValueStatus:
			HandleServerPropertyUpdate(msg.propertyvaluestatus());
			break;
		case ServerData::RelayRemoteMessage::kAuthenticateResp:
			callbackModel->HandleServerCallback(msg.authenticateresp().reqid(), msg);
			break;
		case ServerData::RelayRemoteMessage::kAuthenticateGuestResp:
			callbackModel->HandleServerCallback(msg.authenticateguestresp().reqid(), msg);
			break;
		case ServerData::RelayRemoteMessage::kJoinSpaceFromIdResp:
			callbackModel->HandleServerCallback(msg.joinspacefromidresp().reqid(), msg);
			break;
		case ServerData::RelayRemoteMessage::kGetAudioInputDevicesResp:
			callbackModel->HandleServerCallback(msg.getaudioinputdevicesresp().reqid(), msg);
			break;
		case ServerData::RelayRemoteMessage::kGetAudioOutputDevicesResp:
			callbackModel->HandleServerCallback(msg.getaudiooutputdevicesresp().reqid(), msg);
			break;
		case ServerData::RelayRemoteMessage::kGetVideoInputDevicesResp:
			callbackModel->HandleServerCallback(msg.getvideoinputdevicesresp().reqid(), msg);
			break;
		case ServerData::RelayRemoteMessage::kMessage:
			HandleLogging(msg.message());
			break;
		case ServerData::RelayRemoteMessage::kSpaceAdded:
			dataState->AddJoinableSpace(CavrnusProtoTranslation::ToSpaceInfo(msg.spaceadded()));
			break;
		case ServerData::RelayRemoteMessage::kSpaceUpdated:
			dataState->UpdateJoinableSpace(CavrnusProtoTranslation::ToSpaceInfo(msg.spaceupdated()));
			break;
		case ServerData::RelayRemoteMessage::kSpaceRemoved:
			dataState->RemoveJoinableSpace(CavrnusProtoTranslation::ToSpaceInfo(msg.spaceremoved()));
			break;
		case ServerData::RelayRemoteMessage::kUserAdded:
			HandleSpaceUserAdded(msg.useradded().spaceconn(), msg.useradded().user());
			break;
		case ServerData::RelayRemoteMessage::kUserRemoved:
			HandleSpaceUserRemoved(msg.userremoved().spaceconn(), msg.userremoved().userid());
			break;
		case ServerData::RelayRemoteMessage::kUserVideoFrame:
			HandleSpaceUserVideoFrame(msg.uservideoframe());
			break;
		case ServerData::RelayRemoteMessage::kObjectAdded:
			HandleSpaceObjectAdded(msg.objectadded());
			break;
		case ServerData::RelayRemoteMessage::kObjectRemoved:
			HandleSpaceObjectRemoved(msg.objectremoved());
			break;
		case ServerData::RelayRemoteMessage::kPermissionStatus:
			HandlePermissionStatus(msg.permissionstatus());
			break;
		case ServerData::RelayRemoteMessage::kAllJoinableSpacesResp:
			callbackModel->HandleServerCallback(msg.alljoinablespacesresp().reqid(), msg);
			break;
		case ServerData::RelayRemoteMessage::kLocalPropertyHandledResp:
			HandleLocalPropHandledResp(msg.localpropertyhandledresp());
			break;
		case ServerData::RelayRemoteMessage::kPropMetadataStatus:
			HandlePropMetadataStatus(msg.propmetadatastatus());
			break;
		default:
			UE_LOG(LogCavrnusConnector, Warning, TEXT("Unhandled server message, message type: %d"), static_cast<int>(msg.Msg_case()));
			break;
		}
	}

	void CavrnusRelayModel::HandleLogging(const ServerData::StatusMessage& message)
	{
		switch (message.Message_case())
		{
		case ServerData::StatusMessage::kLog:
			UE_LOG(LogCavrnusConnector, Log, TEXT("%s"), message.log().c_str());
			break;
		case ServerData::StatusMessage::kWarning:
			UE_LOG(LogCavrnusConnector, Warning, TEXT("%s"), message.warning().c_str());
			break;
		case ServerData::StatusMessage::kError:
			UE_LOG(LogCavrnusConnector, Error, TEXT("%s"), message.error().c_str());
			break;
		default:
			break;
		}
	}

	void CavrnusRelayModel::HandleSpaceUserAdded(ServerData::CavrnusSpaceConnection spaceConn, ServerData::CavrnusUser user)
	{
		if (!spacePropertyModelLookup.Contains(spaceConn.spaceconnectionid()))
			spacePropertyModelLookup.Add(spaceConn.spaceconnectionid(), new SpacePropertyModel());

		spacePropertyModelLookup[spaceConn.spaceconnectionid()]->AddSpaceUser(CavrnusProtoTranslation::ToCavrnusUser(user));
	}

	void CavrnusRelayModel::HandleSpaceUserRemoved(ServerData::CavrnusSpaceConnection spaceConn, std::string userId)
	{
		if (!spacePropertyModelLookup.Contains(spaceConn.spaceconnectionid()))
			spacePropertyModelLookup.Add(spaceConn.spaceconnectionid(), new SpacePropertyModel());

		spacePropertyModelLookup[spaceConn.spaceconnectionid()]->RemoveSpaceUser(userId.c_str());
	}

	void CavrnusRelayModel::HandleSpaceUserVideoFrame(const ServerData::UserVideoFrame& VideoFrame)
	{
		if (spacePropertyModelLookup.Contains(VideoFrame.spaceconn().spaceconnectionid()))
		{
			TArray<uint8> StreamArray((uint8*)VideoFrame.stream().c_str(), VideoFrame.stream().size());
			spacePropertyModelLookup[VideoFrame.spaceconn().spaceconnectionid()]->UpdateUserVideoTexture(VideoFrame.userid().c_str(), VideoFrame.resx(), VideoFrame.resy(), StreamArray);
		}
	}

	void CavrnusRelayModel::HandleSpaceObjectAdded(const ServerData::ObjectAdded& ObjectAdded)
	{
		FCavrnusSpawnedObject SpawnedObject;
		SpawnedObject.SpaceConnection = Cavrnus::CavrnusProtoTranslation::FromPb(ObjectAdded.spaceconn());
		SpawnedObject.CreationOpId = (FString(UTF8_TO_TCHAR(ObjectAdded.creationopid().c_str())));
		SpawnedObject.PropertiesContainerName = (FString(UTF8_TO_TCHAR(ObjectAdded.propertiescontainer().c_str())));
		SpawnedObject.UniqueIdentifier = (FString(UTF8_TO_TCHAR(ObjectAdded.objectcreated().c_str())));

		USpawnedObjectsManager* SpawnedObjectsManager = USpawnedObjectsManager::GetInstance();
		if (!SpawnedObjectsManager)
		{
			UE_LOG(LogCavrnusConnector, Error, TEXT("Failed to obtain spawned objects manager when space object added"));
			return;
		}

		SpawnedObjectsManager->RegisterSpawnedObject(SpawnedObject);
	}

	void CavrnusRelayModel::HandleSpaceObjectRemoved(const ServerData::ObjectRemoved& ObjectRemoved)
	{
		FCavrnusSpawnedObject SpawnedObject;
		SpawnedObject.PropertiesContainerName = (FString(UTF8_TO_TCHAR(ObjectRemoved.propertiescontainer().c_str())));

		USpawnedObjectsManager* SpawnedObjectsManager = USpawnedObjectsManager::GetInstance();
		if (!SpawnedObjectsManager)
		{
			UE_LOG(LogCavrnusConnector, Error, TEXT("Failed to obtain spawned objects manager when space object removed"));
			return;
		}

		SpawnedObjectsManager->UnregisterSpawnedObject(SpawnedObject);
	}

	void CavrnusRelayModel::HandlePermissionStatus(const ServerData::PermissionStatus& PermissionStatus)
	{
		if (PermissionStatus.has_spaceconn())
		{
			int spaceConnId = PermissionStatus.spaceconn().spaceconnectionid();

			if (!spacePermissionsModelLookup.Contains(spaceConnId))
				spacePermissionsModelLookup[spaceConnId] = new SpacePermissionsModel();

			spacePermissionsModelLookup[spaceConnId]->UpdatePolicyAllowed(PermissionStatus.permission().c_str(), PermissionStatus.value());
		}
		else
		{
			GetGlobalPermissionsModel()->UpdatePolicyAllowed(PermissionStatus.permission().c_str(), PermissionStatus.value());
		}
	}

	void CavrnusRelayModel::HandleLocalPropHandledResp(const ServerData::LocalPropertyHandledResp& localPropHandled)
	{
		int spaceConnId = localPropHandled.spaceconn().spaceconnectionid();

		if (!spacePropertyModelLookup.Contains(spaceConnId))
			spacePropertyModelLookup.Add(spaceConnId, new SpacePropertyModel());

		spacePropertyModelLookup[spaceConnId]->InvalidateLocalPropValue(PropertyId(localPropHandled.propertypath().id().c_str()), localPropHandled.localpropchangeid());
	}

	void CavrnusRelayModel::HandlePropMetadataStatus(const ServerData::PropMetadataStatus& metadataStatus)
	{
	}

	void CavrnusRelayModel::HandleServerPropertyUpdate(const ServerData::PropertyValueStatus& propStatus)
	{
		int spaceConnId = propStatus.spaceconn().spaceconnectionid();

		if (!spacePropertyModelLookup.Contains(spaceConnId))
			spacePropertyModelLookup.Add(spaceConnId, new SpacePropertyModel());

		const FString& propId = propStatus.propertypath().id().c_str();

		FPropertyValue val;

		switch (propStatus.propertyvalue().Value_case())
		{
			case ServerData::PropertyValue::kColorVal:
				val = FPropertyValue::ColorPropValue(Cavrnus::CavrnusProtoTranslation::ToFLinearColor(propStatus.propertyvalue().colorval()));
				break;
			case ServerData::PropertyValue::kBoolVal:
				val = FPropertyValue::BoolPropValue(propStatus.propertyvalue().boolval());
				break;
			case ServerData::PropertyValue::kScalarVal:
				val = FPropertyValue::FloatPropValue(propStatus.propertyvalue().scalarval());
				break;
			case ServerData::PropertyValue::kStringVal:
				val = FPropertyValue::StringPropValue(propStatus.propertyvalue().stringval().c_str());
				break;
			case ServerData::PropertyValue::kVectorVal:
				val = FPropertyValue::VectorPropValue(Cavrnus::CavrnusProtoTranslation::ToFVector4(propStatus.propertyvalue().vectorval()));
				break;
			case ServerData::PropertyValue::kTransformVal:
				val = FPropertyValue::TransformPropValue(Cavrnus::CavrnusProtoTranslation::ToFTransform(propStatus.propertyvalue().transformval()));
				break;
			default:
				break;
		}

		spacePropertyModelLookup[spaceConnId]->UpdateServerPropVal(propId, val);
	}
}