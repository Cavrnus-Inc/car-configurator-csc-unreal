// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/NoMesh/PDFActionsWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"

void UPDFActionsWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

void UPDFActionsWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (PrevPage)
	{
		PrevPage->OnReleased.AddDynamic(this, &UPDFActionsWidget::PrevPageClicked);
	}

	if (NextPage)
	{
		NextPage->OnReleased.AddDynamic(this, &UPDFActionsWidget::NextPageClicked);
	}
}

void UPDFActionsWidget::SetPagesCount(int32 Count)
{
	Pages = Count;
	PageCountText->SetText(FText::FromString(FString::FromInt(CurrentPage) + TEXT(" / ") + FString::FromInt(Pages)));
}

void UPDFActionsWidget::SetCurrentPage(int32 Page)
{
	CurrentPage = Page;
	PageCountText->SetText(FText::FromString(FString::FromInt(CurrentPage) + TEXT(" / ") + FString::FromInt(Pages)));
}

void UPDFActionsWidget::PrevPageClicked()
{
	Action.ExecuteIfBound(TEXT("OpenPreviousPage"));
	CurrentPage = FMath::Clamp(CurrentPage - 1, 1, Pages);
}

void UPDFActionsWidget::NextPageClicked()
{
	Action.ExecuteIfBound(TEXT("OpenNextPage"));
	CurrentPage = FMath::Clamp(CurrentPage + 1, 1, Pages);
}
