#pragma once

#include "CoreMinimal.h"
#include "Types/CavrnusSpaceConnection.h"
#include "RelayModel/CavrnusRelayModel.h"
#include "RelayModel/SpacePropertyModel.h"
#include "Types/PropertyId.h"
#include "RelayModel/CavrnusVirtualPropertyUpdate.h"

// Always last
#include "CavrnusLivePropertyUpdate.generated.h"
/**
 *
 */

namespace Cavrnus
{
	class SpacePropertyModel;
}

struct FPropertyId;

UCLASS(Abstract, BlueprintType)
class CAVRNUSCONNECTOR_API UCavrnusLivePropertyUpdate : public UObject
{

	GENERATED_BODY()

public:
	// Constructor
	UCavrnusLivePropertyUpdate();

	// Destructor
	~UCavrnusLivePropertyUpdate();

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Cancels transient operations sent to the server.", ShortToolTip = "Cancels transient operations sent to the server"))
	void Cancel();

	double GetLastUpdatedTimeSeconds();

protected:

	Cavrnus::CavrnusVirtualPropertyUpdate livePropertyUpdate;
};