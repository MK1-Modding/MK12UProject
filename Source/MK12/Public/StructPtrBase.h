#pragma once
#include "CoreMinimal.h"
#include "StructPtrBase.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct MK12_API FStructPtrBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* ScriptStruct;
    
public:
    FStructPtrBase();
};

