// // Copyright (c), Cavrnus. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "CavrnusMaximizedUser.h"
#include "CavrnusUserWidget.h"
#include "UI/MinimalMenu/SidebarMenu/SidebarMenuBase.h"
#include "CavrnusUserMenu.generated.h"

class UScrollBox;

/**
 * 
 */
UCLASS(Abstract)
class CAVRNUSCONNECTOR_API UCavrnusUserMenu : public USidebarMenuBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	UScrollBox* ScrollBox;

	UPROPERTY(EditAnywhere, Category = "Cavrnus")
	TSubclassOf<UCavrnusUserWidget> WidgetEntry;

	UPROPERTY(EditAnywhere, Category = "Cavrnus")
	TSubclassOf<UCavrnusMaximizedUser> MaximizedUserEntry;

private:
	TMap<FString, UCavrnusUserWidget*> Entries;

	virtual void NativeConstruct() override;
	
	void MaximizeUserSelected(const FCavrnusUser& MaximizedUser);
};