#pragma once
#include "CoreMinimal.h"
#include "ETieGameResolutionRound.h"
#include "FightWinSettings.h"
#include "FightRoundWinSettings.generated.h"

USTRUCT(BlueprintType)
struct FFightRoundWinSettings : public FFightWinSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETieGameResolutionRound mRoundTieGameResolution;
    
public:
    MK12_API FFightRoundWinSettings();
};

