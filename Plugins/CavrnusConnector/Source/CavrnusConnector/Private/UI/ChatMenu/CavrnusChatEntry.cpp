// // Copyright (c), Cavrnus. All rights reserved.

#include "UI/ChatMenu/CavrnusChatEntry.h"

#include "CavrnusFunctionLibrary.h"
#include "Components/Border.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Engine/Texture2DDynamic.h"

void UCavrnusChatEntry::Setup(const FChatEntry& InChatEntry)
{
	ChatEntry = InChatEntry;

	const FString UserName = InChatEntry.ChatCreatorIsLocalUser ? InChatEntry.ChatCreatorName + " (you)" : InChatEntry.ChatCreatorName;

	CreatorName->SetText(FText::FromString(UserName));

	const FString FormattedTime = InChatEntry.CreatedTime.ToString(TEXT("%I:%M%p"));
	CreationTime->SetText(FText::FromString(FormattedTime));

	Message->SetText(FText::FromString(InChatEntry.ChatDisplayText));

	if (InChatEntry.ChatCreatorIsLocalUser)
		HandleLocalUserChat();

	SetupComplete(InChatEntry);
}

void UCavrnusChatEntry::ImageReceived(UTexture2DDynamic* Texture)
{
	if (Texture)
		ProfilePicImage->SetBrushFromTextureDynamic(Texture);
	else
		UE_LOG(LogTemp, Display, TEXT("Invalid texture for profile pic!"));
}

void UCavrnusChatEntry::ImageReceiveFailure(UTexture2DDynamic*)
{
	UE_LOG(LogTemp, Display, TEXT("Unable to fetch profile pic!"));
}

void UCavrnusChatEntry::HandleLocalUserChat()
{
	ChatBubbleBackground->SetBrushColor(LocalUserColor);
}