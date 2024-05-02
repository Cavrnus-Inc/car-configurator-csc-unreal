// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TextRenderer.h"
#include "TextRenderer2D.generated.h"

/**
 * 2D text annotation
 */
UCLASS(Blueprintable)
class CAVRNUSCONNECTOR_API UTextRenderer2D : public UObject, public ITextRenderer
{
	GENERATED_BODY()

	FVector2D Position; /**< annotation position */
	float Size; /**< text size */
	int Height; /**< annotation height */
	int Width; /**< annotation width */
	FString Text;

public:
	UTextRenderer2D();

	FVector2D GetPosition() const { return Position; }
	float GetSize() const { return Size; }
	FString GetText() const { return Text; }
	FLinearColor GetColor() const { return Color; }

	void GetTextLenght(int& OutWidth, int& OutHeight) const
	{
		OutWidth = Width;
		OutHeight = Height;
	}

	void SetPosition(const FVector2D& Anchor, float CanvasWidth, float CanvasHeight);
	void SetPosition(const FVector2D& NewPosition);
	void SetTextSize(const float InSize);

	/**
	 * Format annotation text to match canvas bounds
	 * @param Canvas -- render canvas to match
	 * @param RenderTargetWidth -- render target width
	 * @param TextFont -- text font
	 */
	FString GetFormattedText(class UCanvas* Canvas, float RenderTargetWidth, class UFont* TextFont);
	virtual void SetAnnotationText(const FString& InText) override;
	virtual void SetAnnotationTextColor(const FLinearColor& InColor) override;

	virtual void DestroyAnnotation() override
	{
	}
};
