// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Annotation/IAnnotation.h"
#include "LineRenderer.generated.h"


UINTERFACE()
class CAVRNUSCONNECTOR_API ULineRenderer : public UAnnotation
{
	GENERATED_BODY()
};

/**
 * line annotation interface
 */
class CAVRNUSCONNECTOR_API ILineRenderer : public IAnnotation
{
	GENERATED_BODY()

public:

	/**
	 * Converts SRGB color to Linear
	 * @param InSRGB -- input SRGB color
	 * @returns converted linear color
	 */
	FLinearColor SRGBToLinear(const FLinearColor& InSRGB);

	virtual void DestroyAnnotation() override
	{
	}

};
