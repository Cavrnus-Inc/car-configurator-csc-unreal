#include "GhostscriptCore.h"
#include "PDF.h"
#include "Engine/Texture2D.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "GenericPlatform/GenericPlatformProcess.h"
#include "HAL/FileManager.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "IImageWrapperModule.h"
#include "IImageWrapper.h"
#include "Interfaces/IPluginManager.h"
#include "TextureResource.h"
#include "UObject/SavePackage.h"

#if PLATFORM_WINDOWS
	#include "Windows/AllowWindowsPlatformTypes.h"
	#include <stringapiset.h>
	#include "Windows/HideWindowsPlatformTypes.h"
#endif
#include <thread>
#include <Async/Async.h>

FGhostscriptCore::FGhostscriptCore()
{
	FString ProjectPath = FPaths::ProjectPluginsDir() / TEXT("CavrnusConnector");
	FString EnginePath = FPaths::EnginePluginsDir() / TEXT("Marketplace") / TEXT("CavrnusConnector");

	FString GhostscriptDllPath;

	if (IFileManager::Get().DirectoryExists(*ProjectPath))
	{
		GhostscriptDllPath = FPaths::Combine(ProjectPath, TEXT("Source"), TEXT("PDFImporter"), TEXT("ThirdParty"));
	}
	else
	{
		GhostscriptDllPath = FPaths::Combine(EnginePath, TEXT("Source"), TEXT("PDFImporter"), TEXT("ThirdParty"));
	}
#ifdef _WIN64
	GhostscriptDllPath = FPaths::Combine(GhostscriptDllPath, TEXT("Win64"));
#elif _WIN32
	GhostscriptDllPath = FPaths::Combine(GhostscriptDllPath, TEXT("Win32"));
#endif
	GhostscriptDllPath = FPaths::Combine(GhostscriptDllPath, TEXT("gsdll.dll"));

	// PagesDirectoryPath = FPaths::ConvertRelativePathToFull(FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("PDFImporter"))->GetBaseDir(), TEXT("Content")));

	GhostscriptModule = FPlatformProcess::GetDllHandle(*GhostscriptDllPath);
	if (GhostscriptModule == nullptr)
	{
		UE_LOG(PDFImporter, Fatal, TEXT("Failed to load Ghostscript module"));
	}

	CreateInstance = (CreateAPIInstance)FPlatformProcess::GetDllExport(GhostscriptModule, TEXT("gsapi_new_instance"));
	DeleteInstance = (DeleteAPIInstance)FPlatformProcess::GetDllExport(GhostscriptModule, TEXT("gsapi_delete_instance"));
	Init = (InitAPI)FPlatformProcess::GetDllExport(GhostscriptModule, TEXT("gsapi_init_with_args"));
	Exit = (ExitAPI)FPlatformProcess::GetDllExport(GhostscriptModule, TEXT("gsapi_exit"));
	if (CreateInstance == nullptr || DeleteInstance == nullptr || Init == nullptr || Exit == nullptr)
	{
		UE_LOG(PDFImporter, Fatal, TEXT("Failed to get Ghostscript function pointer"));
	}

	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG);

	UE_LOG(PDFImporter, Log, TEXT("Ghostscrip dll loaded"));
}

FGhostscriptCore::~FGhostscriptCore()
{
	FPlatformProcess::FreeDllHandle(GhostscriptModule);
	UE_LOG(PDFImporter, Log, TEXT("Ghostscript dll unloaded"));
}

void FGhostscriptCore::ConvertPdfToPdfAssetRequest(FOnPDFConverted Callback, const FString& InputPath, int Dpi, int FirstPage, int LastPage, bool bIsImportIntoEditor)
{
	IFileManager& FileManager = IFileManager::Get();

	if (!FileManager.FileExists(*InputPath))
	{
		UE_LOG(PDFImporter, Error, TEXT("File not found : %s"), *InputPath);
		Callback.ExecuteIfBound(nullptr);
		return;
	}

	ConvertPdfToJpeg(Callback, InputPath, Dpi, FirstPage, LastPage);
}

