#pragma once
#include "CoreMinimal.h"
#include "ETieGameResolutionRound.generated.h"

UENUM(BlueprintType)
enum class ETieGameResolutionRound : uint8 {
    RandomWinner,
    BestWinner,
    ExtendMatchOvertime = 3,
    ExtendMatchOvertimeNoChoreo,
    AllowMultipleWinners = 2,
    FightTimerRules = 5,
};

