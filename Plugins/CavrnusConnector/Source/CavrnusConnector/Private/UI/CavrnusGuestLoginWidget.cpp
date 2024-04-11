#include "UI/CavrnusGuestLoginWidget.h"
#include <Components/EditableTextBox.h>
#include <Components/Button.h>

void UCavrnusGuestLoginWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	LoginButton->OnClicked.AddUniqueDynamic(this, &UCavrnusGuestLoginWidget::OnLoginClicked);
}

void UCavrnusGuestLoginWidget::OnLoginClicked()
{
	OnLogin.Broadcast(GuestUsernameInput->GetText().ToString());
}