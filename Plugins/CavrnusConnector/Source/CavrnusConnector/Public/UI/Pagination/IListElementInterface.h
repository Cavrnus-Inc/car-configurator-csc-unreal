#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IListElementInterface.generated.h"

class UUserWidget;

UINTERFACE(MinimalAPI)
class UListElementInterface : public UInterface
{
 GENERATED_BODY()
};

class IListElementInterface
{
 GENERATED_BODY()

public:
 virtual void EntryBuilt(UUserWidget* Element) = 0;
};