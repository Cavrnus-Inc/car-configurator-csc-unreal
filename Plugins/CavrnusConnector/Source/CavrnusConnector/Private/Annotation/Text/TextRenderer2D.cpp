// Fill out your copyright notice in the Description page of Project Settings.


#include "Annotation/Text/TextRenderer2D.h"

#include "Components/TextRenderComponent.h"
#include "Engine/Canvas.h"
#include "Engine/Font.h"

UTextRenderer2D::UTextRenderer2D()
{
}

void UTextRenderer2D::SetPosition(const FVector2D& Anchor, float CanvasWidth, float CanvasHeight)
{
	Position = FVector2D(CanvasWidth * Anchor.X, CanvasHeight * Anchor.Y);
}

void UTextRenderer2D::SetPosition(const FVector2D& NewPosition)
{
	Position = NewPosition;
}

void UTextRenderer2D::SetTextSize(const float InSize)
{
	Size = InSize * 2.f;
}

FString UTextRenderer2D::GetFormattedText(class UCanvas* Canvas, float RenderTargetWidth, class UFont* TextFont)
{
	Canvas->WrappedStrLenf(TextFont, 1, 1, Width, Height, *GetText());
	RenderTargetWidth -= (RenderTargetWidth * .01f);
	const float Delta = (Position.X + Width) - RenderTargetWidth;
	if (Delta > 0)
	{
		int32 CharCount = 0;
		int32 LastCutPosition = 0;
		int32 StrLen = Position.X;
		FString Result;
		const FText EncodedText = FText::FromString(GetText());
		const TCHAR* String = (*EncodedText.ToString());

		while (*String != '\0')
		{
			CharCount++;
			const TCHAR Character = *String;
			float CharWidth = 0.f, CharHeight = 0.f;
			TextFont->GetCharSize(Character, CharWidth, CharHeight);

			if (StrLen + CharWidth < RenderTargetWidth)
			{
				StrLen += CharWidth;
			}
			else
			{
				FString Substring = GetText().Mid(LastCutPosition, CharCount);

				FString BeforeLast, AfterLast;
				if (Substring.Split(TEXT(" "), &BeforeLast, &AfterLast, ESearchCase::IgnoreCase, ESearchDir::FromEnd))
				{
					Result += BeforeLast + TEXT("\n");
				}
				else
				{
					Result += Substring + TEXT("\n");
				}

				StrLen = Position.X;

				LastCutPosition += CharCount;
				CharCount = 0;

				if (!AfterLast.IsEmpty())
				{
					CharCount = AfterLast.Len();
					LastCutPosition -= CharCount;
					int32 W = 0.f, H = 0.f;
					Canvas->WrappedStrLenf(TextFont, 1, 1, W, H, *AfterLast);
					StrLen += W;
				}
			}

			String++;
		}

		FString Substring = GetText().Mid(LastCutPosition, CharCount);
		Result += Substring;

		Canvas->WrappedStrLenf(TextFont, 1, 1, Width, Height, *Result);
		return Result;
	}
	return GetText();
}

void UTextRenderer2D::SetAnnotationText(const FString& InText)
{
	Text = InText;
}

void UTextRenderer2D::SetAnnotationTextColor(const FLinearColor& InColor)
{
	Color = InColor;
}
