#include "LivePropertyUpdates/CavrnusLiveBoolPropertyUpdate.h"
#include "Translation\CavrnusProtoTranslation.h"

UCavrnusLiveBoolPropertyUpdate::UCavrnusLiveBoolPropertyUpdate()
{

}

UCavrnusLiveBoolPropertyUpdate::~UCavrnusLiveBoolPropertyUpdate()
{
}

void UCavrnusLiveBoolPropertyUpdate::Initialize(Cavrnus::CavrnusRelayModel* relayModel, FCavrnusSpaceConnection spaceConn, const FPropertyId& propertyId, bool value)
{
	livePropertyUpdate = Cavrnus::CavrnusVirtualPropertyUpdate(relayModel, spaceConn, propertyId, Cavrnus::FPropertyValue::BoolPropValue(value));
}

void UCavrnusLiveBoolPropertyUpdate::UpdateWithNewData(bool value)
{
	livePropertyUpdate.UpdateWithNewData(Cavrnus::FPropertyValue::BoolPropValue(value));
}

void UCavrnusLiveBoolPropertyUpdate::Finalize(bool value)
{
	livePropertyUpdate.Finalize(Cavrnus::FPropertyValue::BoolPropValue(value));
}
