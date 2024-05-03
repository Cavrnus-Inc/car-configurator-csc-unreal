#include "LivePropertyUpdates/CavrnusLiveFloatPropertyUpdate.h"
#include "Translation\CavrnusProtoTranslation.h"

UCavrnusLiveFloatPropertyUpdate::UCavrnusLiveFloatPropertyUpdate()
{

}

UCavrnusLiveFloatPropertyUpdate::~UCavrnusLiveFloatPropertyUpdate()
{
}

void UCavrnusLiveFloatPropertyUpdate::Initialize(Cavrnus::CavrnusRelayModel* relayModel, FCavrnusSpaceConnection spaceConn, const FPropertyId& propertyId, float value)
{
	livePropertyUpdate = Cavrnus::CavrnusVirtualPropertyUpdate(relayModel, spaceConn, propertyId, Cavrnus::FPropertyValue::FloatPropValue(value));
}

void UCavrnusLiveFloatPropertyUpdate::UpdateWithNewData(float value)
{
	livePropertyUpdate.UpdateWithNewData(Cavrnus::FPropertyValue::FloatPropValue(value));
}

void UCavrnusLiveFloatPropertyUpdate::Finalize(float value)
{
	livePropertyUpdate.Finalize(Cavrnus::FPropertyValue::FloatPropValue(value));
}
