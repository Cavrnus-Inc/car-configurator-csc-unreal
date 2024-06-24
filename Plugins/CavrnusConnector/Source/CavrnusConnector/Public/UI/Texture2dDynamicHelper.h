// Copyright(c) Cavrnus. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Texture2dDynamicHelper.generated.h"

/**
 * @brief Blueprint function library for working with dynamic 2D textures in Unreal Engine.
 *
 * The UTexture2dDynamicHelper class provides static utility functions for retrieving the width and height of dynamic 2D textures.
 */
UCLASS()
class CAVRNUSCONNECTOR_API UTexture2dDynamicHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	/**
	 * @brief Gets the width of the specified dynamic 2D texture.
	 *
	 * This function retrieves the width of the provided UTexture2DDynamic texture reference.
	 *
	 * @param TextureReference The reference to the dynamic 2D texture.
	 * @return The width of the texture as an integer.
	 */
	UFUNCTION(BlueprintCallable, Category = "Texture2DDynamic")
	static int32 GetTextureWidth(UTexture2DDynamic* TextureReference);

	/**
	 * @brief Gets the height of the specified dynamic 2D texture.
	 *
	 * This function retrieves the height of the provided UTexture2DDynamic texture reference.
	 *
	 * @param TextureReference The reference to the dynamic 2D texture.
	 * @return The height of the texture as an integer.
	 */
	UFUNCTION(BlueprintCallable, Category = "Texture2DDynamic")
	static int32 GetTextureHeight(UTexture2DDynamic* TextureReference);
};
