#pragma once
#include "CoreMinimal.h"
#include "SeamlessTransitionSettings.generated.h"

USTRUCT(BlueprintType)
struct FSeamlessTransitionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowNightAndRainLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PauseForeverAfterTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoopThroughArenaSelectDialogues;
    
    MK12_API FSeamlessTransitionSettings();
};

