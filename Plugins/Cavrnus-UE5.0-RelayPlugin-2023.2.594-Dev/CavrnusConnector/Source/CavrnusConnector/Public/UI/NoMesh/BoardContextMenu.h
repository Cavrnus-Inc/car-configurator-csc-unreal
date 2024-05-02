// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BoardContextMenu.generated.h"

/**
 * Base class responsible for updating Board's context menu.
 */
UCLASS()
class CAVRNUSCONNECTOR_API UBoardContextMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	void NativeConstruct();
	void NativeTick(const FGeometry& MyGeometry, float DeltaTime) override;
	void NativeOnMouseEnter(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	void NativeOnMouseLeave(const FPointerEvent& InMouseEvent) override;

	/// Update logic for the context menu.
	UFUNCTION(BlueprintNativeEvent, Category = "Cavrnus|Boards")
	void UpdateMenu();
	virtual void UpdateMenu_Implementation();

	/// Highlight logic for all buttons in the context menu.
	UFUNCTION(BlueprintNativeEvent, Category = "Cavrnus|Boards")
	void HighlightButton(class UButton* Button);
	virtual void HighlightButton_Implementation(class UButton* Button);

	/// Handle to board which this context menu associated.
	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus")
	class ABoardObject* Board = nullptr;

	/**
	 * Necessary widget that contains buttons in the ContextMenu. To function properly all buttons must be under directly
	 * this container. And if there will be a child menu within one of the Buttons, button must contain a horizontal box
	 * and child MenuAnchor must be placed in.
	 * ItemContainer
	 *		Button
	 *			HorizontalContainer
	 *				MenuAnchor
	 *		Button
	 *		Button
	 */
	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus", meta = (bindWidget))
	class UVerticalBox* ItemContainer = nullptr;

protected:
	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus")
	class UMenuAnchor* OpenSubMenu = nullptr;

private:
	UMenuAnchor* GetMenuAnchor(UButton* Button);
	void OnMouseDown();
	bool bMouseHover = false;
};
