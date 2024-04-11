// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BoardHeader.generated.h"

/**
 * Used to provide a header text and utility functions. Such as context menu and close buttons.
 */
UCLASS()
class CAVRNUSCONNECTOR_API UBoardHeader : public UUserWidget
{
	GENERATED_BODY()

private:
	virtual void NativeConstruct() override;
	virtual void NativeOnInitialized() override;

public:
	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus", meta = (bindWidget))
	class UButton* CloseButton = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus", meta = (bindWidget))
	class UButton* ContextMenuButton = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Cavrnus")
	class UBoardContextMenu* ContextMenu = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Cavrnus")
	TSubclassOf<class UBoardContextMenu> ContextMenuTemplate;

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus", meta = (bindWidget))
	class UTextBlock* BoardTitle = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus", meta = (bindWidget))
	class USizeBox* BoardSize = nullptr;

	FVector2D InitialBoardSize;

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus")
	class ABoardObject* Board = nullptr;

	UFUNCTION(BlueprintNativeEvent, Category = "Cavrnus|Boards")
	void OnRemove();
	virtual void OnRemove_Implementation();

	UFUNCTION(BlueprintNativeEvent, Category = "Cavrnus|Boards")
	void OnContextMenu();
	virtual void OnContextMenu_Implementation();

protected:
	void OnBoardRename(const FString& Id, const FString& Name);
	void SetupHandlers();
};
