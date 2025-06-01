// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MirrorPolicy.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew, Within = MirrorComponent)
class MIRRORING_API UMirrorPolicy : public UObject
{
	GENERATED_BODY()
	

public:
	UMirrorPolicy();
};
