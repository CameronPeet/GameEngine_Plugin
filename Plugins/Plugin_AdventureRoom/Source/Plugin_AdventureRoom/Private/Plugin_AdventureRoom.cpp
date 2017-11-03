// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Plugin_AdventureRoom.h"
#include "Plugin_AdventureRoomPCH.h"

DEFINE_LOG_CATEGORY(ModuleLog)

#define LOCTEXT_NAMESPACE "FPlugin_AdventureRoomModule"

FPlugin_AdventureRoomModule::FPlugin_AdventureRoomModule() {

}

void FPlugin_AdventureRoomModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	UE_LOG(ModuleLog, Warning, TEXT("Plugin Started!"));
}

void FPlugin_AdventureRoomModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	UE_LOG(ModuleLog, Warning, TEXT("Plugin Ended!"));
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FPlugin_AdventureRoomModule, Plugin_AdventureRoom)