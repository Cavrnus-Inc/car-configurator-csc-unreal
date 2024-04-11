#include "CavrnusSplashScreenWidget.h"
#include "Components/Button.h"
#include "Components/CheckBox.h"
#include "CavrnusConnectorEditorModule.h"
#include <Blutility/Public/EditorUtilitySubsystem.h>
#include <Kismet/KismetSystemLibrary.h>

void UCavrnusSplashScreenWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	FCavrnusConnectorEditorModule& CavrnusConnectorEditorModule =
		FModuleManager::LoadModuleChecked<FCavrnusConnectorEditorModule>
		(FName(TEXT("CavrnusConnectorEditor")));
	ShowOnStartupCheckbox->SetIsChecked(CavrnusConnectorEditorModule.ShouldShowSplashScreen());

	SetupSpaceButton->OnClicked.AddUniqueDynamic(this, &UCavrnusSplashScreenWidget::OnSetupSpaceClicked);
	OpenWebConsoleButton->OnClicked.AddUniqueDynamic(this, &UCavrnusSplashScreenWidget::OnWebConsoleClicked);
	OpenDocumentationButton->OnClicked.AddUniqueDynamic(this, &UCavrnusSplashScreenWidget::OnOpenDocsClicked);
	ShowOnStartupCheckbox->OnCheckStateChanged.AddUniqueDynamic(this, &UCavrnusSplashScreenWidget::OnShowSplashScreenOnStartupClicked);
	DismissButton->OnClicked.AddUniqueDynamic(this, &UCavrnusSplashScreenWidget::OnDismissClicked);
}

void UCavrnusSplashScreenWidget::OnSetupSpaceClicked()
{
	FCavrnusConnectorEditorModule& CavrnusConnectorEditorModule =
		FModuleManager::LoadModuleChecked<FCavrnusConnectorEditorModule>
		(FName(TEXT("CavrnusConnectorEditor")));
	CavrnusConnectorEditorModule.AddCavrnusSpatialConnectorToLevel();
	Close();
}

void UCavrnusSplashScreenWidget::OnWebConsoleClicked()
{
	UKismetSystemLibrary::LaunchURL(WebConsoleURL);
}

void UCavrnusSplashScreenWidget::OnOpenDocsClicked()
{
	UKismetSystemLibrary::LaunchURL(DocumentationURL);
}

void UCavrnusSplashScreenWidget::OnShowSplashScreenOnStartupClicked(bool bShowOnStartup)
{
	FCavrnusConnectorEditorModule& CavrnusConnectorEditorModule =
		FModuleManager::LoadModuleChecked<FCavrnusConnectorEditorModule>
		(FName(TEXT("CavrnusConnectorEditor")));
	CavrnusConnectorEditorModule.SetShowSplashScreen(bShowOnStartup);
}

void UCavrnusSplashScreenWidget::OnDismissClicked()
{
	Close();
}

void UCavrnusSplashScreenWidget::Close()
{
	UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
	if (EditorUtilitySubsystem)
	{
		EditorUtilitySubsystem->CloseTabByID(TabID);
	}
}
