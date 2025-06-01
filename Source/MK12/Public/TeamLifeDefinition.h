#pragma once
#include "CoreMinimal.h"
#include "LifeResetType.h"
#include "TeamLifeDefinition.generated.h"

USTRUCT(BlueprintType)
struct FTeamLifeDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    LifeResetType mRoundResetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mStartingLifePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxLifePercentage;
    
    MK12_API FTeamLifeDefinition();
};

