#include "UI/CavrnusLoginWidget.h"
#include <Components/EditableTextBox.h>
#include <Components/Button.h>

void UCavrnusLoginWidget::InitializeCavrnusWidget()
{
	if (bCavrnusWidgetInitialized)
	{
		return;
	}

	LoginButton->OnClicked.AddUniqueDynamic(this, &UCavrnusLoginWidget::OnLoginClicked);
	Super::InitializeCavrnusWidget();
}

void UCavrnusLoginWidget::OnLoginClicked()
{
	OnLogin.Broadcast(EmailInput->GetText().ToString(), PasswordInput->GetText().ToString());
	RemoveCavrnusWidget();
}