//Copyright 2024 P.Kallisto SKG

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FRTuneModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

};
