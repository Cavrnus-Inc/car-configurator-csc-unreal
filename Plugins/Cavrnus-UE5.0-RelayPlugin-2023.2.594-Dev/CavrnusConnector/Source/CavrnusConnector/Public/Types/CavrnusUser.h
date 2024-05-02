#pragma once

#include "CoreMinimal.h"
#include <Engine/Texture2D.h>

// Always last
#include "CavrnusUser.generated.h"
/**
 *
 */
USTRUCT(BlueprintType)
struct CAVRNUSCONNECTOR_API FCavrnusUser
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Users")
	bool IsLocalUser;

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Users")
	FString PropertiesContainerName;

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Users")
	FString UserConnectionId;

	UPROPERTY(BlueprintReadonly, Category = "Cavrnus|Users")
	UTexture2D* VideoFrameTexture = nullptr;

	bool operator==(const FCavrnusUser& Other) const
	{
		return PropertiesContainerName == Other.PropertiesContainerName && UserConnectionId == Other.UserConnectionId;
	}
};