// Fill out your copyright notice in the Description page of Project Settings.


#include "Annotation/Text/AnnotationTextItem.h"
#include <Materials/Material.h>
#include "Engine/Engine.h"
#include "Misc/EngineVersionComparison.h"

void FAnnotationTextItem::Draw(FCanvas* InCanvas)
{
	//SCOPE_CYCLE_COUNTER(STAT_Canvas_TextItemTime);

	if (InCanvas == nullptr || !HasValidText())
	{
		return;
	}

	bool bHasShadow = FontRenderInfo.bEnableShadow;
	if (bHasShadow && ShadowOffset.SizeSquared() == 0.0f)
	{
		// EnableShadow will set a default ShadowOffset value
		EnableShadow(FLinearColor::Black);
	}
	BlendMode = /*SE_BLEND_AlphaBlend;*/ GetTextBlendMode(bHasShadow);
	if (InCanvas->IsUsingInternalTexture())
	{
		BlendMode = SE_BLEND_TranslucentAlphaOnlyWriteAlpha;
	}

	const float DPIScale = InCanvas->GetDPIScale();

	FVector2D DrawPos(Position.X * DPIScale, Position.Y * DPIScale);

	// If we are centering the string or we want to fix stereoscopic rendering issues we need to measure the string
	if ((bCentreX || bCentreY) || (!bDontCorrectStereoscopic))
	{
		const FVector2D MeasuredTextSize = GetTextSize(DPIScale);

		// Calculate the offset if we are centering
		if (bCentreX || bCentreY)
		{
			// Note we drop the fraction after the length divide or we can end up with coords on 1/2 pixel boundaries
			if (bCentreX)
			{
				DrawPos.X -= static_cast<int>(MeasuredTextSize.X / 2);
			}
			if (bCentreY)
			{
				DrawPos.Y -= static_cast<int>(MeasuredTextSize.Y / 2);
			}
		}

		// Check if we want to correct the stereo3d issues - if we do, render the correction now
		const bool CorrectStereo = !bDontCorrectStereoscopic && GEngine->IsStereoscopic3D();
		if (CorrectStereo)
		{
			const FVector2D StereoOutlineBoxSize(2.0f, 2.0f);
			TileItem.MaterialRenderProxy = GEngine->RemoveSurfaceMaterial->GetRenderProxy();
			TileItem.Position = DrawPos - StereoOutlineBoxSize;
			const FVector2D CorrectionSize = MeasuredTextSize + StereoOutlineBoxSize + StereoOutlineBoxSize;
			TileItem.Size = CorrectionSize;
			TileItem.bFreezeTime = true;
			TileItem.Draw(InCanvas);
		}
	}

	FLinearColor DrawColor;
	BatchedElements = nullptr;

	// If we have a shadow - draw it now
	if (bHasShadow)
	{
		DrawColor = ShadowColor;
		// Copy the Alpha from the shadow otherwise if we fade the text the shadow wont fade - which is almost certainly not what we will want.
		DrawColor.A = Color.A;
		DrawColor.A *= InCanvas->AlphaModulate;
#if UE_VERSION_OLDER_THAN (5,1,0)
		DrawStringInternal(InCanvas, DrawPos + ShadowOffset * DPIScale, DrawColor);
#else
		TArrayView<FTextEffect> ShadowTextEffects;
		DrawStringInternal(InCanvas, DrawPos + ShadowOffset * DPIScale, DrawColor, ShadowTextEffects);
#endif
	}

	if (bOutlined)
	{
		DrawColor = OutlineColor;
		DrawColor.A *= InCanvas->AlphaModulate;
#if UE_VERSION_OLDER_THAN (5,1,0)
		DrawStringInternal(InCanvas, DrawPos + FVector2D(-1.0f, -1.0f), DrawColor);
		DrawStringInternal(InCanvas, DrawPos + FVector2D(-1.0f, 1.0f), DrawColor);
		DrawStringInternal(InCanvas, DrawPos + FVector2D(1.0f, 1.0f), DrawColor);
		DrawStringInternal(InCanvas, DrawPos + FVector2D(1.0f, -1.0f), DrawColor);
#else
		TArrayView<FTextEffect> OutlineTextEffects;
		DrawStringInternal(InCanvas, DrawPos + FVector2D(-1.0f, -1.0f), DrawColor, OutlineTextEffects);
		DrawStringInternal(InCanvas, DrawPos + FVector2D(-1.0f, 1.0f), DrawColor, OutlineTextEffects);
		DrawStringInternal(InCanvas, DrawPos + FVector2D(1.0f, 1.0f), DrawColor, OutlineTextEffects);
		DrawStringInternal(InCanvas, DrawPos + FVector2D(1.0f, -1.0f), DrawColor, OutlineTextEffects);
#endif
	}

	DrawColor = Color;
	DrawColor.A *= InCanvas->AlphaModulate;
#if UE_VERSION_OLDER_THAN (5,1,0)
	DrawStringInternal(InCanvas, DrawPos, DrawColor);
#else
	TArrayView<FTextEffect> TextEffects;
	DrawStringInternal(InCanvas, DrawPos, DrawColor, TextEffects);
#endif
}
