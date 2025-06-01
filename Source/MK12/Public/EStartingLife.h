#pragma once
#include "CoreMinimal.h"
#include "EStartingLife.generated.h"

UENUM(BlueprintType)
enum class EStartingLife : uint8 {
    Default,
    LowLife,
    TenLife = 10,
    QuarterLife = 25,
    ThirtyLife = 30,
    HalfLife = 50,
    Custom = 255,
};

