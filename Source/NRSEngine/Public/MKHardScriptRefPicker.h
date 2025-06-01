#pragma once
#include "CoreMinimal.h"
#include "MKHardScriptRefPicker.generated.h"

class UMKScriptAsset;

USTRUCT(BlueprintType)
struct NRSENGINE_API FMKHardScriptRefPicker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKScriptAsset* mScriptAsset;
    
public:
    FMKHardScriptRefPicker();
};

