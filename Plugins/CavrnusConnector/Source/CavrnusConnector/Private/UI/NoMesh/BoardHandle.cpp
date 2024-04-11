// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/NoMesh/BoardHandle.h"
#include "NoMesh/BoardObject.h"
#include "Components/Button.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"

void UBoardHandle::NativeConstruct()
{
	Super::NativeConstruct();

	if (DragHandle != nullptr)
	{
		DragHandle->OnReleased.AddDynamic(this, &UBoardHandle::DragEnd);
		DragHandle->OnPressed.AddDynamic(this, &UBoardHandle::DragBegin);
	}
}

void UBoardHandle::DragBegin_Implementation()
{
	if (Board != nullptr)
	{
		if (Board->RayCastOnToBoard(Board->DragPreviousLocation))
		{
			Board->IsOnDrag = true;
		}
	}
}

void UBoardHandle::DragEnd_Implementation()
{
	if (Board != nullptr)
	{
		Board->IsOnDrag = false;
		//Board->SendBoardTransform(EPropertyEventType::Final);
	}
}

FVector2D UBoardHandle::GetSize() const
{
	TArray<UPanelSlot*> HandleSlots = HandleCanvas->GetSlots();
	if (!HandleSlots.IsEmpty())
	{
		if (UCanvasPanelSlot* PanelSlot = Cast<UCanvasPanelSlot>(HandleSlots[0]))
		{
			return PanelSlot->GetSize();
		}
	}

	return FVector2D(32.0, 310.0);
}
