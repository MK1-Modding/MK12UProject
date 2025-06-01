#pragma once
#include "CoreMinimal.h"
#include "OnlineModeType.h"
#include "OnlineStatsType.h"
#include "StartupOnlineKothSettings.h"
#include "StartupOnlineMatchupSettings.h"
#include "StartupOnlineSeasonSettings.h"
#include "StartupOnlineSettings.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FStartupOnlineSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    OnlineModeType Mode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    OnlineStatsType StatsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool QuickMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDebugButtonMasherForLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableAutoStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FastMatchmaking;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ReadyUpTimerOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupOnlineMatchupSettings Matchup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupOnlineKothSettings Koth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupOnlineSeasonSettings Seasons;
    
    FStartupOnlineSettings();
};

