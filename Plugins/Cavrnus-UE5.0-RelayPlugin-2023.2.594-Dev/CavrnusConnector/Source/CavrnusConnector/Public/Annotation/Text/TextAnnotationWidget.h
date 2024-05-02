// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TextAnnotationWidget.generated.h"

/**
 *
 */
UCLASS()
class CAVRNUSCONNECTOR_API UTextAnnotationWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (bindWidgetOptional))
	class UMultiLineEditableText* AnnotationTextBox;

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (bindWidgetOptional))
	class UScrollBox* TextScrollBox;

public:
	virtual void NativeConstruct() override;

	void SetAnnotationText(const FString& InText);
	void SetAnnotationTextColor(const FLinearColor& InColor);
};
