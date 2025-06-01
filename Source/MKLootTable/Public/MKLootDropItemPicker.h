#pragma once
#include "CoreMinimal.h"
#include "MKLootDropItemPicker.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct MKLOOTTABLE_API FMKLootDropItemPicker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* mLootStruct;
    
public:
    FMKLootDropItemPicker();
};

