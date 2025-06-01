// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ContentDefinition.generated.h"

/**
 * 
 */
class UObject;

UCLASS(Blueprintable, DefaultConfig, Config = Game)
class MK12_API UContentDefinition : public UPrimaryDataAsset {
	GENERATED_BODY()
public:
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<UObject*> mAssetRefs;

public:
	UContentDefinition();

};
