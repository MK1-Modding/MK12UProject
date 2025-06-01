#pragma once
#include "CoreMinimal.h"
#include "ETieGameResolution.generated.h"

UENUM(BlueprintType)
enum class ETieGameResolution : uint8 {
    RandomWinner,
    BestWinner,
    AllowMultipleWinners,
    ExtendMatchOvertime,
    ExtendMatchOvertimeNoChoreo,
    FightTimerRules,
};

