#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "../Types/CavrnusBinding.h"
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
	virtual void DefineDefaultPropertyValue() = 0;
	virtual FCavrnusBinding BindPropertyValue() = 0;
	virtual void SendPropertyChanges() = 0;
};