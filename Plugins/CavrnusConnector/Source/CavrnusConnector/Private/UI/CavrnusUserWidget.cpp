// Copyright(c) Cavrnus. All rights reserved.
#include "UI/CavrnusUserWidget.h"

#include <Engine/Texture2D.h>
#include <Components/Image.h>
#include "CavrnusFunctionLibrary.h"

void UCavrnusUserWidget::NativeDestruct()
{
	Super::NativeDestruct();

	UnbindUserVideo();
}

void UCavrnusUserWidget::InitializeUserConnection(const FCavrnusSpaceConnection& InSpaceConnection, const FCavrnusUser& InUser)
{
	UnbindUserVideo();

	SpaceConnection = InSpaceConnection;
	User = InUser;

	BindUserVideo();
}

void UCavrnusUserWidget::BindUserVideo()
{
	auto UserVideoFrameUpdate = [this](UTexture2D* InTexture) {
		if (!RtcStreamImage)
		{
			return;
		}

		if (InTexture)
		{
			if (TextureSizeChanged(FVector2D(InTexture->GetSizeX(), InTexture->GetSizeY())))
			{
				RtcStreamImage->Brush.SetImageSize(FVector2D(InTexture->GetSizeX(), InTexture->GetSizeY()));
			}
			
			RtcStreamImage->SetBrushFromTexture(InTexture);
		}
	};

	UserVideoFrameBinding = UCavrnusFunctionLibrary::BindUserVideoFrames(SpaceConnection, User, UserVideoFrameUpdate);
}

bool UCavrnusUserWidget::TextureSizeChanged(const FVector2D NewSize) const
{
	return CurrentStreamImageSize != NewSize;
}

void UCavrnusUserWidget::UnbindUserVideo()
{
	if(UserVideoFrameBinding)
		UserVideoFrameBinding->Unbind();
}

