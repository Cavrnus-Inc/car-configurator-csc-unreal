#include "UI/CavrnusUserWidget.h"

#include <Engine/Texture2D.h>
#include <Components/Image.h>
#include "CavrnusFunctionLibrary.h"
#include "CavrnusConnectorVideoRequest.h"

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
			RtcStreamImage->SetBrushFromTexture(InTexture);
		}

		//RtcStreamImage->Brush.SetImageSize(FVector2D(InTexture->GetSizeX(), InTexture->GetSizeY()));
	};

	UserVideoFrameBinding = UCavrnusFunctionLibrary::BindUserVideoFrames(SpaceConnection, User, UserVideoFrameUpdate);
}

void UCavrnusUserWidget::UnbindUserVideo()
{
	if (UserVideoFrameBinding.Unhook)
	{
		UserVideoFrameBinding.Unhook();
	}
}

