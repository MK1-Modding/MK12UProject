#pragma once
#include "CoreMinimal.h"
#include "UDEPRECATED_FightingTeamComposition.h"
#include "KameoCharacterDefinition.h"
#include "MainCharacterDefinition.h"
#include "KameoTeamComposition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MK12_API UDEPRECATED_KameoTeamComposition : public UDEPRECATED_FightingTeamComposition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMainCharacterDefinition mMainCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKameoCharacterDefinition mKameoCharacter;
    
    UDEPRECATED_KameoTeamComposition();

};

