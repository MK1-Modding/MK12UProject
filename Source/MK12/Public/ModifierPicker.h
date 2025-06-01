#pragma once
#include "CoreMinimal.h"
#include "ModifierPicker.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct MK12_API FModifierPicker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* mModifierStruct;
    
public:
    FModifierPicker();
};

