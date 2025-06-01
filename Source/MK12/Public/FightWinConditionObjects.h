#pragma once
#include "CoreMinimal.h"
#include "FightWinInstance.h"
#include "FightWinConditionObjects.generated.h"

USTRUCT(BlueprintType)
struct FFightWinConditionObjects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFightWinInstance> mWinConditions;
    
    MK12_API FFightWinConditionObjects();
};

