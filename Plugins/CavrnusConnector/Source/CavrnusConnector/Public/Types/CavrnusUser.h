#pragma once

#include "CoreMinimal.h"
#include "Types/CavrnusSpaceConnection.h"
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
	bool IsLocalUser = false;

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Users")
	FString PropertiesContainerName = "";

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Users")
	FString UserConnectionId = "";

	UPROPERTY(BlueprintReadonly, Category = "Cavrnus|Users")
	FCavrnusSpaceConnection SpaceConn;

	UPROPERTY(BlueprintReadonly, Category = "Cavrnus|Users")
	UTexture2D* VideoFrameTexture = nullptr;

	bool operator==(const FCavrnusUser& Other) const
	{
		return PropertiesContainerName == Other.PropertiesContainerName && UserConnectionId == Other.UserConnectionId;
	}

	FCavrnusUser() = default;

	FCavrnusUser(bool IsLocalUser, const FString& PropertiesContainerName, const FString& UserConnectionId, const FCavrnusSpaceConnection& SpaceConn)
		: IsLocalUser(IsLocalUser), PropertiesContainerName(PropertiesContainerName), UserConnectionId(UserConnectionId), SpaceConn(SpaceConn)
	{
	}
};