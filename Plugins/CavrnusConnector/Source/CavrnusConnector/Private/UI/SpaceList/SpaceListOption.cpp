#include "UI/SpaceList/SpaceListOption.h"
#include "Components/Button.h"

void USpaceListOption::Setup(const FCavrnusSpaceInfo& InSpaceInfo, const FSpaceSelectedEvent& InOnSelect)
{
	SpaceInfo = InSpaceInfo;
	OnSelect = InOnSelect;
	
	if (Button)
	{
		Button->OnClicked.AddDynamic(this, &USpaceListOption::ButtonSpaceSelected);
	}

	if (SpaceNameTextBlock)
	{
		SpaceNameTextBlock->SetText(FText::FromString(SpaceInfo.SpaceName));
	}
}

void USpaceListOption::ButtonSpaceSelected()
{
	if (OnSelect)
		OnSelect(SpaceInfo);
}
