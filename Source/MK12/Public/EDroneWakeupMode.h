#pragma once
#include "CoreMinimal.h"
#include "EDroneWakeupMode.generated.h"

UENUM(BlueprintType)
enum class EDroneWakeupMode : uint8 {
    WAKEUP_OFF,
    WAKEUP_ON,
    WAKEUP_RANDOM,
    WAKEUP_COUNT,
};

