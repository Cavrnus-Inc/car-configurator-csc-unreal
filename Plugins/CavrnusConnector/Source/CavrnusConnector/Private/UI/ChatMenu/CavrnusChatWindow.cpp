// // Copyright (c), Cavrnus. All rights reserved.

#include "UI/ChatMenu/CavrnusChatWindow.h"

#include "CavrnusFunctionLibrary.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Components/ScrollBox.h"
#include "UI/ChatMenu/CavrnusChatEntry.h"

void UCavrnusChatWindow::NativeConstruct()
{
	Super::NativeConstruct();

	SubmitButton->SetIsEnabled(false);
	DefaultButtonIconColor = SubmitButtonIcon->ColorAndOpacity;

	const CavrnusSpaceConnected OnConnected = [this](const FCavrnusSpaceConnection& SpaceConn)
	{
		SpaceConnection = SpaceConn;

		UCavrnusFunctionLibrary::BindChatMessages(SpaceConn, [this](const FChatEntry& ChatAdded)
		{
			HandleChatAdded(ChatAdded);
		}, [this](const FChatEntry& ChatUpdated)
		{
			HandleChatUpdated(ChatUpdated);
		},
		[this](const FString& ChatRemoved)
		{
			HandleChatRemoved(ChatRemoved);
		});

		const CavrnusSpaceUserEvent OnLocalUserJoined = [this](const FCavrnusUser& Lu)
		{
			LocalUser = Lu;

			Setup();
		};
		
		UCavrnusFunctionLibrary::AwaitLocalUser(SpaceConn,OnLocalUserJoined);
	};
	
	UCavrnusFunctionLibrary::AwaitAnySpaceConnection(OnConnected);

	ResetPositionButton->SetVisibility(ESlateVisibility::Hidden);

	if (ChatParentContainer)
		ChatParentContainer->OnUserScrolled.AddDynamic(this, &UCavrnusChatWindow::OnScrollBoxScrolled);

	ScrollToEnd();
}

void UCavrnusChatWindow::ResetPositionButtonClicked()
{
	ScrollToEnd();
}

void UCavrnusChatWindow::Setup()
{
	SubmitButton->OnClicked.AddDynamic(this, &UCavrnusChatWindow::SubmitButtonClicked);
	InputTextBox->OnTextChanged.AddDynamic(this, &UCavrnusChatWindow::TextInputChanged);
	InputTextBox->OnTextCommitted.AddDynamic(this, &UCavrnusChatWindow::TextInputFieldSubmit);
}

void UCavrnusChatWindow::OnScrollBoxScrolled(float CurrentOffset)
{
	const float ContentHeight = ChatParentContainer->GetScrollOffsetOfEnd();
	const bool IsAtBottom = (FMath::Abs(ContentHeight - CurrentOffset) < 0.01f);
	ResetPositionButton->SetVisibility(IsAtBottom ? ESlateVisibility::Hidden : ESlateVisibility::Visible);

	AutoScrollToEnd = IsAtBottom;
}

void UCavrnusChatWindow::SubmitButtonClicked()
{
	if (!InputTextBox->Text.IsEmptyOrWhitespace())
		SubmitChat();
}

void UCavrnusChatWindow::TextInputChanged(const FText& InputValue)
{
	const bool ValidInput = !InputValue.IsEmptyOrWhitespace();
	SubmitButton->SetIsEnabled(ValidInput);
	SubmitButtonIcon->SetBrushTintColor(ValidInput ? ButtonEnabledColor : DefaultButtonIconColor);
}

void UCavrnusChatWindow::TextInputFieldSubmit(const FText&, ETextCommit::Type CommitValue)
{
	if (CommitValue == ETextCommit::OnEnter)
		SubmitChat();
}

void UCavrnusChatWindow::SubmitChat()
{
	UCavrnusFunctionLibrary::PostChatMessage(SpaceConnection, InputTextBox->Text.ToString());

	InputTextBox->SetText(FText::FromString(""));

	ScrollToEnd();
}

void UCavrnusChatWindow::ScrollToEnd()
{
	GetWorld()->GetTimerManager().SetTimerForNextTick(this, &UCavrnusChatWindow::ScrollToBottomAfterDelay);
}

void UCavrnusChatWindow::ScrollToBottomAfterDelay()
{
	AutoScrollToEnd = true;;
	ChatParentContainer->SetScrollOffset(FLT_MAX);

	ResetPositionButton->SetVisibility(ESlateVisibility::Hidden);
}

void UCavrnusChatWindow::HandleChatAdded(const FChatEntry& ChatAdded)
{
	if (!ChatParentContainer)
	{
		UE_LOG(LogTemp, Error, TEXT("Null ParentContainer!"));
		return;
	}

	if (!ChatEntryWidget)
	{
		UE_LOG(LogTemp, Error, TEXT("Null ChatEntryWidget!"));
		return;
	}

	if (!ChatParentContainer->IsValidLowLevel())
	{
		UE_LOG(LogTemp, Error, TEXT("ChatParentContainer is not valid!"));
		return;
	}
	
	UCavrnusChatEntry* ChatWidget = CreateWidget<UCavrnusChatEntry>(this, ChatEntryWidget);

	if (!ensure(ChatWidget != nullptr))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create ChatWidget!"));
		return;
	}

	if (ChatWidget)
	{
		ChatWidget->Setup(ChatAdded);

		ChatParentContainer->AddChild(ChatWidget);
		ChatWidget->SetVisibility(ESlateVisibility::Visible);
		
		CreatedChats.Add(ChatAdded.ChatId, ChatWidget);

		UE_LOG(LogTemp, Display, TEXT("Added a new chat to UI!"));
	}

	if (AutoScrollToEnd)
		ScrollToEnd();
}

void UCavrnusChatWindow::HandleChatUpdated(const FChatEntry&)
{
	UE_LOG(LogTemp, Display, TEXT("Chat updated!"));
}

void UCavrnusChatWindow::HandleChatRemoved(const FString& ChatRemoved)
{
	if (!CreatedChats.Contains(ChatRemoved))
	{
		UE_LOG(LogTemp, Warning, TEXT("Chat entry not found: %s"), *ChatRemoved);
		return;
	}
	
	UCavrnusChatEntry** ChatEntry = CreatedChats.Find(ChatRemoved);

	if (ChatEntry && *ChatEntry)
	{
		(*ChatEntry)->RemoveFromParent();
		CreatedChats.Remove(ChatRemoved);
		
		UE_LOG(LogTemp, Display, TEXT("Removed a chat!: %s"), *ChatRemoved);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid chat entry: %s"), *ChatRemoved);
	}
}