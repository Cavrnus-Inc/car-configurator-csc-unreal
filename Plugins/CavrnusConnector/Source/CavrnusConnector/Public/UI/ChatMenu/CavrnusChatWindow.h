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

UCLASS(Abstract)
class CAVRNUSCONNECTOR_API UCavrnusChatWindow : public UCavrnusBaseUserWidget
{
	GENERATED_BODY()

public:
	FCavrnusUser LocalUser;
	FCavrnusSpaceConnection SpaceConnection;

	UPROPERTY(EditAnywhere)
	FLinearColor ButtonEnabledColor;
	
	UPROPERTY(BlueprintReadWrite, Category = "ChatWindow", meta = (BindWidget))
	UImage* SubmitButtonIcon;
	
	UPROPERTY(BlueprintReadWrite, Category = "ChatWindow", meta = (BindWidget))
	UScrollBox* ChatParentContainer;

	UPROPERTY(BlueprintReadWrite, Category = "ChatWindow", meta = (BindWidget))
	UEditableTextBox* InputTextBox;

	UPROPERTY(BlueprintReadWrite, Category = "ChatWindow", meta = (BindWidget))
	UButton* SubmitButton;

	UPROPERTY(EditAnywhere, Category = "ChatWindow")
	TSubclassOf<UCavrnusChatEntry> ChatEntryWidget;

	UPROPERTY(BlueprintReadWrite, Category = "ChatWindow", meta = (BindWidget))
	UButton* ResetPositionButton;

	UFUNCTION(BlueprintCallable)
	void ResetPositionButtonClicked();

private:
	FLinearColor DefaultButtonIconColor;
	
	bool AutoScrollToEnd;
	
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
