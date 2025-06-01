// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetTypeActions_MKScriptAsset.h"
#include "MKScriptAsset.h"

UClass* FAssetTypeActions_MKScriptAsset::GetSupportedClass() const
{
    return UMKScriptAsset::StaticClass();
}

uint32 FAssetTypeActions_MKScriptAsset::GetCategories()
{
    return EAssetTypeCategories::Misc;
}