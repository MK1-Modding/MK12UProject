#pragma once
#include "CoreMinimal.h"
#include "MKLootDropItemPrerequisitePicker.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct MKLOOTTABLE_API FMKLootDropItemPrerequisitePicker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* mPreReqStruct;
    
public:
    FMKLootDropItemPrerequisitePicker();
};

