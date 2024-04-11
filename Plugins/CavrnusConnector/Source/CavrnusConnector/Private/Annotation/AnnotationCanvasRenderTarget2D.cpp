// Fill out your copyright notice in the Description page of Project Settings.


#include "Annotation/AnnotationCanvasRenderTarget2D.h"
#include "Annotation/Text/TextRenderer2D.h"
#include "BatchedElements.h"
#include "Engine/Canvas.h"
#include "Engine/World.h"
#include "Annotation/Line/LineRenderer2D.h"
#include "RenderingThread.h"
#include "Annotation/Text/AnnotationTextItem.h"
#include "TextureResource.h"
#include "Materials/MaterialInstanceDynamic.h"
#include <Misc/EngineVersionComparison.h>

#define TEXT_RENDER_TARGET_RES_MULTIPLIER 1

void UAnnotationCanvasRenderTarget2D::InitResources(class UMaterialInstanceDynamic* InMaterialInstance)
{
	if (EraserRenderTarget)
	{
		UpdateResource();
		return;
	}

	if (!TextFont)
	{
		TextFont = LoadObject<
			UFont>(nullptr, TEXT("Font'/CavrnusConnector/HUD/Fonts/FuturaPT-Book_Font.FuturaPT-Book_Font'"));
	}
	MaterialInstance = InMaterialInstance;

	EraserRenderTarget = CreateCanvasRenderTarget2D(GetWorld(), UCanvasRenderTarget2D::StaticClass(),
		1024 * TEXT_RENDER_TARGET_RES_MULTIPLIER,
		768 * TEXT_RENDER_TARGET_RES_MULTIPLIER);

	LinesRenderTarget = CreateCanvasRenderTarget2D(GetWorld(), UCanvasRenderTarget2D::StaticClass(),
		1024 * TEXT_RENDER_TARGET_RES_MULTIPLIER,
		768 * TEXT_RENDER_TARGET_RES_MULTIPLIER);

	TextsRenderTarget = CreateCanvasRenderTarget2D(GetWorld(), UCanvasRenderTarget2D::StaticClass(),
		1024 * TEXT_RENDER_TARGET_RES_MULTIPLIER,
		768 * TEXT_RENDER_TARGET_RES_MULTIPLIER);

	EraserRenderTarget->ClearColor = FLinearColor(0, 0, 0, 0);
	EraserRenderTarget->UpdateResource();

	LinesRenderTarget->ClearColor = FLinearColor(0, 0, 0, 0);
	LinesRenderTarget->UpdateResource();

	TextsRenderTarget->ClearColor = FLinearColor(0, 0, 0, 0);
	TextsRenderTarget->UpdateResource();


	static const FName CanvasName(TEXT("CanvasRenderTarget2DCanvas"));
	DrawCanvas = static_cast<UCanvas*>(StaticFindObjectFast(UCanvas::StaticClass(), GetTransientPackage(), CanvasName));
	if (DrawCanvas == nullptr)
	{
		DrawCanvas = NewObject<UCanvas>(GetTransientPackage(), CanvasName);
		DrawCanvas->AddToRoot();
	}

	MaterialInstance->SetTextureParameterValue(TEXT("TextsRenderTarget"), TextsRenderTarget);
	MaterialInstance->SetTextureParameterValue(TEXT("LinesRenderTarget"), LinesRenderTarget);
	MaterialInstance->SetTextureParameterValue(TEXT("EraserRenderTarget"), EraserRenderTarget);

	UpdateResource();
}

void UAnnotationCanvasRenderTarget2D::TryRenderText(UTextRenderer2D* Text)
{
	//if (Text->Rendered) return;
	if (Text->GetColor().A == 0) // Eraser
	{
		DrawEraser(Text);
		return;
	}

	//draw eraser under the main text
	DrawEraser(Text);

	FTextureRenderTarget2DResource* TextureRenderTarget = static_cast<FTextureRenderTarget2DResource*>(
		TextsRenderTarget->GameThread_GetRenderTargetResource());

	FCanvas RenderCanvas(
		TextureRenderTarget,
		nullptr,
		FGameTime::CreateDilated(
			FApp::GetCurrentTime() - GStartTime,
			FApp::GetDeltaTime(),
			FApp::GetCurrentTime() - GStartTime,
			FApp::GetDeltaTime()),
#if UE_VERSION_OLDER_THAN(5, 3, 0)
		GetWorld()->FeatureLevel
#else
		GetWorld()->GetFeatureLevel()
#endif
	);


	DrawCanvas->Init(GetSurfaceWidth(), GetSurfaceHeight(), nullptr, &RenderCanvas);
	DrawCanvas->Update();


	FAnnotationTextItem TextItem = BuildTextAnnotationRenderData(Text);
	//	DrawCanvas->K2_DrawText(TextFont, Text->GetText(), Text->GetPosition(), FVector2D(1,1), Text->GetColor());
	DrawCanvas->DrawItem(TextItem);


	MaterialInstance->SetTextureParameterValue(TEXT("TextsRenderTarget"), TextsRenderTarget);
	// Clean up and flush the rendering canvas.
	DrawCanvas->Canvas = nullptr;

	if (TextureRenderTarget)
	{
		RenderCanvas.Flush_GameThread();
	}

	TextsRenderTarget->UpdateResourceImmediate(false);

	Text->Rendered = true;
}

