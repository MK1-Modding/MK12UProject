#pragma once
#include "CoreMinimal.h"
#include "MKHardScriptRefPicker.h"
#include "MKScriptAndFunctionPickerBase.h"
#include "MKHardScriptRefAndFunctionPicker.generated.h"

USTRUCT(BlueprintType)
struct NRSENGINE_API FMKHardScriptRefAndFunctionPicker : public FMKScriptAndFunctionPickerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKHardScriptRefPicker mScript;
    
public:
    FMKHardScriptRefAndFunctionPicker();
};

