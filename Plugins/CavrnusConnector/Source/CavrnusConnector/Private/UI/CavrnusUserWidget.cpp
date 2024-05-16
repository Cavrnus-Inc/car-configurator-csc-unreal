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
			StreamImageSizeSet = false;
			return;
		}

		if (InTexture)
		{
			if (!StreamImageSizeSet)
			{
				RtcStreamImage->Brush.SetImageSize(FVector2D(InTexture->GetSizeX(), InTexture->GetSizeY()));
				StreamImageSizeSet = true;
			}
			
			RtcStreamImage->SetBrushFromTexture(InTexture);
		}
	};

	UserVideoFrameBinding = UCavrnusFunctionLibrary::BindUserVideoFrames(SpaceConnection, User, UserVideoFrameUpdate);
}

void UCavrnusUserWidget::UnbindUserVideo()
{
	UCavrnusFunctionLibrary::Unbind(UserVideoFrameBinding);
}

