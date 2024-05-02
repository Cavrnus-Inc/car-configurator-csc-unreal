#include "UI/CavrnusGuestLoginWidget.h"
#include <Components/EditableTextBox.h>
#include <Components/Button.h>

void UCavrnusGuestLoginWidget::InitializeCavrnusWidget()
{
	if (bCavrnusWidgetInitialized)
	{
		return;
	}

	LoginButton->OnClicked.AddUniqueDynamic(this, &UCavrnusGuestLoginWidget::OnLoginClicked);
	Super::InitializeCavrnusWidget();
}

void UCavrnusGuestLoginWidget::OnLoginClicked()
{
	OnLogin.Broadcast(GuestUsernameInput->GetText().ToString());
}