void FGhostscriptCore::ConvertPdfToJpeg(FOnPDFConverted Callback, const FString& InputPath, int Dpi, int FirstPage, int LastPage)
{
	if (!(FirstPage > 0 && LastPage > 0 && FirstPage <= LastPage))
	{
		FirstPage = 1;
		LastPage = INT_MAX;
	}

	IFileManager& FileManager = IFileManager::Get();

	FString TempDir = FPaths::GetPath(InputPath);
	if (!FileManager.DirectoryExists(*TempDir))
	{
		UE_LOG(PDFImporter, Error, TEXT("Temp folder \"%s\" does not exist"), *TempDir);
		return;
	}

	FString OutputPath = FPaths::Combine(TempDir, FPaths::GetBaseFilename(InputPath) + TEXT("%010d.jpg"));

	TArray<char> FirstPageBuffer = FStringToCharPtr(FString(TEXT("-dFirstPage=") + FString::FromInt(FirstPage)));
	TArray<char> LastPageBuffer = FStringToCharPtr(FString(TEXT("-dLastPage=") + FString::FromInt(LastPage)));
	TArray<char> DpiXBuffer = FStringToCharPtr(FString(TEXT("-dDEVICEXRESOLUTION=") + FString::FromInt(Dpi)));
	TArray<char> DpiYBuffer = FStringToCharPtr(FString(TEXT("-dDEVICEYRESOLUTION=") + FString::FromInt(Dpi)));
	TArray<char> OutputPathBuffer = FStringToCharPtr(FString(TEXT("-sOutputFile=") + OutputPath));
	TArray<char> InputPathBuffer = FStringToCharPtr(InputPath);

	const char* Args[] = {
		"-q",
		"-dQUIET",

		"-dPARANOIDSAFER",
		"-dBATCH",
		"-dNOPAUSE",
		"-dNOPROMPT",
		"-dMaxBitmap=500000000",
		"-dNumRenderingThreads=4",

		"-dAlignToPixels=0",
		"-dGridFitTT=0",
		"-dTextAlphaBits=4",
		"-dGraphicsAlphaBits=4",

		"-sDEVICE=jpeg",
		"-sPAPERSIZE=a7",

		FirstPageBuffer.GetData(),
		LastPageBuffer.GetData(),
		DpiXBuffer.GetData(),
		DpiYBuffer.GetData(),
		OutputPathBuffer.GetData(),
		InputPathBuffer.GetData()
	};
	int numArgs = sizeof(Args) / sizeof(const char*);

	if (GhostscriptInstance == nullptr)
	{
		CreateInstance(&GhostscriptInstance, 0);
	}

	if (GhostscriptInstance != nullptr)
	{
		int Result = Init(GhostscriptInstance, numArgs, (char**)Args);

		Exit(GhostscriptInstance);
		DeleteInstance(GhostscriptInstance);
		GhostscriptInstance = nullptr;

		UE_LOG(PDFImporter, Log, TEXT("Ghostscript Return Code : %d"), Result);

		ConvertingFinished(Callback, TempDir, Dpi, FirstPage, LastPage);
	}
	else
	{
		UE_LOG(PDFImporter, Error, TEXT("Failed to create Ghostscript instance"));
		Callback.ExecuteIfBound(nullptr);
	}
}

void FGhostscriptCore::ConvertingFinished(FOnPDFConverted Callback, const FString& TempDirPath, int Dpi, int FirstPage, int LastPage)
{
	// Do the texture creation in game thread.
	AsyncTask(ENamedThreads::GameThread, [this, Callback, TempDirPath, Dpi, FirstPage, LastPage]() mutable {
		TArray<UTexture2D*> Buffer;
		TArray<FString> PageNames;
		IFileManager::Get().FindFiles(PageNames, *TempDirPath, L"jpg");

		UTexture2D* TextureTemp;
		for (const FString& PageName : PageNames)
		{
			bool bResult = LoadTexture2DFromFile(FPaths::Combine(TempDirPath, PageName), TextureTemp);
			if (bResult)
			{
				Buffer.Add(TextureTemp);
			}
		}

		UPDF* PDFAsset = NewObject<UPDF>();

		if (FirstPage <= 0 || LastPage <= 0 || FirstPage > LastPage)
		{
			FirstPage = 1;
			LastPage = Buffer.Num();
		}

		PDFAsset->PageRange = FPageRange(FirstPage, LastPage);
		PDFAsset->Dpi = Dpi;
		PDFAsset->Pages = Buffer;

		Callback.ExecuteIfBound(PDFAsset);
	});
}

bool FGhostscriptCore::LoadTexture2DFromFile(const FString& FilePath, class UTexture2D*& LoadedTexture)
{
	TArray<uint8> RawFileData;
	if (FFileHelper::LoadFileToArray(RawFileData, *FilePath) && ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
	{
		TArray<uint8> UncompressedRawData;
		if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedRawData))
		{
			UTexture2D* NewTexture = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);
			if (!NewTexture)
			{
				return false;
			}

			void* TextureData = NewTexture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			FMemory::Memcpy(TextureData, UncompressedRawData.GetData(), UncompressedRawData.Num());
			NewTexture->GetPlatformData()->Mips[0].BulkData.Unlock();
			NewTexture->UpdateResource();

			LoadedTexture = NewTexture;

			return true;
		}
	}

	return false;
}

