#pragma once
#include "CoreMinimal.h"
#include "CharacterDefinition.h"
#include "ETeamType.h"
#include "TeamLifeDefinition.h"
#include "TeamNum.h"
#include "TeamDefinition.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FTeamDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterDefinition> mCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamLifeDefinition mLifeSettings;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamType mType;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mStartupFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TeamNum mLeftSideTeam;
    
public:
    FTeamDefinition();
};

