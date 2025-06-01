#pragma once
#include "CoreMinimal.h"
#include "ETeamNumSelector.h"
#include "FightWinConditionPtr.h"
#include "FightWinSettings.generated.h"

USTRUCT(BlueprintType)
struct FFightWinSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamNumSelector mApplicableTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFightWinConditionPtr WinCondition;
    
    MK12_API FFightWinSettings();
};

