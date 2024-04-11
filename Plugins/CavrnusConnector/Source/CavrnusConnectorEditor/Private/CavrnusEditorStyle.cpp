#include "CavrnusEditorStyle.h"
#include "Styling/SlateStyleRegistry.h"

FCavrnusEditorStlye::FCavrnusEditorStlye(const FName& StlyeName)
	: FSlateStyleSet(StlyeName)
{
}

FCavrnusTabStyle::FCavrnusTabStyle(const FName& Name)
	: FCavrnusEditorStlye(Name)
{
	StyleName = Name;
	TabIcon = TEXT("LevelEditor.CavrnusTab");
	TabIconSmall = TEXT("LevelEditor.CavrnusTab.Small");
}

FCavrnusTabStyle::~FCavrnusTabStyle()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*this);
}

void FCavrnusTabStyle::Init(const FString& ContentRoot)
{
	SetContentRoot(ContentRoot / TEXT("Content/Icons"));
	Set(TabIcon, new FSlateImageBrush(RootToContentDir(TEXT("Application.ico")), FVector2D(40.0f, 40.0f)));
	Set(TabIconSmall, new FSlateImageBrush(RootToContentDir(TEXT("Application.ico")), FVector2D(20.0f, 20.0f)));
	FSlateStyleRegistry::RegisterSlateStyle(*this);
}

