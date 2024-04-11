#include "Types/CavrnusLiveVectorPropertyUpdate.h"
#include "Translation\CavrnusProtoTranslation.h"

UCavrnusLiveVectorPropertyUpdate::UCavrnusLiveVectorPropertyUpdate()
{

}

UCavrnusLiveVectorPropertyUpdate::~UCavrnusLiveVectorPropertyUpdate()
{
}

void UCavrnusLiveVectorPropertyUpdate::Initialize(Cavrnus::CavrnusRelayModel* relayModel, FCavrnusSpaceConnection spaceConn, const Cavrnus::PropertyId& propertyId, FVector value)
{
	Super::Initialize(relayModel, spaceConn, propertyId);

	int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, Cavrnus::FPropertyValue::VectorPropValue(value));
	RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildBeginLiveVectorUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, value, localChangeId));
}

void UCavrnusLiveVectorPropertyUpdate::UpdateWithNewData(FVector value)
{
	int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, Cavrnus::FPropertyValue::VectorPropValue(value));
	RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildContinueLiveVectorUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, value, localChangeId));
}

void UCavrnusLiveVectorPropertyUpdate::Finalize(FVector value)
{
	int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, Cavrnus::FPropertyValue::VectorPropValue(value));
	RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildFinalizeLiveVectorUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, value, localChangeId));
}
