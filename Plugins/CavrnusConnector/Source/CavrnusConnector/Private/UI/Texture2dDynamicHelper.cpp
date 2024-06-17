// Copyright(c) Cavrnus. All rights reserved.


#include "UI/Texture2dDynamicHelper.h"
#include "Engine/Texture2DDynamic.h"

int32 UTexture2dDynamicHelper::GetTextureWidth(UTexture2DDynamic* TextureReference)
{
	if (!TextureReference)
	{
		return -1;
	}

	return TextureReference->SizeX;
}

int32 UTexture2dDynamicHelper::GetTextureHeight(UTexture2DDynamic* TextureReference)
{
	if (!TextureReference)
	{
		return -1;
	}

	return TextureReference->SizeY;
}