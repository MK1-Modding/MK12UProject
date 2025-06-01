#pragma once
#include "CoreMinimal.h"
#include "EStartingTimer.generated.h"

UENUM(BlueprintType)
enum class EStartingTimer : uint8 {
    Default = 90,
    LowTimer = 5,
    InfiniteTimer = 0,
};

