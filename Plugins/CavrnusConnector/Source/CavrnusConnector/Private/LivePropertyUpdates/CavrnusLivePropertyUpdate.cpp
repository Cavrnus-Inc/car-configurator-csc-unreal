#include "LivePropertyUpdates/CavrnusLivePropertyUpdate.h"
#include "Translation\CavrnusProtoTranslation.h"
#include "Types\CavrnusPropertyValue.h"
#include "Types\PropertyId.h"

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

double UCavrnusLivePropertyUpdate::GetLastUpdatedTimeSeconds()
{
	return livePropertyUpdate.lastUpdatedTimeSec;
}
