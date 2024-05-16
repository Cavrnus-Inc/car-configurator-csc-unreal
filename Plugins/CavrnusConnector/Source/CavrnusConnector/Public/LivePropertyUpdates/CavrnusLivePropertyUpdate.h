#pragma once

#include "CoreMinimal.h"
#include "Types/CavrnusSpaceConnection.h"
#include "Types/PropertyId.h"

// Always last
#include "CavrnusLivePropertyUpdate.generated.h"
/**
 *
 */

struct FPropertyId;

namespace Cavrnus
{
	class CavrnusVirtualPropertyUpdate;
}

UCLASS(Abstract, BlueprintType)
class CAVRNUSCONNECTOR_API UCavrnusLivePropertyUpdate : public UObject
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusLivePropertyUpdate();

	// Destructor
	virtual ~UCavrnusLivePropertyUpdate();

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Cancels transient operations sent to the server.", ShortToolTip = "Cancels transient operations sent to the server"))
	void Cancel();

	double GetLastUpdatedTimeSeconds();

protected:

	Cavrnus::CavrnusVirtualPropertyUpdate* livePropertyUpdate = nullptr;
};