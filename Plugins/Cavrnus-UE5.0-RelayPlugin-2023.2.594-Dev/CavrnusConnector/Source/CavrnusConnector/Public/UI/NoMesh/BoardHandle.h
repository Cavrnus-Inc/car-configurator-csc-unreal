// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BoardHandle.generated.h"

/**
 * Used to drag around the ANomeshActors.
 */
UCLASS()
class CAVRNUSCONNECTOR_API UBoardHandle : public UUserWidget
{
	GENERATED_BODY()

private:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus", meta = (bindWidget))
	class UButton* DragHandle = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus", meta = (bindWidget))
	class UCanvasPanel* HandleCanvas = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus")
	class ABoardObject* Board = nullptr;

	UFUNCTION(BlueprintNativeEvent, Category = "Cavrnus|Boards")
	void DragBegin();
	virtual void DragBegin_Implementation();

	UFUNCTION(BlueprintNativeEvent, Category = "Cavrnus|Boards")
	void DragEnd();
	virtual void DragEnd_Implementation();

	FVector2D GetSize() const;
};
