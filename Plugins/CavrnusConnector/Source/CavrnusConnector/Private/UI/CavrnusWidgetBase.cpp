// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/CavrnusWidgetBase.h"
#include "UI/CavrnusUIManager.h"

void UCavrnusWidgetBase::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	InitializeCavrnusWidget();
}

void UCavrnusWidgetBase::NativeConstruct()
{
	Super::NativeConstruct();
}

void UCavrnusWidgetBase::RemoveCavrnusWidget()
{
	if (UIManager.IsValid())
	{
		UIManager->RemoveWidget(this);
	}
}

void UCavrnusWidgetBase::InitializeCavrnusWidget()
{
	bCavrnusWidgetInitialized = true;
}
