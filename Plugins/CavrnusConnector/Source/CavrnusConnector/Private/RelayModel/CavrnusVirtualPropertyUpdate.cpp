#include "RelayModel/CavrnusVirtualPropertyUpdate.h"
#include "RelayModel/CavrnusPropertyValue.h"
#include "RelayModel/PropertyId.h"
#include "Translation/CavrnusProtoTranslation.h"

namespace Cavrnus
{
	CavrnusVirtualPropertyUpdate::CavrnusVirtualPropertyUpdate()
	{
	}

	CavrnusVirtualPropertyUpdate::CavrnusVirtualPropertyUpdate(Cavrnus::CavrnusRelayModel* relayModel, FCavrnusSpaceConnection spaceConn, const FPropertyId& propertyId, const FPropertyValue& propVal)
	{
		RelayModel = relayModel;
		SpaceConn = spaceConn;
		PropertyId = propertyId;

		LiveUpdaterId = FGuid::NewGuid().ToString();

		lastSentValue = propVal;

		int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, propVal);
		RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildBeginLivePropertyUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, propVal, localChangeId));

		lastUpdatedTimeMs = FPlatformTime::ToMilliseconds(FPlatformTime::Cycles());
	}

	CavrnusVirtualPropertyUpdate::~CavrnusVirtualPropertyUpdate()
	{
	}

	void CavrnusVirtualPropertyUpdate::UpdateWithNewData(const FPropertyValue& propVal)
	{
		lastSentValue = propVal;

		int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, propVal);
		RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildContinueLivePropertyUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, propVal, localChangeId));

		lastUpdatedTimeMs = FPlatformTime::ToMilliseconds(FPlatformTime::Cycles());
	}

	void CavrnusVirtualPropertyUpdate::Finalize()
	{
		int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, lastSentValue);
		RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildFinalizeLivePropertyUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, lastSentValue, localChangeId));

		lastUpdatedTimeMs = FPlatformTime::ToMilliseconds(FPlatformTime::Cycles());
	}

	void CavrnusVirtualPropertyUpdate::Finalize(const FPropertyValue& propVal)
	{
		lastSentValue = propVal;

		int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, propVal);
		RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildFinalizeLivePropertyUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, propVal, localChangeId));

		lastUpdatedTimeMs = FPlatformTime::ToMilliseconds(FPlatformTime::Cycles());
	}

	void CavrnusVirtualPropertyUpdate::Cancel()
	{
		RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildCancelLiveUpdateMsg(SpaceConn, LiveUpdaterId));
	}
}

