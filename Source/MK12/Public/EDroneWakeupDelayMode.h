#pragma once
#include "CoreMinimal.h"
#include "EDroneWakeupDelayMode.generated.h"

UENUM(BlueprintType)
enum class EDroneWakeupDelayMode : uint8 {
    OFF,
    ON,
    RANDOM,
    WAKEUP_DELAY_COUNT,
};

