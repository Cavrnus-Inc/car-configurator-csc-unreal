// Copyright(c) Cavrnus. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include <Blueprint/UserWidget.h>

#include "CavrnusGuestLoginWidget.generated.h"

/**
 *
 * Base class for widget for obtaining guest login username
 *
 */

DECLARE_MULTICAST_DELEGATE_OneParam(FOnGuestLoginClicked, FString);

UCLASS(Abstract)
class CAVRNUSCONNECTOR_API UCavrnusGuestLoginWidget : public UUserWidget
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "Cavrnus", meta = (BindWidget))
	void Setup();

	UFUNCTION()
	void OnLoginClicked();

public:
	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UEditableTextBox* GuestUsernameInput;

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UButton* LoginButton;

	FOnGuestLoginClicked OnLogin;
};