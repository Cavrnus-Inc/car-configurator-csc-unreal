// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/CavrnusWidgetBase.h"

#include <Blueprint/UserWidget.h>

#include "CavrnusLoginWidget.generated.h"

class UTexture2D;

/**
 *
 * Base class for widget for obtaining login credentials
 *
 */

DECLARE_MULTICAST_DELEGATE_TwoParams(FOnLoginClicked, FString, FString);

UCLASS(Abstract)
class CAVRNUSCONNECTOR_API UCavrnusLoginWidget : public UCavrnusWidgetBase
{
	GENERATED_BODY()

public:
	void InitializeCavrnusWidget() override;

	UFUNCTION()
	void OnLoginClicked();

public:
	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UEditableTextBox* EmailInput;

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UEditableTextBox* PasswordInput;

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UButton* LoginButton;

	FOnLoginClicked OnLogin;
};
