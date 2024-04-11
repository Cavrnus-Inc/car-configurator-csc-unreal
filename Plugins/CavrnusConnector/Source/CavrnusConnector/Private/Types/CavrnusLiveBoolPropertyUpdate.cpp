#include "Types/CavrnusLiveBoolPropertyUpdate.h"
#include "Translation\CavrnusProtoTranslation.h"

UCavrnusLiveBoolPropertyUpdate::UCavrnusLiveBoolPropertyUpdate()
{

}

UCavrnusLiveBoolPropertyUpdate::~UCavrnusLiveBoolPropertyUpdate()
{
}

void UCavrnusLiveBoolPropertyUpdate::Initialize(Cavrnus::CavrnusRelayModel* relayModel, FCavrnusSpaceConnection spaceConn, const Cavrnus::PropertyId& propertyId, bool value)
{
	Super::Initialize(relayModel, spaceConn, propertyId);

	int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, Cavrnus::FPropertyValue::BoolPropValue(value));
	RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildBeginLiveBoolUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, value, localChangeId));
}

void UCavrnusLiveBoolPropertyUpdate::UpdateWithNewData(bool value)
{
	int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, Cavrnus::FPropertyValue::BoolPropValue(value));
	RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildContinueLiveBoolUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, value, localChangeId));
}

void UCavrnusLiveBoolPropertyUpdate::Finalize(bool value)
{
	int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, Cavrnus::FPropertyValue::BoolPropValue(value));
	RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildFinalizeLiveBoolUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, value, localChangeId));
}
