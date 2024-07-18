// // Copyright (c), Cavrnus. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "MinimalSidebarButton.h"
#include "UI/CavrnusBaseUserWidget.h"
#include "MinimalSideBarMenu.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FMenuData
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Menu")
	FString Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Menu")
	TSubclassOf<UUserWidget> TargetMenu;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Menu")
	UTexture2D* Icon;
};

UCLASS()
class CAVRNUSCONNECTOR_API UMinimalSideBarMenu : public UCavrnusBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cavrnus")
	TSubclassOf<UMinimalSidebarButton> ButtonWidgetClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cavrnus")
	TArray<FMenuData> MenuData;
};
