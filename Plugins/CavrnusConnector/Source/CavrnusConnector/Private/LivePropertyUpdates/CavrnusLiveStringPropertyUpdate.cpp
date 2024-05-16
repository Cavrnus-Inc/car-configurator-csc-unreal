#include "LivePropertyUpdates/CavrnusLiveStringPropertyUpdate.h"
#include "RelayModel/CavrnusVirtualPropertyUpdate.h"
#include "Translation/CavrnusProtoTranslation.h"

UCavrnusLiveStringPropertyUpdate::UCavrnusLiveStringPropertyUpdate()
{
}

UCavrnusLiveStringPropertyUpdate::~UCavrnusLiveStringPropertyUpdate()
{
}

void UCavrnusLiveStringPropertyUpdate::Initialize(Cavrnus::CavrnusRelayModel* relayModel, FCavrnusSpaceConnection spaceConn, const FPropertyId& propertyId, FString value)
{
	livePropertyUpdate = new Cavrnus::CavrnusVirtualPropertyUpdate(relayModel, spaceConn, propertyId, Cavrnus::FPropertyValue::StringPropValue(value));
}

void UCavrnusLiveStringPropertyUpdate::UpdateWithNewData(FString value)
{
	if (livePropertyUpdate)
		livePropertyUpdate->UpdateWithNewData(Cavrnus::FPropertyValue::StringPropValue(value));
}

void UCavrnusLiveStringPropertyUpdate::Finalize(FString value)
{
	if (livePropertyUpdate)
		livePropertyUpdate->Finalize(Cavrnus::FPropertyValue::StringPropValue(value));
}
