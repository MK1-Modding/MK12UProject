#pragma once
#include "CoreMinimal.h"
#include "EMusicPhaseIntensity.h"
#include "StartupMissionMusicSettings.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FStartupMissionMusicSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMusicPhaseIntensity PhaseIntensityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> MusicOverride;
    
    MK12_API FStartupMissionMusicSettings();
};

