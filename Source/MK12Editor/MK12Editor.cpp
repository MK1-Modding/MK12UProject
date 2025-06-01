// Fill out your copyright notice in the Description page of Project Settings.

#include "MK12Editor.h"
#include "IAssetTools.h"
#include "AssetToolsModule.h"
#include "AssetTypeActions_MKScriptAsset.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_MODULE( FMK12EditorModule, MK12Editor);


void FMK12EditorModule::StartupModule()
{
    UE_LOG(LogTemp, Log, TEXT("MK12Editor module has started!"));

    IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
    MKScriptAssetActions = MakeShareable(new FAssetTypeActions_MKScriptAsset());
    AssetTools.RegisterAssetTypeActions(MKScriptAssetActions.ToSharedRef());
}

void FMK12EditorModule::ShutdownModule()
{
    UE_LOG(LogTemp, Log, TEXT("MK12Editor module has shut down!"));

    if (FModuleManager::Get().IsModuleLoaded("AssetTools") && MKScriptAssetActions.IsValid())
    {
        IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
        AssetTools.UnregisterAssetTypeActions(MKScriptAssetActions.ToSharedRef());
    }
}

