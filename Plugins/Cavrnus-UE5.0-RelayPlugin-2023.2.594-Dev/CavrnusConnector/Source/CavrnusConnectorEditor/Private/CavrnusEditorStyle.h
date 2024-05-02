#pragma once

#include "Styling/SlateStyle.h"

/**
 * Base style class for the Cavrnus Editor
 */
class FCavrnusEditorStlye : public FSlateStyleSet
{
public:
	FCavrnusEditorStlye(const FName& StlyeName);

	/**
	* Call this to initialize and register the style.
	* Each derived class must fill this to provide its settings.
	*/
	virtual void Init(const FString& ContentPath) = 0;
};

/**
* Style that sets how Cavrnus editor mode tab looks in the editor.
*/
class FCavrnusTabStyle : public FCavrnusEditorStlye
{
public:
	FCavrnusTabStyle(const FName& Name);
	~FCavrnusTabStyle();

	void Init(const FString& ContentRoot) override;

public:
	FName StyleName; ///< Name to reference the style.
	FName TabIcon; ///< Icon to show on tab.
	FName TabIconSmall; ///< Small Icon to show on tab.
};