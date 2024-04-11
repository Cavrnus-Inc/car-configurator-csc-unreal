#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogCavrnusConnector, Log, All);

class CAVRNUSCONNECTOR_API FCavrnusConnectorModule : public IModuleInterface
{
private:

public:

	// Called when module is loaded in memory
	FCavrnusConnectorModule();
	~FCavrnusConnectorModule() override;

	/** IModuleInterface implementation */
	// Called when module is ready to start
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;


};

DEFINE_LOG_CATEGORY_STATIC(CavrnusRelayModule, Log, All);