#pragma once
#include "CoreMinimal.h"
#include "MKScriptFunctionPicker.h"
#include "MKScriptAndFunctionPickerBase.generated.h"

USTRUCT(BlueprintType)
struct NRSENGINE_API FMKScriptAndFunctionPickerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKScriptFunctionPicker mFunction;
    
public:
    FMKScriptAndFunctionPickerBase();
};

