// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CanvasItem.h"
#include "CanvasTypes.h"

/**
 * Text annotation canvas text item to render on canvas
 */
class CAVRNUSCONNECTOR_API FAnnotationTextItem : public FCanvasTextItem
{
public:
	FAnnotationTextItem(const FVector2D& InPosition, const FText& InText, const UFont* InFont,
		const FLinearColor& InColor)
		: FCanvasTextItem(InPosition, InText, InFont, InColor)
	{
		BlendMode = SE_BLEND_TranslucentAlphaOnly;
	}

	virtual void Draw(FCanvas* InCanvas) override;
};
