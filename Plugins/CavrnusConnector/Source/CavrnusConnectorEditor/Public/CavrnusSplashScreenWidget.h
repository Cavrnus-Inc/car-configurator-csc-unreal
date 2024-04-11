#pragma once
#include <EditorUtilityWidget.h>

#include "CavrnusSplashScreenWidget.generated.h"

UCLASS()
class UCavrnusSplashScreenWidget : public UEditorUtilityWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UButton* SetupSpaceButton;

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UButton* OpenWebConsoleButton;

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UButton* OpenDocumentationButton;

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UCheckBox* ShowOnStartupCheckbox;

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UButton* DismissButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cavrnus")
	FString WebConsoleURL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cavrnus")
	FString DocumentationURL;

	// Stored so can use to close the tab
	UPROPERTY()
	FName TabID;

	UFUNCTION()
	void OnSetupSpaceClicked();

	UFUNCTION()
	void OnWebConsoleClicked();

	UFUNCTION()
	void OnOpenDocsClicked();

	UFUNCTION()
	void OnShowSplashScreenOnStartupClicked(bool bCheckboxState);

	UFUNCTION()
	void OnDismissClicked();


private:
	void NativePreConstruct() override;

	void Close();
};