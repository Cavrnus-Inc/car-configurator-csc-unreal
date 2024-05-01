#include "UI/CavrnusSpaceListWidget.h"
#include "CavrnusConnectorModule.h"
#include <Components/ListView.h>

#include "CavrnusSpatialConnectorSubSystem.h"
#include "CavrnusFunctionLibrary.h"

void UCavrnusSpaceListWidget::InitializeCavrnusWidget()
{
	if (bCavrnusWidgetInitialized)
	{
		return;
	}

	if (UCavrnusSpatialConnectorSubSystemProxy* SubProxy = UCavrnusFunctionLibrary::GetCavrnusSpatialConnectorSubSystemProxy())
	{
		if (SubProxy->bInEditorMode)
		{
			OnInitialized(); // This will run the scripts in blueprint.
		}
	}

	SpaceList->OnItemSelectionChanged().AddLambda
	(
		[this](UObject* Item)
		{
			FString SpaceJoinId = GetSpaceID(Item);
			UE_LOG(LogCavrnusConnector, Log, TEXT("Space list item selection changed"));
			OnCavrnusSpaceSelected.Broadcast(SpaceJoinId);
			RemoveCavrnusWidget();
		}
	);

	Super::InitializeCavrnusWidget();
}
