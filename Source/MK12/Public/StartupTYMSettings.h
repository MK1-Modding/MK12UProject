#pragma once
#include "CoreMinimal.h"
#include "TYMResultOverride.h"
#include "StartupTYMSettings.generated.h"

class ATYMBreakable;
class ULevelSequence;

USTRUCT(BlueprintType)
struct FStartupTYMSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mTimeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InfiniteTimer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mTimeToStrikeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATYMBreakable> BreakableObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableBreakableOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ULevelSequence>> mDeathSequence;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TYMResultOverride mOverrideResult;
    
    MK12_API FStartupTYMSettings();
};

