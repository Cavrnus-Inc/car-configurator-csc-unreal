#pragma once

#include "CoreMinimal.h"
#include "GhostscriptCore.h"

#include "PDFManager.generated.h"

struct PDFConvertTask
{
	FString ContentPath;
	int DPI = 150;
	int FirstPage = 0;
	int LastPage = 0;
	bool IsImportIntoEditor = false;
	FOnPDFConverted Callback;
};

UCLASS()
class CAVRNUSCONNECTOR_API UPDFManager : public UObject
{
	GENERATED_BODY()
public:
	UPDFManager();
	~UPDFManager();

	void Init();
	void Update(float dt);
	void AddTask(const PDFConvertTask& Task);
	void OnPieWorldEnded(bool bIsSimulating);

private:
	TSharedPtr<class FGhostscriptCore> GhostscriptCore;
	TArray<PDFConvertTask> ConvertionTasks;
	FCriticalSection TaskMutex;
	bool IsTaskInExecution;
};

