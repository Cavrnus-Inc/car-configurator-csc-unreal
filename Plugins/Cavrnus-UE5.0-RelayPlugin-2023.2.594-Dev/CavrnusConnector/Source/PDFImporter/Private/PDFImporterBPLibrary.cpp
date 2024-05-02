// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PDFImporterBPLibrary.h"
#include "PDFImporter.h"
#include <Engine/Engine.h>
#include <Engine/GameViewportClient.h>
#include <Misc/Paths.h>
#include <Widgets/SWindow.h>
#include "Developer/DesktopPlatform/Public/IDesktopPlatform.h"
#include "Developer/DesktopPlatform/Public/DesktopPlatformModule.h"
#include "Editor/MainFrame/Public/Interfaces/IMainFrameModule.h"

UPDFImporterBPLibrary::UPDFImporterBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UPDFImporterBPLibrary::OpenPDFDialog(const FString& DefaultPath, EOpenPDFDialogResult& OutputPin, FString& FileName)
{
	TArray<FString> FileNameTemp;
	OutputPin = ExecOpenFileDialog(DefaultPath, FileNameTemp, false);
	if (OutputPin == EOpenPDFDialogResult::Successful)
	{
		FileName = FileNameTemp[0];
	}
}

void UPDFImporterBPLibrary::OpenPDFDialogMultiple(const FString& DefaultPath, EOpenPDFDialogResult& OutputPin, TArray<FString>& FileNames)
{
	OutputPin = ExecOpenFileDialog(DefaultPath, FileNames, true);
}

FString UPDFImporterBPLibrary::ConvertFPageRangeToFString(FPageRange InPageRange)
{
	return FString::FromInt(InPageRange.FirstPage) + TEXT(" - ") + FString::FromInt(InPageRange.LastPage);
}

void* UPDFImporterBPLibrary::GetWindowHandle()
{
	if (GIsEditor)
	{
		IMainFrameModule& MainFrameModule = IMainFrameModule::Get();
		TSharedPtr<SWindow> MainWindow = MainFrameModule.GetParentWindow();

		if (MainWindow.IsValid() && MainWindow->GetNativeWindow().IsValid())
		{
			return MainWindow->GetNativeWindow()->GetOSWindowHandle();
		}
	}
	else
	{
		if (GEngine && GEngine->GameViewport)
		{
			return GEngine->GameViewport->GetWindow()->GetNativeWindow()->GetOSWindowHandle();
		}
	}

	return nullptr;
}

EOpenPDFDialogResult UPDFImporterBPLibrary::ExecOpenFileDialog(const FString& DefaultPath, TArray<FString>& FileNames, bool bIsMultiple)
{
	void* WindowHandle = GetWindowHandle();
	if (WindowHandle)
	{
		IDesktopPlatform* desktopPlatform = FDesktopPlatformModule::Get();
		if (desktopPlatform)
		{
			bool result = desktopPlatform->OpenFileDialog(
				GEngine->GameViewport->GetWindow()->GetNativeWindow()->GetOSWindowHandle(),
				TEXT("Open PDF Dialog"),
				DefaultPath,
				TEXT(""),
				TEXT("PDF File (.pdf)|*.pdf"),
				(bIsMultiple ? EFileDialogFlags::Type::Multiple : EFileDialogFlags::Type::None),
				FileNames
			);

			if (result)
			{
				for (FString& fileName : FileNames)
				{
					fileName = FPaths::ConvertRelativePathToFull(fileName);
					UE_LOG(PDFImporter, Log, TEXT("Open PDF Dialog : %s"), *fileName);
				}
				return EOpenPDFDialogResult::Successful;
			}
		}
	}
	UE_LOG(PDFImporter, Log, TEXT("Open PDF Dialog : Cancelled"));
	return EOpenPDFDialogResult::Cancelled;
}