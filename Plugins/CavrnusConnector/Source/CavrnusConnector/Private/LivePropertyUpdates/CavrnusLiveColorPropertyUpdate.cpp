#include "LivePropertyUpdates/CavrnusLiveColorPropertyUpdate.h"
#include "Translation\CavrnusProtoTranslation.h"

UCavrnusLiveColorPropertyUpdate::UCavrnusLiveColorPropertyUpdate()
{

}

UCavrnusLiveColorPropertyUpdate::~UCavrnusLiveColorPropertyUpdate()
{
}

void UCavrnusLiveColorPropertyUpdate::Initialize(Cavrnus::CavrnusRelayModel* relayModel, FCavrnusSpaceConnection spaceConn, const FPropertyId& propertyId, FLinearColor value)
{
	livePropertyUpdate = Cavrnus::CavrnusVirtualPropertyUpdate(relayModel, spaceConn, propertyId, Cavrnus::FPropertyValue::ColorPropValue(value));
}

void UCavrnusLiveColorPropertyUpdate::UpdateWithNewData(FLinearColor value)
{
	livePropertyUpdate.UpdateWithNewData(Cavrnus::FPropertyValue::ColorPropValue(value));
}

void UCavrnusLiveColorPropertyUpdate::Finalize(FLinearColor value)
{
	livePropertyUpdate.Finalize(Cavrnus::FPropertyValue::ColorPropValue(value));
}
