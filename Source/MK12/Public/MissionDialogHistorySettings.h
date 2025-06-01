#pragma once
#include "CoreMinimal.h"
#include "MissionDialogHistorySettings.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FMissionDialogHistorySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseDialogHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mSaveDialogHistory;
    
    FMissionDialogHistorySettings();
};