#if WITH_EDITORONLY_DATA
bool FGhostscriptCore::CreateTextureAssetFromFile(const FString& FilePath, class UTexture2D*& LoadedTexture)
{
	TArray<uint8> RawFileData;
	if (FFileHelper::LoadFileToArray(RawFileData, *FilePath))
	{
		TArray<uint8> UncompressedRawData;
		if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()) && ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedRawData))
		{
			FString Filename = FPaths::GetBaseFilename(FilePath);
			Filename = Filename.Left(Filename.Len() - 10);
			int Width = ImageWrapper->GetWidth();
			int Height = ImageWrapper->GetHeight();

			FString PackagePath(TEXT("/PDFImporter/") + Filename + TEXT("/"));
			FString AbsolutePackagePath = PagesDirectoryPath + TEXT("/") + Filename + TEXT("/");

			FPackageName::RegisterMountPoint(PackagePath, AbsolutePackagePath);

			PackagePath += Filename;

			UPackage* Package = CreatePackage(*PackagePath);
			Package->FullyLoad();

			FName TextureName = MakeUniqueObjectName(Package, UTexture2D::StaticClass(), FName(*Filename));
			UTexture2D* NewTexture = NewObject<UTexture2D>(Package, TextureName, RF_Public | RF_Standalone);

			NewTexture->SetPlatformData(new FTexturePlatformData());
			NewTexture->GetPlatformData()->SizeX = Width;
			NewTexture->GetPlatformData()->SizeY = Height;
			NewTexture->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;
			NewTexture->NeverStream = false;

			FTexture2DMipMap* Mip = new FTexture2DMipMap();
			NewTexture->GetPlatformData()->Mips.Add(Mip);
			Mip->SizeX = Width;
			Mip->SizeY = Height;
			Mip->BulkData.Lock(LOCK_READ_WRITE);
			uint8* TextureData = (uint8*)Mip->BulkData.Realloc(UncompressedRawData.Num());
			FMemory::Memcpy(TextureData, UncompressedRawData.GetData(), UncompressedRawData.Num());
			Mip->BulkData.Unlock();

			NewTexture->AddToRoot();
			NewTexture->Source.Init(Width, Height, 1, 1, ETextureSourceFormat::TSF_BGRA8, UncompressedRawData.GetData());
			NewTexture->UpdateResource();

			Package->MarkPackageDirty();
			FAssetRegistryModule::AssetCreated(NewTexture);
			LoadedTexture = NewTexture;

			FString PackageFilename = FPackageName::LongPackageNameToFilename(PackagePath, FPackageName::GetAssetPackageExtension());
			FSavePackageArgs saveArgs;
			saveArgs.TopLevelFlags = RF_Public | RF_Standalone;
			saveArgs.bForceByteSwapping = true;
			saveArgs.SaveFlags = SAVE_NoError;
			return UPackage::SavePackage(Package, NewTexture, *PackageFilename, saveArgs);
		}
	}

	return false;
}
#endif

TArray<char> FGhostscriptCore::FStringToCharPtr(const FString& Text)
{
	int Size = GetFStringSize(Text) + 1;
	TArray<char> Buffer("", Size);
	WideCharToMultiByte(CP_ACP, 0, *Text, Size, Buffer.GetData(), Buffer.Num(), NULL, NULL);
	return Buffer;
}

int FGhostscriptCore::GetFStringSize(const FString& InString)
{
	int Size = 0;

	for (TCHAR Char : InString)
	{
		const char* Temp = TCHAR_TO_UTF8(*FString::Chr(Char));
		uint8 Code = static_cast<uint8>(*Temp);

		if ((Code >= 0x00) && (Code <= 0x7f))
		{
			Size += 1;
		}
		else if ((Code >= 0xc2) && (Code <= 0xdf))
		{
			Size += 2;
		}
		else if ((Code >= 0xe0) && (Code <= 0xef))
		{
			Size += 3;
		}
		else if ((Code >= 0xf0) && (Code <= 0xf7))
		{
			Size += 4;
		}
		else if ((Code >= 0xf8) && (Code <= 0xfb))
		{
			Size += 5;
		}
		else if ((Code >= 0xfc) && (Code <= 0xfd))
		{
			Size += 6;
		}
	}

	return Size;
}
