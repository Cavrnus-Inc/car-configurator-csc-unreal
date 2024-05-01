#pragma once

#include "CoreMinimal.h"
#include "Types/CavrnusLivePropertyUpdate.h"

// Always last
#include "CavrnusLiveVectorPropertyUpdate.generated.h"
/**
 *
 */


UCLASS(BlueprintType)
class CAVRNUSCONNECTOR_API UCavrnusLiveVectorPropertyUpdate : public UCavrnusLivePropertyUpdate
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusLiveVectorPropertyUpdate();

	// Destructor
	~UCavrnusLiveVectorPropertyUpdate();

	void Initialize(Cavrnus::CavrnusRelayModel* relayModel, FCavrnusSpaceConnection spaceConn, const FPropertyId& propertyId, FVector value);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Updates the temporary value sent to the server", ShortToolTip = "Updates the temporary value sent to the server"))
	void UpdateWithNewData(FVector PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Posts and finalizes the data to the server.  This object will no longer be valid to use afterwards.", ShortToolTip = "Posts and finalizes the data to the server"))
	void Finalize(FVector PropertyValue);
};