#pragma once

#include "CoreMinimal.h"

// Always last
#include "CavrnusSpaceConnection.generated.h"
/**
 *
 */
USTRUCT(BlueprintType)
struct CAVRNUSCONNECTOR_API FCavrnusSpaceConnection
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Spaces")
	int SpaceConnectionId = -1;

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus|Spaces")
	FString LocalUserConnectionId = "";

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus|Spaces")
	FString LocalUserContainerName = "";

	FCavrnusSpaceConnection() = default;

	FCavrnusSpaceConnection(int SpaceConnectionId)
		: SpaceConnectionId(SpaceConnectionId)
	{
	}

	FCavrnusSpaceConnection(int InSpaceConnectionId, const FString& InLocalUserConnectionId, const FString& InLocalUserContainerName)
		: SpaceConnectionId(InSpaceConnectionId), LocalUserConnectionId(InLocalUserConnectionId), LocalUserContainerName(InLocalUserContainerName)
	{
	}
};