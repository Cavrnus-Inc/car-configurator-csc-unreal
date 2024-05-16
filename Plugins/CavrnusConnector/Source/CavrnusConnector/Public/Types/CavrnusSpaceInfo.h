#pragma once

#include "CoreMinimal.h"

// Always last
#include "CavrnusSpaceInfo.generated.h"
/**
 *
 */
USTRUCT(BlueprintType)
struct CAVRNUSCONNECTOR_API FCavrnusSpaceInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Spaces")
	FString SpaceId = "";

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Spaces")
	FString SpaceName = "";

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Spaces")
	FString SpaceThumbnail = "";

	FCavrnusSpaceInfo(const FString& SpaceId, const FString& SpaceName, const FString& SpaceThumbnail)
		: SpaceId(SpaceId), SpaceName(SpaceName), SpaceThumbnail(SpaceThumbnail)
	{
	}

	FCavrnusSpaceInfo() = default;

	bool operator==(const FCavrnusSpaceInfo& other) const
	{
		return SpaceId == other.SpaceId && SpaceName == other.SpaceName && SpaceThumbnail == other.SpaceThumbnail;
	}
};