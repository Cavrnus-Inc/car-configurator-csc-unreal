#include "UI/CavrnusLoginWidget.h"
#include <Components/EditableTextBox.h>
#include <Components/Button.h>

void UCavrnusLoginWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	LoginButton->OnClicked.AddUniqueDynamic(this, &UCavrnusLoginWidget::OnLoginClicked);
}

void UCavrnusLoginWidget::OnLoginClicked()
{
	OnLogin.Broadcast(EmailInput->GetText().ToString(), PasswordInput->GetText().ToString());
	RemoveFromParent();
}