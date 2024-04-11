#include "UI/CavrnusSpaceUILoaderComponent.h"

UUserWidget* UCavrnusSpaceUILoaderComponent::SpawnWidget(TSubclassOf<UUserWidget> WidgetClass)
{
	if ((WidgetsToLoad.Contains(WidgetClass)) || (WidgetClass == LoadingWidgetClass))
	{
		if (UWorld* World = GetWorld())
		{
			UUserWidget* CreatedWidget = CreateWidget<UUserWidget>(World, WidgetClass);
			if (CreatedWidget)
			{
				CreatedWidget->AddToViewport();
			}

			return CreatedWidget;
		}
	}

	return nullptr;
}

void UCavrnusSpaceUILoaderComponent::BeginPlay()
{
	Super::BeginPlay();

	if (LoadingWidgetClass)
	{
		LoadingWidget = SpawnWidget(LoadingWidgetClass);
	}

	OnSpaceConnected.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusSpaceUILoaderComponent, SpaceConnected));
	UCavrnusFunctionLibrary::AwaitAnySpaceConnection(OnSpaceConnected);
}

void UCavrnusSpaceUILoaderComponent::SpaceConnected(FCavrnusSpaceConnection spaceConn)
{
	if (LoadingWidget)
	{
		LoadingWidget->RemoveFromParent();
		LoadingWidget = nullptr;
	}

	for (TSubclassOf<UUserWidget>& Widget : WidgetsToLoad)
	{
		SpawnWidget(Widget);
	}
}
