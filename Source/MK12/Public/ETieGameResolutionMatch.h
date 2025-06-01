#pragma once
#include "CoreMinimal.h"
#include "ETieGameResolutionMatch.generated.h"

UENUM(BlueprintType)
enum class ETieGameResolutionMatch : uint8 {
    RandomWinner,
    BestWinner,
    ExtendMatchOvertime = 3,
    ExtendMatchOvertimeNoChoreo,
    FightTimerRules,
};

