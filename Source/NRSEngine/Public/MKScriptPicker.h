#pragma once
#include "CoreMinimal.h"
#include "MKScriptPicker.generated.h"

class UMKScriptAsset;

USTRUCT(BlueprintType)
struct NRSENGINE_API FMKScriptPicker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMKScriptAsset> mScriptAsset;
    
public:
    FMKScriptPicker();
};

