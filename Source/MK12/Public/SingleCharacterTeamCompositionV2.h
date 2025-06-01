#pragma once
#include "CoreMinimal.h"
#include "FightingTeamCompositionV2.h"
#include "MainCharacterDefinition.h"
#include "SingleCharacterTeamCompositionV2.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FSingleCharacterTeamCompositionV2 : public FFightingTeamCompositionV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMainCharacterDefinition mCharacter;
    
    FSingleCharacterTeamCompositionV2();
};

