// Fill out your copyright notice in the Description page of Project Settings.


#include "CavrnusEditorMode.h"
#include "Styling/SlateStyle.h"
#include "CavrnusPropertiesContainer.h"
#include "CavrnusSpatialConnectorSubSystem.h"
#include "CavrnusFunctionLibrary.h"
#include "CavrnusSpatialConnector.h"
#include "CavrnusConnectorEditorModule.h"
#include "ValueSyncs/CavrnusValueSyncBase.h"
#include "UI/CavrnusUIManager.h"

#include <EngineUtils.h>
#include <Async/Async.h>

const FEditorModeID FCavrnusEditorMode::EM_CavrnusEditorModeID = FName(TEXT("EM_CavrnusEditorMode"));

FCavrnusEditorMode::FCavrnusEditorMode()
{
}

FCavrnusEditorMode::~FCavrnusEditorMode()
{
}

void FCavrnusEditorMode::Enter()
{
	GAllowActorScriptExecutionInEditor = true;
	UWorld* EditorWorld = GEditor->GetEditorWorldContext().World();

	// Create or retrieve spatial core.
	SubSystemProxy = UCavrnusFunctionLibrary::GetCavrnusSpatialConnectorSubSystemProxy();
	if (SubSystemProxy == nullptr)
	{
		SubSystemProxy = NewObject<UCavrnusSpatialConnectorSubSystemProxy>(EditorWorld);
	}
	SubSystemProxy->bInEditorMode = true;
	SubSystemProxy->Initialize();

	// Register spatial connector.
	if (ACavrnusSpatialConnector* SpatialConnector = UCavrnusFunctionLibrary::GetCavrnusSpatialConnector())
	{
		CavrnusSpatialConnector = SpatialConnector;
		SubSystemProxy->RegisterCavrnusSpatialConnector(CavrnusSpatialConnector);

		CavrnusSpatialConnector->CavrnusBeginPlay(); // Start login.
	}
	else
	{
		UE_LOG(LogCavrnusConnectorEditor, Display, TEXT("Expecting one ACavrnusSpatialConnector actor."));
	}

	// Accumulate existing journal actors.
	AccumulateJournalActors(EditorWorld);

	// Register to editor events.
	ActorSpawnHandle = EditorWorld->AddOnActorSpawnedHandler
	(
		FOnActorSpawned::FDelegate::CreateLambda
		(
			[&](AActor* SpawnedActor)
			{
				// Register on next tick.
				// Give it time to add cavrnus components if any ...
				AsyncTask
				(
					ENamedThreads::GameThread, [SpawnedActor, this]()
					{
						RegisterJournalActor(SpawnedActor);
					}
				);
			}
		)
	);

}

void FCavrnusEditorMode::Exit()
{
	for (AActor* JournalActor : JournalizedActors)
	{
		JournalActor->RouteEndPlay(EEndPlayReason::Type::EndPlayInEditor);
		SetSyncStatus(JournalActor, false);
	}

	UCavrnusUIManager* UIManager = SubSystemProxy->GetUIManager();
	UIManager->RemoveAllWidgets();

	JournalizedActors.Empty();
	SubSystemProxy->RemoveFromRoot();
	SubSystemProxy->Deinitialize();
	SubSystemProxy->bInEditorMode = false;
	SubSystemProxy->ConditionalBeginDestroy();

	CavrnusSpatialConnector->CavrnusEndPlay();
	CavrnusSpatialConnector = nullptr;
	SubSystemProxy = nullptr;

	GAllowActorScriptExecutionInEditor = false;
}

void FCavrnusEditorMode::Tick(FEditorViewportClient* ViewportClient, float DeltaTime)
{
	for (AActor* Actor : JournalizedActors)
	{
		Actor->Tick(DeltaTime);
	}
}

void FCavrnusEditorMode::AccumulateJournalActors(UWorld* World)
{
	for (TActorIterator<AActor> ActorItr(World); ActorItr; ++ActorItr)
	{
		if (AActor* Actor = *ActorItr)
		{
			RegisterJournalActor(Actor);
		}
	}
}

void FCavrnusEditorMode::RegisterJournalActor(AActor* Actor)
{
	if (Actor->GetComponentByClass(UCavrnusPropertiesContainer::StaticClass()) != nullptr)
	{
		SetSyncStatus(Actor, true);
		JournalizedActors.Add(Actor);
		Actor->DispatchBeginPlay();
	}
}

void FCavrnusEditorMode::SetSyncStatus(AActor* Actor, bool sync)
{
	TInlineComponentArray<UActorComponent*> Components;
	Actor->GetComponents(Components);

	for (UActorComponent* ActorComp : Components)
	{
		if (UCavrnusValueSyncBase* SyncComp = Cast< UCavrnusValueSyncBase>(ActorComp))
		{
			if (sync)
			{
				//SyncComp->StartSyncing();
			}
			else
			{
				//SyncComp->StopSyncing();
			}
		}
	}
}
