#include "Types/CavrnusLiveStringPropertyUpdate.h"
#include "Translation\CavrnusProtoTranslation.h"

UCavrnusLiveStringPropertyUpdate::UCavrnusLiveStringPropertyUpdate()
{

}

UCavrnusLiveStringPropertyUpdate::~UCavrnusLiveStringPropertyUpdate()
{
}

void UCavrnusLiveStringPropertyUpdate::Initialize(Cavrnus::CavrnusRelayModel* relayModel, FCavrnusSpaceConnection spaceConn, const FPropertyId& propertyId, FString value)
{
	livePropertyUpdate = Cavrnus::CavrnusVirtualPropertyUpdate(relayModel, spaceConn, propertyId, Cavrnus::FPropertyValue::StringPropValue(value));
}

void UCavrnusLiveStringPropertyUpdate::UpdateWithNewData(FString value)
{
	livePropertyUpdate.UpdateWithNewData(Cavrnus::FPropertyValue::StringPropValue(value));
}

void UCavrnusLiveStringPropertyUpdate::Finalize(FString value)
{
	livePropertyUpdate.Finalize(Cavrnus::FPropertyValue::StringPropValue(value));
}
