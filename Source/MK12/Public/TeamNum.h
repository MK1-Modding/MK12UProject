#pragma once
#include "CoreMinimal.h"
#include "TeamNum.generated.h"

UENUM(BlueprintType)
enum class TeamNum : uint8 {
    Team1,
    Team2,
    MaxTeams,
    InvalidTeamNum = 255,
};

