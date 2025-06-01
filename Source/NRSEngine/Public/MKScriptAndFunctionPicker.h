#pragma once
#include "CoreMinimal.h"
#include "MKScriptAndFunctionPickerBase.h"
#include "MKScriptPicker.h"
#include "MKScriptAndFunctionPicker.generated.h"

USTRUCT(BlueprintType)
struct NRSENGINE_API FMKScriptAndFunctionPicker : public FMKScriptAndFunctionPickerBase {
    GENERATED_BODY()

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKScriptPicker mScript;
    
public:
    FMKScriptAndFunctionPicker();
};

