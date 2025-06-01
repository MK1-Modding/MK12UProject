#pragma once
#include "CoreMinimal.h"
#include "EAIDifficultyLevel.generated.h"

UENUM(BlueprintType)
enum class EAIDifficultyLevel : uint8 {
    Level_0,
    Level_1,
    Level_2,
    Level_3,
    Level_4,
    Level_5,
    Level_6,
    Level_7,
    Level_8,
    Level_9,
    Level_10,
    Level_11,
    Level_12,
    Level_13,
    Level_14,
    Level_15,
    Level_16,
    Level_17,
    Level_18,
    Level_19,
    Level_Count,
    Max = Level_19,
    Invalid = Level_Count,
    Default = Level_5,
};

