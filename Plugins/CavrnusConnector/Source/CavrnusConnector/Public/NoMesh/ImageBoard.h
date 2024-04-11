// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NoMesh/BoardObject.h"
#include "ImageBoard.generated.h"

/**
 *
 */
UCLASS()
class CAVRNUSCONNECTOR_API AImageBoard : public ABoardObject
{
	GENERATED_BODY()

public:
	AImageBoard(const FObjectInitializer& ObjectInitializer);

	virtual void CreateContent(const FString& ContentPath) override;
};
