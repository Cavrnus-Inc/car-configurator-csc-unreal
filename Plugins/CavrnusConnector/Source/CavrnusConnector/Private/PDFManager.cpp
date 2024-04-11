#include "PDFManager.h"
#include "PDFImporter.h"
#include <Async/Async.h>
#include "HAL/ThreadSafeBool.h"

UPDFManager::UPDFManager()
{
	GhostscriptCore = nullptr;
}

UPDFManager::~UPDFManager()
{
}

void UPDFManager::Init()
{
	FPDFImporterModule& PDFImporterModule = FModuleManager::LoadModuleChecked<FPDFImporterModule>(FName("PDFImporter"));
	GhostscriptCore = PDFImporterModule.GetGhostscriptCore();
	IsTaskInExecution = false;
}

static FThreadSafeBool TaskExecuteLock;

void UPDFManager::Update(float DeltaTime)
{
	// Is there a task ?
	if (TaskMutex.TryLock())
	{
		if (!ConvertionTasks.IsEmpty())
		{
			// Can we work on the task ?
			if (!IsTaskInExecution)
			{
				IsTaskInExecution = true;

				// Fetch the task.
				PDFConvertTask CT = ConvertionTasks.Last();
				ConvertionTasks.RemoveAt(ConvertionTasks.Num() - 1);

				FOnPDFConverted Callback;
				Callback.BindLambda(
					[this, CT](class UPDF* Asset) -> void {
						if (Asset != nullptr)
						{
							CT.Callback.ExecuteIfBound(Asset);
						}
						IsTaskInExecution = false;
					});

				// Now we can safely work on the task.
				AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [this, CT, Callback] {
					GhostscriptCore->ConvertPdfToPdfAssetRequest(
						Callback,
						CT.ContentPath,
						CT.DPI,
						CT.FirstPage,
						CT.LastPage,
						CT.IsImportIntoEditor);
					});
			}
		}
		TaskMutex.Unlock();
	}
}

void UPDFManager::AddTask(const PDFConvertTask& Task)
{
	TaskMutex.Lock();
	ConvertionTasks.Add(Task);
	TaskMutex.Unlock();
}

void UPDFManager::OnPieWorldEnded(bool bIsSimulating)
{
	ConvertionTasks.Empty();
	IsTaskInExecution = false;
}
