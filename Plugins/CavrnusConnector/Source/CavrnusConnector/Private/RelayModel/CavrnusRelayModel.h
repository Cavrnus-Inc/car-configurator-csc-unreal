#pragma once

#include "../../Public/Types/CavrnusSpaceConnection.h"
#include "SpacePropertyModel.h"

#include "CavrnusConnectorModule.h"

#include <CoreMinimal.h>
#include <string>
#include <Tickable.h>
#include "CavrnusContentModel.h"

class UPDFManager;

namespace ServerData
{
	class CavrnusUser;
	class RelayClientMessage;
	class RelayRemoteMessage;
	class StatusMessage;
	class CavrnusSpaceConnection;
	class UserVideoFrame;
	class PropertyValueStatus;
	class ObjectAdded;
	class ObjectRemoved;
	class PermissionStatus;
	class LocalPropertyHandledResp;
	class PropMetadataStatus;
}

namespace Cavrnus
{
	class CavrnusInteropLayer;
	class DataState;
	class RelayCallbackModel;
	class SpacePropertyModel;
	class SpacePermissionsModel;

	class CAVRNUSCONNECTOR_API CavrnusRelayModel : public FTickableGameObject
	{
	public:
		CavrnusRelayModel();
		virtual ~CavrnusRelayModel();

		bool IsTickableInEditor() const override;
		void Tick(float DeltaTime) override;
		TStatId GetStatId() const override;

		SpacePermissionsModel* GetGlobalPermissionsModel();
		SpacePermissionsModel* GetSpacePermissionsModel(FCavrnusSpaceConnection spaceConn);
		SpacePropertyModel* GetSpacePropertyModel(FCavrnusSpaceConnection spaceConn);
		RelayCallbackModel* GetCallbackModel();
		DataState* GetDataState();
		void SetPDFManager(UPDFManager* PDFManager);
		void SendMessage(const ServerData::RelayClientMessage& msg);

		CavrnusContentModel ContentModel;

		CaseSensitiveMap<FString, TSharedPtr<const CavrnusSpawnedObjectFunction>> ObjectCreationCallbacks;

	private:
		CavrnusInteropLayer* interopLayer;
		RelayCallbackModel* callbackModel;
		DataState* dataState;
		SpacePermissionsModel* globalPermissionsModel;
		TMap<int, SpacePermissionsModel*> spacePermissionsModelLookup;
		TMap<int, SpacePropertyModel*> spacePropertyModelLookup;
		class UPDFManager* PDFManager = nullptr;
		void HandleServerMsg(const ServerData::RelayRemoteMessage& msg);

		void HandleLogging(const ServerData::StatusMessage& message);
		void HandleSpaceUserAdded(ServerData::CavrnusSpaceConnection spaceConn, ServerData::CavrnusUser userId);
		void HandleSpaceUserRemoved(ServerData::CavrnusSpaceConnection spaceConn, std::string userId);
		void HandleSpaceUserVideoFrame(const ServerData::UserVideoFrame& VideoFrame);
		void HandleServerPropertyUpdate(const ServerData::PropertyValueStatus& propStatus);
		void HandleSpaceObjectAdded(const ServerData::ObjectAdded& ObjectAdded);
		void HandleSpaceObjectRemoved(const ServerData::ObjectRemoved& ObjectRemoved);
		void HandlePermissionStatus(const ServerData::PermissionStatus& PermissionStatus);
		void HandleLocalPropHandledResp(const ServerData::LocalPropertyHandledResp& localPropHandled);
		void HandlePropMetadataStatus(const ServerData::PropMetadataStatus& metadataStatus);
	};

} // namespace CavrnusRelay