// Fill out your copyright notice in the Description page of Project Settings.


#include "Annotation/Line/LineRenderer.h"

FLinearColor ILineRenderer::SRGBToLinear(const FLinearColor& InSRGB)
{
	FLinearColor RGB = InSRGB;

	if (RGB.A <= 0.0f)
	{
		RGB.A = 0.0f;
	}
	else if (RGB.A >= 1.0f)
	{
		RGB.A = 1.0f;
	}
	else if (RGB.A < 0.04045f)
	{
		RGB.A /= 12.92f;
	}
	else
	{
		RGB.A = FMath::Pow((InSRGB.A + 0.055f) / 1.055f, 2.4f);
	}

	if (RGB.R <= 0.0f)
	{
		RGB.R = 0.0f;
	}
	else if (RGB.R >= 1.0f)
	{
		RGB.R = 1.0f;
	}
	else if (RGB.R < 0.04045f)
	{
		RGB.R /= 12.92f;
	}
	else
	{
		RGB.R = FMath::Pow((InSRGB.R + 0.055f) / 1.055f, 2.4f);
	}

	if (RGB.G <= 0.0f)
	{
		RGB.G = 0.0f;
	}
	else if (RGB.G >= 1.0f)
	{
		RGB.G = 1.0f;
	}
	else if (RGB.G < 0.04045f)
	{
		RGB.G /= 12.92f;
	}
	else
	{
		RGB.G = FMath::Pow((InSRGB.G + 0.055f) / 1.055f, 2.4f);
	}

	if (RGB.B <= 0.0f)
	{
		RGB.B = 0.0f;
	}
	else if (RGB.B >= 1.0f)
	{
		RGB.B = 1.0f;
	}
	else if (RGB.B < 0.04045f)
	{
		RGB.B /= 12.92f;
	}
	else
	{
		RGB.B = FMath::Pow((InSRGB.B + 0.055f) / 1.055f, 2.4f);
	}

	return RGB;
}
