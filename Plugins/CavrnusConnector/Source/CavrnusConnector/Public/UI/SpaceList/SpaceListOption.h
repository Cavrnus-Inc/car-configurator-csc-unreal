#pragma once

#include "CoreMinimal.h"
#include "Blueprint/AsyncTaskDownloadImage.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "UI/CavrnusSpaceListWidget.h"
#include "SpaceListOption.generated.h"

UCLASS(Abstract)
class CAVRNUSCONNECTOR_API USpaceListOption : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void Setup(const FCavrnusSpaceInfo& InSpaceInfo, const FSpaceSelectedEvent& InOnSelect);
	
	UFUNCTION()
	void OnGetThumbnail(UTexture2DDynamic* Texture);

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	UImage* ThumbnailDefault;
	
	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	UImage* Thumbnail;
	
	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	UTextBlock* SpaceNameTextBlock;
	
	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	UButton* Button;

	UPROPERTY()
	UAsyncTaskDownloadImage* DownloadTask;

	UFUNCTION()
	void ButtonSpaceSelected();

private:
	FCavrnusSpaceInfo SpaceInfo;
	FSpaceSelectedEvent OnSelect;
};