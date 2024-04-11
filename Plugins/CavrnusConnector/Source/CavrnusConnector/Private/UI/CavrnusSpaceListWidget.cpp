#include "UI/CavrnusSpaceListWidget.h"
#include "CavrnusConnectorModule.h"
#include <Components/ListView.h>

void UCavrnusSpaceListWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	SpaceList->OnItemSelectionChanged().AddLambda([this](UObject* Item) {
		FString SpaceJoinId = GetSpaceID(Item);
		UE_LOG(LogCavrnusConnector, Log, TEXT("Space list item selection changed"));
		OnCavrnusSpaceSelected.Broadcast(SpaceJoinId);
		RemoveFromParent();
		});
}