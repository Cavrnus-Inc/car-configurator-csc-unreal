// Fill out your copyright notice in the Description page of Project Settings.

#include "Annotation/Text/TextAnnotationWidget.h"
#include "Components/MultiLineEditableText.h"

void UTextAnnotationWidget::NativeConstruct()
{
}

void UTextAnnotationWidget::SetAnnotationText(const FString& InText)
{
	if (AnnotationTextBox)
	{
		AnnotationTextBox->SetText(FText::FromString(InText));
	}
}

void UTextAnnotationWidget::SetAnnotationTextColor(const FLinearColor& InColor)
{
	if (AnnotationTextBox)
	{
		FTextBlockStyle Style = AnnotationTextBox->WidgetStyle;
		Style.ColorAndOpacity = FSlateColor(InColor);
		//AnnotationTextBox->SetWidgetStyle(Style);
	}
}
