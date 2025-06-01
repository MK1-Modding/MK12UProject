#pragma once
#include "CoreMinimal.h"
#include "FightingTeamCompositionV2.h"
#include "MainCharacterDefinition.h"
#include "EnduranceTeamCompositionV2.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FEnduranceTeamCompositionV2 : public FFightingTeamCompositionV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMainCharacterDefinition> mMainCharacters;
    
    FEnduranceTeamCompositionV2();
};

