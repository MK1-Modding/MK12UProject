// Fill out your copyright notice in the Description page of Project Settings.

#if WITH_EDITOR

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "MKScriptAsset.h"
#include "MKScriptAssetFactory.generated.h"

/**
 * 
 */
UCLASS()
class MK12EDITOR_API UMKScriptAssetFactory : public UFactory
{
	GENERATED_BODY()

public:
    UMKScriptAssetFactory();

    virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName Name, EObjectFlags Flags,
        UObject* Context, FFeedbackContext* Warn) override;

    virtual bool ShouldShowInNewMenu() const override { return true; }
	
};

#endif