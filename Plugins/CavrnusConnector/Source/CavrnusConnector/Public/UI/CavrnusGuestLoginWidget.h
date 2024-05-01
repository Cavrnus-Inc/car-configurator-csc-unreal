// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/CavrnusWidgetBase.h"

#include <Blueprint/UserWidget.h>

#include "CavrnusGuestLoginWidget.generated.h"

/**
 *
 * Base class for widget for obtaining guest login username
 *
 */

DECLARE_MULTICAST_DELEGATE_OneParam(FOnGuestLoginClicked, FString);

UCLASS(Abstract)
class CAVRNUSCONNECTOR_API UCavrnusGuestLoginWidget : public UCavrnusWidgetBase
{
	GENERATED_BODY()

public:
	void InitializeCavrnusWidget() override;

	UFUNCTION()
	void OnLoginClicked();

public:
	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UEditableTextBox* GuestUsernameInput;

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UButton* LoginButton;

	FOnGuestLoginClicked OnLogin;
};
