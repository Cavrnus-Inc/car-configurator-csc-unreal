// Copyright(c) Cavrnus. All rights reserved.
#pragma once

#include <Containers/Map.h>
#include "Types/CavrnusBinding.h"
#include "Types/CavrnusCallbackTypes.h"

#include "PropertiesContainer.generated.h"

/**
 * @brief Structure representing the ID of a property within the Cavrnus system.
 *
 * The FFullPropertyId structure is used to uniquely identify properties within a Cavrnus container.
 */
USTRUCT()
struct CAVRNUSCONNECTOR_API FPropertiesContainer
{
	GENERATED_BODY()

public:
	/** The name of the container that holds the property. */
	FString ContainerName = "";

	/**
	 * @brief Default constructor for FPropertiesContainer.
	 *
	 * Initializes the ContainerName to empty string.
	 */
	FPropertiesContainer()
	{
		ContainerName = "";
	}

	/**
	 * @brief Constructor to initialize FPropertiesContainer with container name
	 *
	 * @param containerName The name of the container.
	 */
	FPropertiesContainer(FString containerName)
	{
		ContainerName = containerName;

		//Clean up & standardize the ContainerName
		if (!ContainerName.StartsWith("/"))
			ContainerName = "/" + ContainerName;
		if (!ContainerName.EndsWith("/"))
			ContainerName = ContainerName + "/";
	}

	/** Default Destructor for FFullPropertyId. */
	~FPropertiesContainer(){}

	/**
	 * @brief Gets the hash value of the property ID.
	 *
	 * @param propertyId The property ID structure.
	 * @return The hash value.
	 */
	friend uint32 GetTypeHash(const FPropertiesContainer& propertyId)
	{
		return GetTypeHash(propertyId.ContainerName);
	}

	/**
	 * @brief Equality operator for FFullPropertyId.
	 *
	 * @param other The other property ID to compare with.
	 * @return True if the property IDs are equal, false otherwise.
	 */
	bool operator==(const FPropertiesContainer& other) const
	{
		return ContainerName.Equals(other.ContainerName, ESearchCase::CaseSensitive);
	}

	FString ToString() const
	{
		return ContainerName;
	}
};
