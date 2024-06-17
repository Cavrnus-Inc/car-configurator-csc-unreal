// Copyright(c) Cavrnus. All rights reserved.
#pragma once

#include "CoreMinimal.h"
#include <Blueprint/UserWidget.h>

#include "Components/EditableTextBox.h"
#include "Pagination/Pagination.h"
#include "Types/CavrnusSpaceInfo.h"
#include "CavrnusSpaceListWidget.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FOnCavrnusSpaceSelected, FString);
typedef TFunction<void(FCavrnusSpaceInfo)> FSpaceSelectedEvent;

UCLASS(Abstract)
class CAVRNUSCONNECTOR_API UCavrnusSpaceListWidget : public UUserWidget
{
	GENERATED_BODY()

	class FSpaceListOption : public IListElementInterface
	{
	public:
		FSpaceListOption(const FCavrnusSpaceInfo& SpaceInfo, const FSpaceSelectedEvent& OnSelectSpace);

		virtual void EntryBuilt(UUserWidget* Element) override;

		FCavrnusSpaceInfo Content;
		FSpaceSelectedEvent OnSelect;
	};

protected:
	virtual void NativeConstruct() override;

public:
	UFUNCTION(BlueprintCallable, Category = "SpaceList")
	void Setup();

	UFUNCTION()
	void Search(const FText& SearchValue);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SpaceList")
	TSubclassOf<UUserWidget> PaginationItemWidget;

	UPROPERTY(BlueprintReadOnly, Category = "SpaceList", meta = (BindWidget))
	UPagination* SpacePagination;

	UPROPERTY(EditAnywhere, Category = "SpaceList", meta = (BindWidget))
	UEditableTextBox* SearchTextBox;

	FOnCavrnusSpaceSelected OnCavrnusSpaceSelected;

private:
	TArray<FCavrnusSpaceInfo> AllSpaces;
	TArray<FCavrnusSpaceInfo> CurrentDisplayedSpaces;

	void UpdatePagination(TArray<FCavrnusSpaceInfo>& Spaces);
};