#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Types/CavrnusBinding.h"
#include "RelayModel/CavrnusPropertyValue.h"
#include "IPropertySyncInterface.generated.h"

UINTERFACE(BlueprintType, meta = (CannotImplementInterfaceInBlueprint))
class UPropertySyncInterface : public UInterface
{
	GENERATED_BODY()
};

class CAVRNUSCONNECTOR_API IPropertySyncInterface
{
	GENERATED_BODY()

public:

	virtual Cavrnus::FPropertyValue GetPropertyValue() = 0;
	virtual void SetPropertyValue(Cavrnus::FPropertyValue value) = 0;
};