void UAnnotationCanvasRenderTarget2D::TryRenderLine(ULineRenderer2D* Line)
{
	//if (Line->Rendered) return;
	if (Line->GetColor().A == 0) // Eraser
	{
		DrawEraser(Line);
		return;
	}

	//draw eraser under the main line
	DrawEraser(Line);

	FTextureRenderTarget2DResource* TextureRenderTarget = static_cast<FTextureRenderTarget2DResource*>(
		LinesRenderTarget->GameThread_GetRenderTargetResource());

	FCanvas RenderCanvas(
		TextureRenderTarget,
		nullptr,
		FGameTime::CreateDilated(
			FApp::GetCurrentTime() - GStartTime,
			FApp::GetDeltaTime(),
			FApp::GetCurrentTime() - GStartTime,
			FApp::GetDeltaTime()),
#if UE_VERSION_OLDER_THAN(5, 3, 0)
		GetWorld()->FeatureLevel
#else
		GetWorld()->GetFeatureLevel()
#endif
	);

	DrawCanvas->Init(GetSurfaceWidth(), GetSurfaceHeight(), nullptr, &RenderCanvas);
	DrawCanvas->Update();

	FBatchedElements* BatchedElements = DrawCanvas->Canvas->GetBatchedElements(FCanvas::ET_Triangle);
	const FHitProxyId HitProxyId = DrawCanvas->Canvas->GetHitProxyId();
	const TArray<FVector2D>& Points = Line->GetPoints();

	for (int32 Index = 0; Index < Points.Num() - 1; Index++)
	{
		BatchedElements->AddTranslucentLine(
			FVector(Points[Index].X, Points[Index].Y, 0.f),
			FVector(Points[Index + 1].X, Points[Index + 1].Y, 0.f),
			Line->SRGBToLinear(Line->GetColor()), HitProxyId, Line->GetThickness()
		);
	}

	MaterialInstance->SetTextureParameterValue(TEXT("LinesRenderTarget"), LinesRenderTarget);
	// Clean up and flush the rendering canvas.
	DrawCanvas->Canvas = nullptr;

	if (TextureRenderTarget)
	{
		RenderCanvas.Flush_GameThread();
	}

	LinesRenderTarget->UpdateResourceImmediate(false);

	Line->Rendered = true;
}


void UAnnotationCanvasRenderTarget2D::RenderAnnotation(class IAnnotation* Annotation)
{
	if (ULineRenderer2D* Line = Cast<ULineRenderer2D>(Annotation))
	{
		TryRenderLine(Line);
	}
	if (UTextRenderer2D* Text = Cast<UTextRenderer2D>(Annotation))
	{
		TryRenderText(Text);
	}

	UpdateResourceImmediate(false);
}

void UAnnotationCanvasRenderTarget2D::ClearAnnotation(class IAnnotation* Annotation)
{
	Annotation->Color.A = 0;
	DrawEraser(Cast<UObject>(Annotation));
}


void UAnnotationCanvasRenderTarget2D::Cleanup()
{
	FlushRenderingCommands();
	CleanupSpecific(EraserRenderTarget);
	CleanupSpecific(LinesRenderTarget);
	CleanupSpecific(TextsRenderTarget);
}

uint32 UAnnotationCanvasRenderTarget2D::CalcTextureMemorySizeEnum(ETextureMipCount Enum) const
{
	// Calculate size based on format.  All mips are resident on render targets so we always return the same value.
	EPixelFormat Format = GetFormat();
	int32 BlockSizeX = GPixelFormats[Format].BlockSizeX;
	int32 BlockSizeY = GPixelFormats[Format].BlockSizeY;
	int32 BlockBytes = GPixelFormats[Format].BlockBytes;
	int32 NumBlocksX = (SizeX + BlockSizeX - 1) / BlockSizeX;
	int32 NumBlocksY = (SizeY + BlockSizeY - 1) / BlockSizeY;
	int32 NumBytes = NumBlocksX * NumBlocksY * BlockBytes;
	return NumBytes;
}

void UAnnotationCanvasRenderTarget2D::SetCavrnusWorld(UObject* WorldContext)
{
	World = WorldContext->GetWorld();
}

FAnnotationTextItem UAnnotationCanvasRenderTarget2D::BuildTextAnnotationRenderData(UTextRenderer2D* Text)
{
	TextFont->LegacyFontSize = Text->GetSize() * TEXT_RENDER_TARGET_RES_MULTIPLIER;
	const FString FormattedText = Text->GetFormattedText(DrawCanvas, GetSurfaceWidth(), TextFont);
	FAnnotationTextItem TextItem(Text->GetPosition(), FText::FromString(FormattedText), TextFont, (Text->GetColor()));
	TextItem.HorizSpacingAdjust = 0.f;
	TextItem.ShadowColor = FLinearColor::Black;
	TextItem.ShadowOffset = FVector2D::UnitVector;
	TextItem.bCentreX = false;
	TextItem.bCentreY = false;
	TextItem.Scale = Text->Scale;
	TextItem.bOutlined = false;
	TextItem.OutlineColor = FLinearColor::Black;
	TextItem.BlendMode = SE_BLEND_TranslucentAlphaOnly;
	return TextItem;
}

