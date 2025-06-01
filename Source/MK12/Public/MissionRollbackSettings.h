#pragma once
#include "CoreMinimal.h"
#include "MissionRollbackState.h"
#include "MissionRollbackSettings.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FMissionRollbackSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    MissionRollbackState mInitialRollbackState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mShouldWaitForDisabledRollbacks;
    
public:
    FMissionRollbackSettings();
};

