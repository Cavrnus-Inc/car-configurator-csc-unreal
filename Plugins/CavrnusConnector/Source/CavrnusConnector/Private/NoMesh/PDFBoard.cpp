// Fill out your copyright notice in the Description page of Project Settings.

#include "NoMesh/PDFBoard.h"
#include "ConvertPdfToPdfAsset.h"
#include "PDFImporter.h"
#include "PDF.h"
#include "GhostscriptCore.h"
#include "UI/NoMesh/PDFActionsWidget.h"
#include "Annotation/IAnnotation.h"
#include "PDFManager.h"
#include "CavrnusConnectorModule.h"
#include "CavrnusSpatialConnectorSubSystem.h"
#include "CavrnusFunctionLibrary.h"

#include <HAL/PlatformFileManager.h>
#include <Async/Async.h>
#include <Misc/Paths.h>

APDFBoard::APDFBoard(const FObjectInitializer& ObjectInitializer)
	: ABoardObject(ObjectInitializer)
{
	// Create default widget components.
	WidgetDeclarations = {
		ENomeshWidgetType::ActionBar,
		ENomeshWidgetType::LeftHandle,
		ENomeshWidgetType::RightHandle,
		ENomeshWidgetType::HeaderBar
	};

	DefineWidgets();
}

void APDFBoard::CreateContent(const FString& ContentPath)
{
	// Copy file to sub directory in temp folder, the PDF importer reads all
	// images in the directory as page images so is important that each PDF is 
	// exported to its own subfolder.
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FString TempDir = FPlatformProcess::UserTempDir();

	// Generate new sub folder for PDF
	FString TempSubDir;
	do
	{
		FString SubDirName = FGuid::NewGuid().ToString();
		TempSubDir = FPaths::Combine(TempDir, SubDirName);
	} while (PlatformFile.DirectoryExists(*TempSubDir));

	if (!PlatformFile.CreateDirectory(*TempSubDir))
	{
		UE_LOG(LogCavrnusConnector, Error, TEXT("PDF conversion - failed to create temp folder: %s"), *TempSubDir);
		return;
	}

	FString FileName = FPaths::GetCleanFilename(ContentPath);
	FString TempFilePath = TempSubDir / FileName;
	if (!PlatformFile.CopyFile(*TempFilePath, *ContentPath))
	{
		UE_LOG(LogCavrnusConnector, Error, TEXT("Failed to copy PDF from %s to temp folder: %s"), *ContentPath, *TempFilePath);
		return;
	}

	CurrentPage = 1;
	DecryptedContentPath = TempFilePath;

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		if (UCavrnusSpatialConnectorSubSystemProxy* SubSystem = UCavrnusFunctionLibrary::GetCavrnusSpatialConnectorSubSystemProxy())
		{
			if (UPDFManager* PDM = SubSystem->GetPDFManager())
			{
				FOnPDFConverted Callback;
				Callback.BindUObject(this, &APDFBoard::OnPDFConverted);

				PDFConvertTask Task = {
					TempFilePath,
					150,
					0,
					0,
					false,
					Callback
				};

				PDM->AddTask(Task);
			}
		}
	}
}

bool APDFBoard::CanBeRendered(class IAnnotation* Anno) const
{
	if (Anno)
		return CurrentPage == Anno->VisibleAtFrame;
	return false;
}

void APDFBoard::ChangeToRequestedPage()
{
	if (CurrentPage == RequestedPage)
	{
		return;
	}

	int32 Index = RequestedPage - 1;
	if (!Pages.IsValidIndex(Index))
	{
		// Update but don't set. Maybe pages are getting constructed.
		if (!PdfConverted)
		{
			// Network may send -1.
			CurrentPage = RequestedPage > 0 ? RequestedPage : 1;
		}

		return;
	}

	TextureRenderTarget = Pages[Index];
	CurrentPage = RequestedPage;
	PDFAction->SetCurrentPage(RequestedPage);

	// Give at least 1 frame for async calls to complete.
	AsyncTask(ENamedThreads::GameThread, [this]() {
		UpdateResources();
		MarkDirty();
		});
}

void APDFBoard::OnActionReceived(FString Action)
{
	int32 nextPage = CurrentPage;
	if (Action.Equals(TEXT("OpenPreviousPage")))
	{
		nextPage--;
	}
	else if (Action.Equals(TEXT("OpenNextPage")))
	{
		nextPage++;
	}

	if (nextPage != CurrentPage)
	{
		RequestedPage = nextPage;
		ChangeToRequestedPage();
	}
}

void APDFBoard::OnPDFConverted(class UPDF* Asset)
{
	PdfConverted = true;

	// Take texture ownerships.
	Pages = Asset->Pages;
	for (UTexture2D* Page : Pages)
	{
		Page->Rename(nullptr, this);
	}

	int32 Index = CurrentPage - 1;
	if (!Pages.IsValidIndex(Index))
	{
		if (Pages.Num() > 0)
		{
			CurrentPage = 1;
			TextureRenderTarget = Pages[0];
		}
		else
		{
			TextureRenderTarget = nullptr;
		}
	}
	else
	{
		TextureRenderTarget = Pages[Index];
	}

	AdjustAspectRatio();
	UpdateResources();
	MarkDirty();

	PDFAction = Cast<UPDFActionsWidget>(Actions);
	if (PDFAction)
	{
		PDFAction->SetPagesCount(Pages.Num());
		PDFAction->SetCurrentPage(CurrentPage);
	}

	DestroyDecryptedResources(DecryptedContentPath);
}
