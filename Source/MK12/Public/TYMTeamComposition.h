#pragma once
#include "CoreMinimal.h"
#include "TYMCharacterDefinition.h"
#include "TeamCompositionV2.h"
#include "TYMTeamComposition.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FTYMTeamComposition : public FTeamCompositionV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTYMCharacterDefinition mCharacter;
    
    FTYMTeamComposition();
};