void UAnnotationCanvasRenderTarget2D::DrawEraser(UObject* AnnoObject)
{
	FTextureRenderTarget2DResource* TextureRenderTarget = static_cast<FTextureRenderTarget2DResource*>(
		EraserRenderTarget->GameThread_GetRenderTargetResource());

	FCanvas RenderCanvas(
		TextureRenderTarget,
		nullptr,
		FGameTime::CreateDilated(
			FApp::GetCurrentTime() - GStartTime,
			FApp::GetDeltaTime(),
			FApp::GetCurrentTime() - GStartTime,
			FApp::GetDeltaTime()),
#if UE_VERSION_OLDER_THAN(5, 3, 0)
		GetWorld()->FeatureLevel
#else
		GetWorld()->GetFeatureLevel()
#endif
	);

	DrawCanvas->Init(GetSurfaceWidth(), GetSurfaceHeight(), nullptr, &RenderCanvas);
	DrawCanvas->Update();


	if (UTextRenderer2D* Text = Cast<UTextRenderer2D>(AnnoObject))
	{
		FAnnotationTextItem TextItem = BuildTextAnnotationRenderData(Text);
		FLinearColor Color = Text->GetColor();
		if (Text->GetColor().A == 0)
		{
			Color.A = 1.f;
			Color.B = 0.f;
		}
		else
		{
			Color.A = 1.f;
			Color.B = 1.f;
		}
		TextItem.SetColor(Color);
		DrawCanvas->DrawItem(TextItem);
	}
	else if (ULineRenderer2D* Line = Cast<ULineRenderer2D>(AnnoObject))
	{
		float Thickness = Line->GetThickness();
		FLinearColor Color = Line->GetColor();
		if (Line->GetColor().A == 0)
		{
			Thickness *= 2;
			Color.A = 1.f;
			Color.B = 0.f;
		}
		else
		{
			Color.A = 1.f;
			Color.B = 1.f;
		}

		FBatchedElements* BatchedElements = DrawCanvas->Canvas->GetBatchedElements(FCanvas::ET_Triangle);
		const FHitProxyId HitProxyId = DrawCanvas->Canvas->GetHitProxyId();
		const TArray<FVector2D>& Points = Line->GetPoints();

		for (int32 Index = 0; Index < Points.Num() - 1; Index++)
		{
			BatchedElements->AddTranslucentLine(
				FVector(Points[Index].X, Points[Index].Y, 0.f),
				FVector(Points[Index + 1].X, Points[Index + 1].Y, 0.f),
				Color, HitProxyId, Thickness
			);
		}
	}

	MaterialInstance->SetTextureParameterValue(TEXT("EraserRenderTarget"), EraserRenderTarget);
	// Clean up and flush the rendering canvas.
	DrawCanvas->Canvas = nullptr;

	if (TextureRenderTarget)
	{
		RenderCanvas.Flush_GameThread();
	}

	EraserRenderTarget->UpdateResourceImmediate(false);
}

void UAnnotationCanvasRenderTarget2D::CleanupSpecific(UCanvasRenderTarget2D* RenderTarget)
{
	FTextureRenderTarget2DResource* TextureRenderTarget = static_cast<FTextureRenderTarget2DResource*>(RenderTarget->
		GameThread_GetRenderTargetResource());

	FCanvas RenderCanvas(
		TextureRenderTarget,
		nullptr,
		FGameTime::CreateDilated(
			FApp::GetCurrentTime() - GStartTime,
			FApp::GetDeltaTime(),
			FApp::GetCurrentTime() - GStartTime,
			FApp::GetDeltaTime()),
#if UE_VERSION_OLDER_THAN(5, 3, 0)
		GetWorld()->FeatureLevel
#else
		GetWorld()->GetFeatureLevel()
#endif
	);

	//cleanup render target
	if (TextureRenderTarget)
	{
		ENQUEUE_RENDER_COMMAND(CanvasRenderTargetMakeCurrentCommand)(
			[TextureRenderTarget](FRHICommandListImmediate& RHICmdList)
			{
				RHICmdList.Transition(FRHITransitionInfo(TextureRenderTarget->GetRenderTargetTexture(),
				ERHIAccess::Unknown, ERHIAccess::RTV));
		const FRHIRenderPassInfo RPInfo(TextureRenderTarget->GetRenderTargetTexture(),
			ERenderTargetActions::Clear_Store);
		RHICmdList.BeginRenderPass(RPInfo, TEXT("ClearUCanvas"));
		RHICmdList.EndRenderPass();
			});

		RenderCanvas.Flush_GameThread();
	}

	RenderTarget->UpdateResourceImmediate();
}
