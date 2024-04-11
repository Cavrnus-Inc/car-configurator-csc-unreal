#pragma once

#include "CoreMinimal.h"
#include "CavrnusSpaceConnection.h"
#include <Engine/Texture2D.h>

// Always last
#include "CavrnusSpawnedObject.generated.h"
/**
 *
 */
USTRUCT(BlueprintType)
struct CAVRNUSCONNECTOR_API FCavrnusSpawnedObject
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Users")
	FCavrnusSpaceConnection SpaceConnection;

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Users")
	FString PropertiesContainerName;

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Users")
	FString CreationOpId;

	//TODO: REMOVE THIS BIT
	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Users")
	FString UniqueIdentifier;

	FCavrnusSpawnedObject(const FString& PropertiesContainerName, const FString& CreationOpId)
		: PropertiesContainerName(PropertiesContainerName), CreationOpId(CreationOpId)
	{
	}

	FCavrnusSpawnedObject() = default;
};