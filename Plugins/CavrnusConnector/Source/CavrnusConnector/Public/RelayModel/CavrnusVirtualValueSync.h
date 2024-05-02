#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Interfaces/IPropertySyncInterface.h"
#include "Types/CavrnusBinding.h"
#include "Types/CavrnusSpaceConnection.h"
#include "CavrnusPropertyValue.h"
#include "CavrnusVirtualPropertyUpdate.h"

class CavrnusVirtualValueSync 
{
public:
	// Constructor
	CavrnusVirtualValueSync(Cavrnus::CavrnusRelayModel* relayModel, const FString& containerName, const FString& propName, FCavrnusSpaceConnection spaceConn);

	// Destructor
	~CavrnusVirtualValueSync();
	
	void HandleCurrLocalState(Cavrnus::FPropertyValue& localValue, Cavrnus::FPropertyValue& serverValue, double GameTimeSeconds);

private:
	
	static const double SecondsToWaitBeforePosting;

	Cavrnus::CavrnusRelayModel* RelayModel;
	FCavrnusSpaceConnection SpaceConn;
	FString ContainerName;
	FString PropName;

	Cavrnus::FPropertyValue lastSentPropValue;
	Cavrnus::CavrnusVirtualPropertyUpdate* livePropUpdate;
};