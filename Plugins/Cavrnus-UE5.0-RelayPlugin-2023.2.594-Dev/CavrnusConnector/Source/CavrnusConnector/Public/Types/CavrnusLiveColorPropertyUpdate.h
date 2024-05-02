#pragma once

#include "CoreMinimal.h"
#include "Types/CavrnusLivePropertyUpdate.h"

// Always last
#include "CavrnusLiveColorPropertyUpdate.generated.h"
/**
 *
 */


UCLASS(BlueprintType)
class CAVRNUSCONNECTOR_API UCavrnusLiveColorPropertyUpdate : public UCavrnusLivePropertyUpdate
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusLiveColorPropertyUpdate();

	// Destructor
	~UCavrnusLiveColorPropertyUpdate();

	void Initialize(Cavrnus::CavrnusRelayModel* relayModel, FCavrnusSpaceConnection spaceConn, const FPropertyId& propertyId, FLinearColor value);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Updates the temporary value sent to the server", ShortToolTip = "Updates the temporary value sent to the server"))
	void UpdateWithNewData(FLinearColor PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Posts and finalizes the data to the server.  This object will no longer be valid to use afterwards.", ShortToolTip = "Posts and finalizes the data to the server"))
	void Finalize(FLinearColor PropertyValue);
};