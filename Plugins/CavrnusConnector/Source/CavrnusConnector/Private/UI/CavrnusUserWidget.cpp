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
	if (!UserVideoFrameEvent.IsBound())
	{
		UserVideoFrameEvent.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusUserWidget, UpdateVideoTexture));
	}

	UserVideoFrameBinding = UCavrnusFunctionLibrary::BindUserVideoFrames(SpaceConnection, User, UserVideoFrameEvent);
}

void UCavrnusUserWidget::UnbindUserVideo()
{
	if (UserVideoFrameEvent.IsBound())
	{
		UserVideoFrameEvent.Clear();
	}

	if (UserVideoFrameBinding.Unhook)
	{
		UserVideoFrameBinding.Unhook();
	}
}

void UCavrnusUserWidget::UpdateVideoTexture(UTexture2D* InTexture)
{
	if (!RtcStreamImage)
	{
		return;
	}

	if (InTexture)
	{
		RtcStreamImage->SetBrushFromTexture(InTexture);
	}

	//RtcStreamImage->Brush.SetImageSize(FVector2D(InTexture->GetSizeX(), InTexture->GetSizeY()));
}

