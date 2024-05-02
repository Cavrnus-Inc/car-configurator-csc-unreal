// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Annotation/IAnnotation.h"
#include "TextRenderer.generated.h"
/**
 *
 */

UINTERFACE()
class CAVRNUSCONNECTOR_API UTextRenderer : public UAnnotation
{
	GENERATED_BODY()
};

/**
 * Text annotation interface
 */
class CAVRNUSCONNECTOR_API ITextRenderer : public IAnnotation
{
public:
	GENERATED_BODY()
	virtual void DestroyAnnotation() override
	{
	}

	virtual void SetAnnotationText(const FString& InText)
	{
	}

	virtual void SetAnnotationTextColor(const FLinearColor& InColor)
	{
	}
};
