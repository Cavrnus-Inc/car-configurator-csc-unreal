#include "Types/CavrnusLiveStringPropertyUpdate.h"
#include "Translation\CavrnusProtoTranslation.h"

UCavrnusLiveStringPropertyUpdate::UCavrnusLiveStringPropertyUpdate()
{

}

UCavrnusLiveStringPropertyUpdate::~UCavrnusLiveStringPropertyUpdate()
{
}

void UCavrnusLiveStringPropertyUpdate::Initialize(Cavrnus::CavrnusRelayModel* relayModel, FCavrnusSpaceConnection spaceConn, const Cavrnus::PropertyId& propertyId, FString value)
{
	Super::Initialize(relayModel, spaceConn, propertyId);

	int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, Cavrnus::FPropertyValue::StringPropValue(value));
	RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildBeginLiveStringUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, value, localChangeId));

	lastUpdatedTimeMs = FPlatformTime::ToMilliseconds(FPlatformTime::Cycles());
}

void UCavrnusLiveStringPropertyUpdate::UpdateWithNewData(FString value)
{
	int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, Cavrnus::FPropertyValue::StringPropValue(value));
	RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildContinueLiveStringUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, value, localChangeId));

	lastUpdatedTimeMs = FPlatformTime::ToMilliseconds(FPlatformTime::Cycles());
}

void UCavrnusLiveStringPropertyUpdate::Finalize(FString value)
{
	int localChangeId = RelayModel->GetSpacePropertyModel(SpaceConn)->SetLocalPropVal(PropertyId, Cavrnus::FPropertyValue::StringPropValue(value));
	RelayModel->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildFinalizeLiveStringUpdateMsg(SpaceConn, LiveUpdaterId, PropertyId, value, localChangeId));

	lastUpdatedTimeMs = FPlatformTime::ToMilliseconds(FPlatformTime::Cycles());
}
