#pragma once
#include "CoreMinimal.h"
#include "ETieGameResolutionMatch.h"
#include "FightWinSettings.h"
#include "FightMatchWinSettings.generated.h"

USTRUCT(BlueprintType)
struct FFightMatchWinSettings : public FFightWinSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETieGameResolutionMatch mMatchTieGameResolution;
    
public:
    MK12_API FFightMatchWinSettings();
};

