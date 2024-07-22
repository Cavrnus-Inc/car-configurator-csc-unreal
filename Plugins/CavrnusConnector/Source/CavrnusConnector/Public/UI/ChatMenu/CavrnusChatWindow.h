// // Copyright (c), Cavrnus. All rights reserved.

#pragma once

#include <Types/ChatEntry.h>

#include "CoreMinimal.h"
#include "Components/Image.h"
#include "Types/CavrnusSpaceConnection.h"
#include "Types/CavrnusUser.h"
#include "UI/CavrnusBaseUserWidget.h"
#include "CavrnusChatWindow.generated.h"

class UScrollBox;
struct FCavrnusUser;
class UCavrnusChatEntry;
class UVerticalBox;
class UScrollBar;
class UButton;
class UEditableTextBox;
class FTimeManager;

UCLASS(Abstract)
class CAVRNUSCONNECTOR_API UCavrnusChatWindow : public UCavrnusBaseUserWidget
{
	GENERATED_BODY()

public:
	FCavrnusUser LocalUser = FCavrnusUser();
	FCavrnusSpaceConnection SpaceConnection = FCavrnusSpaceConnection();

	UPROPERTY(EditAnywhere, Category = "Cavrnus|ChatWindow")
	FLinearColor ButtonEnabledColor = FLinearColor();
	
	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|ChatWindow", meta = (BindWidget))
	UImage* SubmitButtonIcon = nullptr;
	
	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|ChatWindow", meta = (BindWidget))
	UScrollBox* ChatParentContainer = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|ChatWindow", meta = (BindWidget))
	UEditableTextBox* InputTextBox = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|ChatWindow", meta = (BindWidget))
	UButton* SubmitButton = nullptr;

	UPROPERTY(EditAnywhere, Category = "Cavrnus|ChatWindow")
	TSubclassOf<UCavrnusChatEntry> ChatEntryWidget = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|ChatWindow", meta = (BindWidget))
	UButton* ResetPositionButton = nullptr;

	UFUNCTION(BlueprintCallable, Category = "Cavrnus|ChatWindow")
	void ResetPositionButtonClicked();

private:
	FLinearColor DefaultButtonIconColor = FLinearColor();
	
	bool AutoScrollToEnd = false;
	
	TMap<FString, UCavrnusChatEntry*> CreatedChats;

	virtual void NativeConstruct() override;

	void Setup();

	UFUNCTION()
	void OnScrollBoxScrolled(float CurrentOffset);

	UFUNCTION()
	void SubmitButtonClicked();

	UFUNCTION()
	void TextInputChanged(const FText& InputValue);

	UFUNCTION()
	void TextInputFieldSubmit(const FText& InputValue, ETextCommit::Type CommitValue);

	void SubmitChat();

	void ScrollToEnd();
	void ScrollToBottomAfterDelay();

	void HandleChatAdded(const FChatEntry& ChatAdded);
	void HandleChatUpdated(const FChatEntry& ChatUpdated);
	void HandleChatRemoved(const FString& ChatRemoved);
};