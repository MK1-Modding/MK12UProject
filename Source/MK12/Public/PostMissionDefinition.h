#pragma once
#include "CoreMinimal.h"
#include "PostMissionDefinition.generated.h"

USTRUCT(BlueprintType)
struct FPostMissionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAlreadyExecuted;
    
public:
    MK12_API FPostMissionDefinition();
};

