#pragma once
#include "CoreMinimal.h"
#include "MissionRecordingState.h"
#include "MissionRecordingUploadState.h"
#include "MissionRecordingConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FMissionRecordingConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    MissionRecordingState RecordingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    MissionRecordingUploadState UploadState;
    
    MK12_API FMissionRecordingConfiguration();
};

