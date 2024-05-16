// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Texture2dDynamicHelper.generated.h"

/**
 * 
 */
UCLASS()
class CAVRNUSCONNECTOR_API UTexture2dDynamicHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Texture2DDynamic")
	static int32 GetTextureWidth(UTexture2DDynamic* TextureReference);

	UFUNCTION(BlueprintCallable, Category = "Texture2DDynamic")
	static int32 GetTextureHeight(UTexture2DDynamic* TextureReference);
};
