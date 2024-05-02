// Fill out your copyright notice in the Description page of Project Settings.
// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/NoMesh/BoardHeader.h"
#include "UI/NoMesh/BoardContextMenu.h"
#include "NoMesh/BoardObject.h"
#include <Components/Button.h>
#include <Components/TextBlock.h>
#include <Components/MenuAnchor.h>
#include <Components/SizeBox.h>
#include <Components/OverlaySlot.h>
#include <Components/CanvasPanelSlot.h>

void UBoardHeader::NativeConstruct()
{
	Super::NativeConstruct();
}

void UBoardHeader::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	SetupHandlers();
	if (BoardSize != nullptr)
	{
		if (UCanvasPanelSlot* CPanel = Cast<UCanvasPanelSlot>(BoardSize->Slot))
		{
			InitialBoardSize = CPanel->GetSize();
		}
	}
}

void UBoardHeader::OnRemove_Implementation()
{
	if (Board != nullptr)
	{
		Board->Remove();
	}
}

void UBoardHeader::OnContextMenu_Implementation()
{
	//UCavrnusUIManager* UIMan = CavrnusUI::Instance()->UIManager();
	//if (UIMan == nullptr)
	//{
	//	UE_LOG(LogCavrnusCoreUI, Warning, TEXT("CavrnusUI is not initialized."));
	//	return;
	//}

	//if (ContextMenuTemplate != nullptr)
	//{
	//	if (ContextMenu == nullptr)
	//	{
	//		ContextMenu = Cast<UBoardContextMenu>(UIMan->SpawnBPWidget(ContextMenuTemplate));
	//	}
	//}

	//// Toggle behavior.
	//TArray<UBoardContextMenu*> ContextMenus = UIMan->GetAllBPWidgetOfType<UBoardContextMenu>();
	//for (UBoardContextMenu* CMenu : ContextMenus)
	//{
	//	UIMan->RemoveWidgetFromViewport(CMenu);
	//}

	//if (!ContextMenu->IsInViewport())
	//{
	//	ContextMenu->Board = Board;
	//	UIMan->AddWidgetToViewPort(ContextMenu);

	//	UWorld* World = GetWorld();
	//	float ViewportScale = UWidgetLayoutLibrary::GetViewportScale(World);
	//	FVector2D MouseLoc = UWidgetLayoutLibrary::GetMousePositionOnViewport(World);
	//	MouseLoc *= ViewportScale;

	//	ContextMenu->SetPositionInViewport(MouseLoc);
	//}
}

void UBoardHeader::OnBoardRename(const FString& Id, const FString& Name)
{
	/*if (Board != nullptr)
	{
		if (Board->GetID() == Id)
		{
			BoardTitle->SetText(FText::FromString(Name));
		}
	}*/
}

void UBoardHeader::SetupHandlers()
{
	//CavrnusEvents::CavrnusOnChangeBoardName.AddUObject(this, &UBoardHeader::OnBoardRename);

	if (CloseButton != nullptr)
	{
		CloseButton->OnReleased.AddDynamic(this, &UBoardHeader::OnRemove);
	}

	if (ContextMenuButton != nullptr)
	{
		ContextMenuButton->OnReleased.AddDynamic(this, &UBoardHeader::OnContextMenu);
	}
}
