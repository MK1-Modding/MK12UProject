#pragma once
#include "CoreMinimal.h"
#include "CinemaCameraData.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct MK12_API FCinemaCameraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> CameraCinemas;
    
    FCinemaCameraData();
};

