// // Copyright (c), Cavrnus. All rights reserved.

#pragma once

#include <Types/ChatEntry.h>

#include "CoreMinimal.h"
#include "Blueprint/AsyncTaskDownloadImage.h"
#include "UI/CavrnusBaseUserWidget.h"
#include "CavrnusChatEntry.generated.h"

struct FCavrnusUser;
class UBorder;
class UImage;
class UTextBlock;
struct FCavrnusSpaceConnection;


UCLASS(Abstract)
class CAVRNUSCONNECTOR_API UCavrnusChatEntry : public UCavrnusBaseUserWidget
{
	GENERATED_BODY()

public:
	void Setup(const FChatEntry& InChatEntry);

	// Chat Metadata References
	UPROPERTY(BlueprintReadWrite, Category = "ChatEntry", meta = (BindWidget))
	UTextBlock* CreatorName;

	UPROPERTY(BlueprintReadWrite, Category = "ChatEntry", meta = (BindWidget))
	UTextBlock* CreationTime;

	UPROPERTY(BlueprintReadWrite, Category = "ChatEntry", meta = (BindWidget))
	UTextBlock* Message;

	UPROPERTY(BlueprintReadWrite, Category = "ChatEntry", meta = (BindWidget))
	UImage* ProfilePicImage;

	// Chat Visuals
	UPROPERTY(EditAnywhere, Category = "ChatEntry")
	FLinearColor LocalUserColor;
	
	UPROPERTY(BlueprintReadWrite, Category = "ChatEntry", meta = (BindWidget))
	UBorder* ChatBubbleBackground;

	UFUNCTION(BlueprintImplementableEvent, Category = "Cavrnus|Events")
	void SetupComplete(FChatEntry InChatEntry);

private:
	UPROPERTY()
	UAsyncTaskDownloadImage* DownloadTask;

	FChatEntry ChatEntry;

	void ImageReceived(UTexture2DDynamic* Texture);
	void ImageReceiveFailure(UTexture2DDynamic* Texture);

	void HandleLocalUserChat();
};
