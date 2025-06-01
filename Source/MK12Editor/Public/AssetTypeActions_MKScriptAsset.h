// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"

/**
 * 
 */
class MK12EDITOR_API FAssetTypeActions_MKScriptAsset : public FAssetTypeActions_Base
{
public:
    virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "FAssetTypeActions_MKScriptAsset", "MK Script Asset"); }
    virtual FColor GetTypeColor() const override { return FColor(52, 152, 219); }
    virtual UClass* GetSupportedClass() const override;
    virtual uint32 GetCategories() override;
    virtual bool HasActions(const TArray<UObject*>& InObjects) const override { return false; }
};
