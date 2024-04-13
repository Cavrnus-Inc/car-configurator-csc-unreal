#include "Types/CavrnusLiveFloatPropertyUpdate.h"
#include "Translation\CavrnusProtoTranslation.h"

UCavrnusLiveFloatPropertyUpdate::UCavrnusLiveFloatPropertyUpdate()
{

}

UCavrnusLiveFloatPropertyUpdate::~UCavrnusLiveFloatPropertyUpdate()
{
}

void UCavrnusLiveFloatPropertyUpdate::Initialize(Cavrnus::CavrnusRelayModel* relayModel, FCavrnusSpaceConnection spaceConn, const Cavrnus::PropertyId& propertyId, float value)
{
	Super::Initialize(relayModel, spaceConn, propertyId);

	int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, Cavrnus::FPropertyValue::FloatPropValue(value));
	RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildBeginLiveFloatUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, value, localChangeId));

	lastUpdatedTimeMs = FPlatformTime::ToMilliseconds(FPlatformTime::Cycles());
}

void UCavrnusLiveFloatPropertyUpdate::UpdateWithNewData(float value)
{
	int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, Cavrnus::FPropertyValue::FloatPropValue(value));
	RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildContinueLiveFloatUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, value, localChangeId));

	lastUpdatedTimeMs = FPlatformTime::ToMilliseconds(FPlatformTime::Cycles());
}

void UCavrnusLiveFloatPropertyUpdate::Finalize(float value)
{
	int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, Cavrnus::FPropertyValue::FloatPropValue(value));
	RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildFinalizeLiveFloatUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, value, localChangeId));

	lastUpdatedTimeMs = FPlatformTime::ToMilliseconds(FPlatformTime::Cycles());
}
