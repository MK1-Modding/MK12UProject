#pragma once
#include "CoreMinimal.h"
#include "EDroneReversalMode.generated.h"

UENUM(BlueprintType)
enum class EDroneReversalMode : uint8 {
    REVERSAL_OFF,
    REVERSAL_ON,
    REVERSAL_RANDOM,
    REVERSAL_COUNT,
};

