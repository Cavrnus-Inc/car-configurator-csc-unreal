#pragma once

#include "CoreMinimal.h"

// Always last
#include "CavrnusRemoteContent.generated.h"
/**
 *
 */
USTRUCT(BlueprintType)
struct CAVRNUSCONNECTOR_API FCavrnusRemoteContent
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Content")
	FString Id;

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Content")
	FString Name;

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Content")
	FString FileName;

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Content")
	FString ThumbnailUrl;

	FCavrnusRemoteContent() {}

	FCavrnusRemoteContent(FString id, FString name, FString fileName, FString thumbnailUrl) 
	{
		Id = id;
		Name = name;
		FileName = fileName;
		ThumbnailUrl = thumbnailUrl;
	}
};