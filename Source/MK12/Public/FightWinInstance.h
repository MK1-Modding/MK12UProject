#pragma once
#include "CoreMinimal.h"
#include "ETeamNumSelector.h"
#include "ETieGameResolution.h"
#include "FightWinConditionPtr.h"
#include "FightWinInstance.generated.h"

USTRUCT(BlueprintType)
struct FFightWinInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFightWinConditionPtr mWinCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamNumSelector mApplicableTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETieGameResolution mTieGameResolution;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mPriority;
    
    MK12_API FFightWinInstance();
};

