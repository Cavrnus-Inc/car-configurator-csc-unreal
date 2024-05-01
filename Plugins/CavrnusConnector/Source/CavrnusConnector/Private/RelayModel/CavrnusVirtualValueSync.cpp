#include "RelayModel/CavrnusVirtualValueSync.h"
#include "RelayModel/CavrnusVirtualPropertyUpdate.h"
#include "CavrnusPropertiesContainer.h"
#include "Types/CavrnusLivePropertyUpdate.h"
#include <Engine/World.h>
#include <GameFramework/Actor.h>
#include <Kismet/KismetSystemLibrary.h>
#include <TimerManager.h>
#include <CavrnusFunctionLibrary.h>

//===========================================================
CavrnusVirtualValueSync::CavrnusVirtualValueSync(Cavrnus::CavrnusRelayModel* relayModel, const FString& containerName, const FString& propName, FCavrnusSpaceConnection spaceConn)
{
	RelayModel = relayModel;
	SpaceConn = spaceConn;
	ContainerName = containerName;
	PropName = propName;
}

//===========================================================
CavrnusVirtualValueSync::~CavrnusVirtualValueSync()
{
}

void CavrnusVirtualValueSync::HandleCurrLocalState(Cavrnus::FPropertyValue& localValue, Cavrnus::FPropertyValue& serverValue, double gameTimeMs)
{
	if (livePropUpdate != nullptr)
		serverValue = lastSentPropValue;

	if (serverValue == localValue)
	{
		if (livePropUpdate == nullptr)
			return;

		if (gameTimeMs - livePropUpdate->lastUpdatedTimeMs <= msToWaitBeforePosting)
			return;

		if (!ContainerName.StartsWith("users/"))
		{
			lastSentPropValue = localValue;
			livePropUpdate->Finalize(localValue);
			livePropUpdate = nullptr;
		}
	}
	else
	{
		lastSentPropValue = localValue;

		if (livePropUpdate == nullptr)
		{
			livePropUpdate = new Cavrnus::CavrnusVirtualPropertyUpdate(RelayModel, SpaceConn, FPropertyId(ContainerName, PropName), lastSentPropValue);
		}
		else
		{
			livePropUpdate->UpdateWithNewData(lastSentPropValue);
		}
	}
}
