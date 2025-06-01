// Fill out your copyright notice in the Description page of Project Settings.

#if WITH_EDITOR

#include "MKScriptAssetFactory.h"
#include "MKScriptAsset.h"

UMKScriptAssetFactory::UMKScriptAssetFactory()
{
    bCreateNew = true;
    bEditAfterNew = true;
    SupportedClass = UMKScriptAsset::StaticClass();
}

UObject* UMKScriptAssetFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName Name,
    EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
    return NewObject<UMKScriptAsset>(InParent, InClass, Name, Flags);
}

#endif