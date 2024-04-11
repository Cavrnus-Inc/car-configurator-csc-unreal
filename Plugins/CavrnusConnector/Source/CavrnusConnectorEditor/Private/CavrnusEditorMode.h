// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EdMode.h"

/**
 * Editor mode for cavrnus platform.
 */
class FCavrnusEditorMode : public FEdMode
{
public:
	/**
	* Default empty constructor.
	*/
	FCavrnusEditorMode();

	/**
	* Default empty destructor.
	*/
	virtual ~FCavrnusEditorMode();

	/**
	* Initialize Relay in editor.
	*/
	void Enter() override;

	/**
	* Destroy Relay and clears all allocated resources.
	*/
	void Exit() override;

	/**
	*/
	void Tick(FEditorViewportClient* ViewportClient, float DeltaTime) override;

private:
	/**
	* Accumulates all the actors in given worlds.
	* This is used to initialize each persistent level.
	*/
	void AccumulateJournalActors(UWorld* World);

	/**
	* Checks if the actor contains UCavrnusPropertiesContainer and if so record it JournalizedActors array.
	*/
	void RegisterJournalActor(AActor* Actor);

	/**
	* Sets whether the components of the actor sync their values or not.
	*/
	void SetSyncStatus(AActor* Actor, bool sync);

private:
	/**
	* List of all actors that sync properties.
	* When the user interact with actors such that a sync is needed, the actor is journalized
	* and stored here.
	* JournalizedActor is one that resides in journal and sync properties. Not all actors are journalized
	* initially.
	*/
	TArray<AActor*> JournalizedActors;

	/**
	* Proxy class that manages the relay connection.
	*/
	class UCavrnusSpatialConnectorSubSystemProxy* SubSystemProxy;

	/**
	* Intermediate actor that lets to connect to a space.
	*/
	class ACavrnusSpatialConnector* CavrnusSpatialConnector;

	FDelegateHandle ActorSpawnHandle; /// Captures spawned actor to process, journalize.

public:
	const static FEditorModeID EM_CavrnusEditorModeID;
};
