// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BoardObject.h"
#include "PDFBoard.generated.h"

/**
 *
 */
UCLASS()
class CAVRNUSCONNECTOR_API APDFBoard : public ABoardObject
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	TArray<class UTexture2D*> Pages;

	UPROPERTY()
	class UPDFActionsWidget* PDFAction;

public:
	APDFBoard(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus")
	int32 RequestedPage = 0;

	virtual void CreateContent(const FString& ContentPath) override;

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	void ChangeToRequestedPage();

	virtual bool CanBeRendered(class IAnnotation* Anno) const;

	void OnPDFConverted(class UPDF* Asset);

private:
	virtual void OnActionReceived(FString Action) override;

private:
	FString DecryptedContentPath;
	bool PdfConverted = false;
	int32 CurrentPage = 0;
};
