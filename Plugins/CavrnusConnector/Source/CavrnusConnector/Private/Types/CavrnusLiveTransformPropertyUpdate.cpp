#include "Types/CavrnusLiveTransformPropertyUpdate.h"
#include "Translation\CavrnusProtoTranslation.h"

UCavrnusLiveTransformPropertyUpdate::UCavrnusLiveTransformPropertyUpdate()
{

}

UCavrnusLiveTransformPropertyUpdate::~UCavrnusLiveTransformPropertyUpdate()
{
}

void UCavrnusLiveTransformPropertyUpdate::Initialize(Cavrnus::CavrnusRelayModel* relayModel, FCavrnusSpaceConnection spaceConn, const Cavrnus::PropertyId& propertyId, FTransform value)
{
	Super::Initialize(relayModel, spaceConn, propertyId);

	int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, Cavrnus::FPropertyValue::TransformPropValue(value));
	RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildBeginLiveTransformUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, value, localChangeId));
}

void UCavrnusLiveTransformPropertyUpdate::UpdateWithNewData(FTransform value)
{
	int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, Cavrnus::FPropertyValue::TransformPropValue(value));
	RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildContinueLiveTransformUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, value, localChangeId));
}

void UCavrnusLiveTransformPropertyUpdate::Finalize(FTransform value)
{
	int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, Cavrnus::FPropertyValue::TransformPropValue(value));
	RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildFinalizeLiveTransformUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, value, localChangeId));
}
