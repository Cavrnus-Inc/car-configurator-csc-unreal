#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UI/CavrnusSpaceListWidget.h"
#include "SpaceListOption.generated.h"

UCLASS(Abstract)
class CAVRNUSCONNECTOR_API USpaceListOption : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void Setup(const FCavrnusSpaceInfo& InSpaceInfo, const FSpaceSelectedEvent& InOnSelect);

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	UTextBlock* SpaceNameTextBlock;
	
	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	UButton* Button;

	UFUNCTION()
	void ButtonSpaceSelected();

private:
	FCavrnusSpaceInfo SpaceInfo;
	FSpaceSelectedEvent OnSelect;
};