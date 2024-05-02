// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/NoMesh/NoMeshActionsWidget.h"
#include "PDFActionsWidget.generated.h"

/**
 *
 */
UCLASS()
class CAVRNUSCONNECTOR_API UPDFActionsWidget : public UNoMeshActionsWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UButton* PrevPage;

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UButton* NextPage;

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UTextBlock* PageCountText;

	int32 Pages;
	int32 CurrentPage;

public:
	virtual void NativeConstruct() override;
	void NativeOnInitialized() override;

	void SetPagesCount(int32 Count);
	void SetCurrentPage(int32 Page);

protected:
	UFUNCTION()
	void PrevPageClicked();

	UFUNCTION()
	void NextPageClicked();
};
