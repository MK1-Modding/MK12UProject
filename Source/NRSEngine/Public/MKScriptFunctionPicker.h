#pragma once
#include "CoreMinimal.h"
#include "MKScriptFunctionPicker.generated.h"

USTRUCT(BlueprintType)
struct NRSENGINE_API FMKScriptFunctionPicker {
    GENERATED_BODY()

protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mScriptFunction;
    
public:
    FMKScriptFunctionPicker();
};

