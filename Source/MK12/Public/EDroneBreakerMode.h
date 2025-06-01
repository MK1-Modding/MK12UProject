#pragma once
#include "CoreMinimal.h"
#include "EDroneBreakerMode.generated.h"

UENUM(BlueprintType)
enum class EDroneBreakerMode : uint8 {
    BREAKER_OFF,
    BREAKER_ON,
    BREAKER_RANDOM,
    MOVE_COUNT,
};

