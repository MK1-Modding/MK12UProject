#pragma once
#include "CoreMinimal.h"
#include "FightingTeamCompositionV2.h"
#include "MainCharacterDefinition.h"
#include "TagTeamCompositionV2.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FTagTeamCompositionV2 : public FFightingTeamCompositionV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMainCharacterDefinition mInitialCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMainCharacterDefinition mPartnerCharacter;
    
    FTagTeamCompositionV2();
};

