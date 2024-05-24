#pragma once

#include "CoreMinimal.h"
#include "IListElementInterface.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "Pagination.generated.h"

UCLASS(Abstract)
class UPagination : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void Setup(TSubclassOf<UUserWidget>* InItemWidget);

	UPROPERTY(BlueprintReadOnly, Category = "PaginationSetup", meta = (BindWidget))
	UButton* ButtonPrevious;

	UPROPERTY(BlueprintReadOnly, Category = "PaginationSetup", meta = (BindWidget))
	UButton* ButtonNext;

	UPROPERTY(BlueprintReadOnly, Category = "PaginationSetup", meta = (BindWidget))
	UTextBlock* TextBlockCurrentPage;

	UPROPERTY(EditAnywhere, Category = "PaginationSetup")
	UWidget* NoResultsContainer;

	UPROPERTY(EditAnywhere, Category = "PaginationSetup")
	UWidget* ItemContainer;

	UPROPERTY(EditAnywhere, Category = "SpaceList", meta = (BindWidget))
	UPanelWidget* FooterContainer;

	void NewPagination(TSubclassOf<UUserWidget>* InItemWidget, const TArray<IListElementInterface*>& InDisplayContent);
	void ResetPagination();

	void LoadPage(int Page);

	UFUNCTION()
	void Next();

	UFUNCTION()
	void Previous();

	UPROPERTY(EditAnywhere, Category = "PaginationSetup")
	int ItemsPerPage = 2;

private:
	TMap<UUserWidget*, IListElementInterface*> CurrentItems;

	TSubclassOf<UUserWidget>* ItemWidget;
	
	TArray<IListElementInterface*> Content;
	
	int CurrentPage = 0;
	int TotalPages = 0;
};