#include "Types/CavrnusLivePropertyUpdate.h"
#include "Translation\CavrnusProtoTranslation.h"
#include "RelayModel\CavrnusPropertyValue.h"
#include "RelayModel\PropertyId.h"

UCavrnusLivePropertyUpdate::UCavrnusLivePropertyUpdate()
{

}

UCavrnusLivePropertyUpdate::~UCavrnusLivePropertyUpdate()
{
}

void UCavrnusLivePropertyUpdate::Cancel()
{
	livePropertyUpdate.Cancel();
}

double UCavrnusLivePropertyUpdate::GetLastUpdatedTimeMs()
{
	return livePropertyUpdate.lastUpdatedTimeMs;
}
