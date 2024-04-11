#include "Types/CavrnusLiveColorPropertyUpdate.h"
#include "Translation\CavrnusProtoTranslation.h"

UCavrnusLiveColorPropertyUpdate::UCavrnusLiveColorPropertyUpdate()
{

}

UCavrnusLiveColorPropertyUpdate::~UCavrnusLiveColorPropertyUpdate()
{
}

void UCavrnusLiveColorPropertyUpdate::Initialize(Cavrnus::CavrnusRelayModel* relayModel, FCavrnusSpaceConnection spaceConn, const Cavrnus::PropertyId& propertyId, FLinearColor value)
{
	Super::Initialize(relayModel, spaceConn, propertyId);

	int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, Cavrnus::FPropertyValue::ColorPropValue(value));
	RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildBeginLiveColorUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, value, localChangeId));
}

void UCavrnusLiveColorPropertyUpdate::UpdateWithNewData(FLinearColor value)
{
	int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, Cavrnus::FPropertyValue::ColorPropValue(value));
	RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildContinueLiveColorUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, value, localChangeId));
}

void UCavrnusLiveColorPropertyUpdate::Finalize(FLinearColor value)
{
	int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, Cavrnus::FPropertyValue::ColorPropValue(value));
	RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildFinalizeLiveColorUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, value, localChangeId));
}
