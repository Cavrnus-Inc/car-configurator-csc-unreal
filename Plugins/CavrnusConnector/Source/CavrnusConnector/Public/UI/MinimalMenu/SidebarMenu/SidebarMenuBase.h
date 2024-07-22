// // Copyright (c), Cavrnus. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UI/CavrnusBaseUserWidget.h"
#include "UI/UserMenu/CavrnusUserWidget.h"
#include "SidebarMenuBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSecondaryWidgetRequested, UUserWidget*, SecondaryWidget, FString, MenuName);
/**
 * 
 */
UCLASS(Abstract)
class CAVRNUSCONNECTOR_API USidebarMenuBase : public UCavrnusBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, Category = "Cavrnus|SideBarMenuBase")
	FSecondaryWidgetRequested SecondaryWidgetRequested;
};