// Fill out your copyright notice in the Description page of Project Settings.

#include "NoMesh/ImageBoard.h"
#include <Engine/CanvasRenderTarget2D.h>
#include <TextureResource.h>
#include <IImageWrapperModule.h>
#include <IImageWrapper.h>
#include <Engine/Texture2D.h>
#include <Modules/ModuleManager.h>
#include <Misc/FileHelper.h>

AImageBoard::AImageBoard(const FObjectInitializer& ObjectInitializer)
		: ABoardObject(ObjectInitializer)
{
	// Create default widget components.
	WidgetDeclarations = {
		ENomeshWidgetType::LeftHandle,
		ENomeshWidgetType::RightHandle,
		ENomeshWidgetType::BottomHandle,
		ENomeshWidgetType::HeaderBar
	};

	DefineWidgets();
}

void AImageBoard::CreateContent(const FString& ContentPath)
{
	TArray<uint8> ContentBytes;
	if (FFileHelper::LoadFileToArray(ContentBytes, *ContentPath))
	{
		IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
		EImageFormat ImageFormat = ImageWrapperModule.DetectImageFormat(ContentBytes.GetData(), ContentBytes.Num());
		TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(ImageFormat);

		if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(ContentBytes.GetData(), ContentBytes.Num()))
		{
			TArray<uint8> UncompressedBGRA;
			if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
			{
				FName UniqueName = MakeUniqueObjectName(nullptr, UTexture2D::StaticClass());
				TextureRenderTarget = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8, UniqueName);

				if (TextureRenderTarget)
				{
					if (UTexture2D* ImageTexture = Cast<UTexture2D>(TextureRenderTarget))
					{
						void* TextureData = ImageTexture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
						// locking the data its multithreaded
						FMemory::Memmove(TextureData, UncompressedBGRA.GetData(), UncompressedBGRA.Num());
						ImageTexture->GetPlatformData()->Mips[0].BulkData.Unlock();
						ImageTexture->UpdateResource();
					}
				}
			}
		}
	}

	UpdateResources();
	OnContentCreated.ExecuteIfBound(this, ContentPath);
}
