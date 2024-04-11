#pragma once

#include "CoreMinimal.h"

// Always last
#include "CavrnusAuthentication.generated.h"
/**
 *
 */
USTRUCT(BlueprintType)
struct CAVRNUSCONNECTOR_API FCavrnusAuthentication
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Authorization")
	FString Token;

	FCavrnusAuthentication(const FString& Token)
		: Token(Token)
	{
	}

	FCavrnusAuthentication() = default;
};