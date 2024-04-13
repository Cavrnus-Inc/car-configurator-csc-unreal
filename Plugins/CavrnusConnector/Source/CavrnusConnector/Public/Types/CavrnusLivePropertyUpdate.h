#pragma once

#include "CoreMinimal.h"
#include "CavrnusSpaceConnection.h"
#include "RelayModel/CavrnusRelayModel.h"
#include "RelayModel/SpacePropertyModel.h"
#include "RelayModel/CavrnusPropertyValue.h"
#include "RelayModel/PropertyId.h"

// Always last
#include "CavrnusLivePropertyUpdate.generated.h"
/**
 *
 */

namespace Cavrnus
{
	class SpacePropertyModel;
	struct PropertyId;
}

UCLASS(Abstract, BlueprintType)
class CAVRNUSCONNECTOR_API UCavrnusLivePropertyUpdate : public UObject
{

	GENERATED_BODY()

public:
	// Constructor
	UCavrnusLivePropertyUpdate();

	// Destructor
	~UCavrnusLivePropertyUpdate();

	void Initialize(Cavrnus::CavrnusRelayModel* relayModel, FCavrnusSpaceConnection spaceConn, const Cavrnus::PropertyId& propertyId);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Cancels transient operations sent to the server.", ShortToolTip = "Cancels transient operations sent to the server"))
	void Cancel();

	double lastUpdatedTimeMs;

protected:
	FCavrnusSpaceConnection SpaceConn;

	FString LiveUpdaterId;

	Cavrnus::PropertyId PropertyId;

	Cavrnus::CavrnusRelayModel* RelayModel;
};