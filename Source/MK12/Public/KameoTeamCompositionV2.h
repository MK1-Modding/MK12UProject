#pragma once
#include "CoreMinimal.h"
#include "FightingTeamCompositionV2.h"
#include "KameoCharacterDefinition.h"
#include "MainCharacterDefinition.h"
#include "KameoTeamCompositionV2.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FKameoTeamCompositionV2 : public FFightingTeamCompositionV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMainCharacterDefinition mMainCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKameoCharacterDefinition mKameoCharacter;
    
    FKameoTeamCompositionV2();
};

