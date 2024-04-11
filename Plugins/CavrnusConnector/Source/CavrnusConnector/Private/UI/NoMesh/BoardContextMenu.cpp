// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/NoMesh/BoardContextMenu.h"
#include <Components/VerticalBox.h>
#include <Components/Button.h>
#include <Components/HorizontalBox.h>
#include <Components/MenuAnchor.h>
#include <Components/InputComponent.h>

void UBoardContextMenu::NativeConstruct()
{
	Super::NativeConstruct();
	InitializeInputComponent();

	if (InputComponent)
	{
		InputComponent->BindKey(EKeys::LeftMouseButton, IE_Pressed, this, &UBoardContextMenu::OnMouseDown);
	}
}

void UBoardContextMenu::NativeTick(const FGeometry& MyGeometry, float DeltaTime)
{
	Super::NativeTick(MyGeometry, DeltaTime);
	UpdateMenu_Implementation();
}

void UBoardContextMenu::NativeOnMouseEnter(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseEnter(InGeometry, InMouseEvent);
	bMouseHover = true;
}

void UBoardContextMenu::NativeOnMouseLeave(const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseLeave(InMouseEvent);
	bMouseHover = false;
}

UMenuAnchor* UBoardContextMenu::GetMenuAnchor(UButton* Button)
{
	if (UHorizontalBox* HBox = Cast<UHorizontalBox>(Button->GetChildAt(0)))
	{
		TArray<UWidget*> SubWidgets = HBox->GetAllChildren();
		for (UWidget* SubWidget : SubWidgets)
		{
			if (UMenuAnchor* MenuAnchor = Cast<UMenuAnchor>(SubWidget))
			{
				return MenuAnchor;
			}
		}
	}

	return nullptr;
}

void UBoardContextMenu::OnMouseDown()
{
	if (!bMouseHover)
	{
		RemoveFromParent();
	}
}

void UBoardContextMenu::UpdateMenu_Implementation()
{
	if (ItemContainer == nullptr)
	{
		return;
	}

	TArray<UWidget*> Widgets = ItemContainer->GetAllChildren();
	for (UWidget* Widget : Widgets)
	{
		if (UButton* Button = Cast<UButton>(Widget))
		{
			HighlightButton(Button);
			if (Button->IsHovered())
			{
				if (UMenuAnchor* MenuAnchor = GetMenuAnchor(Button))
				{
					// If hovered button has menu anchor, close the old open sub menu.
					if (OpenSubMenu != nullptr)
					{
						if (OpenSubMenu != MenuAnchor)
						{
							OpenSubMenu->Close();
						}
					}

					// open new sub menu.
					OpenSubMenu = MenuAnchor;
					OpenSubMenu->Open(true);
				}
			}
			else
			{
				// If un hovered button has sub menu.
				if (UMenuAnchor* MenuAnchor = GetMenuAnchor(Button))
				{
					// and the sub menu is open.
					if (OpenSubMenu == MenuAnchor)
					{
						// close it.
						OpenSubMenu->Close();
						OpenSubMenu = nullptr;
					}
				}

			}
		}
	}
}

void UBoardContextMenu::HighlightButton_Implementation(UButton* Button)
{
	FLinearColor White = FLinearColor::White;
	White.A = Button->IsHovered() ? 0.35 : 0.0;
	Button->SetBackgroundColor(White);
}
