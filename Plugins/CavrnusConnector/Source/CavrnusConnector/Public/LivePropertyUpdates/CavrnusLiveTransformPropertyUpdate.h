#pragma once

#include "CoreMinimal.h"
#include "LivePropertyUpdates/CavrnusLivePropertyUpdate.h"

// Always last
#include "CavrnusLiveTransformPropertyUpdate.generated.h"
/**
 *
 */

namespace Cavrnus
{
	class CavrnusRelayModel;
}

UCLASS(BlueprintType)
class CAVRNUSCONNECTOR_API UCavrnusLiveTransformPropertyUpdate : public UCavrnusLivePropertyUpdate
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusLiveTransformPropertyUpdate();

	// Destructor
	virtual ~UCavrnusLiveTransformPropertyUpdate();

	void Initialize(Cavrnus::CavrnusRelayModel* relayModel, FCavrnusSpaceConnection spaceConn, const FPropertyId& propertyId, FTransform value);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Updates the temporary value sent to the server", ShortToolTip = "Updates the temporary value sent to the server"))
	void UpdateWithNewData(FTransform PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Posts and finalizes the data to the server.  This object will no longer be valid to use afterwards.", ShortToolTip = "Posts and finalizes the data to the server"))
	void Finalize(FTransform PropertyValue);
};