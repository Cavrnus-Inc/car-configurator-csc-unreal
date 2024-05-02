// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CavrnusWidgetBase.generated.h"

/**
 * Base widget class for all Cavrnus specific widgets.
 * Its important to derive the widgets from this class otherwise they will miss function.
 */
UCLASS()
class CAVRNUSCONNECTOR_API UCavrnusWidgetBase : public UUserWidget
{
	GENERATED_BODY()
protected:
	void NativeOnInitialized() override;
	void NativeConstruct() override;

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	void RemoveCavrnusWidget();

public:
	virtual void InitializeCavrnusWidget();

public:
	TWeakObjectPtr<class UCavrnusUIManager> UIManager;

protected:
	bool bCavrnusWidgetInitialized = false;
};
