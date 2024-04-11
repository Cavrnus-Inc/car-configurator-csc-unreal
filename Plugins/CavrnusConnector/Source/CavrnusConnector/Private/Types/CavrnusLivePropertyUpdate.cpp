#include "Types/CavrnusLivePropertyUpdate.h"
#include "Translation\CavrnusProtoTranslation.h"
#include "RelayModel\CavrnusPropertyValue.h"
#include "RelayModel\PropertyId.h"

UCavrnusLivePropertyUpdate::UCavrnusLivePropertyUpdate()
{

}

UCavrnusLivePropertyUpdate::~UCavrnusLivePropertyUpdate()
{
}

void UCavrnusLivePropertyUpdate::Initialize(Cavrnus::CavrnusRelayModel* relayModel, FCavrnusSpaceConnection spaceConn, const Cavrnus::PropertyId& propertyId)
{
	SpaceConn = spaceConn;
	LiveUpdaterId = FGuid::NewGuid().ToString();
	RelayModel = relayModel;
	PropertyId = propertyId;
}

void UCavrnusLivePropertyUpdate::Cancel()
{
	RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildCancelLiveUpdateMsg(SpaceConn, LiveUpdaterId));
}
