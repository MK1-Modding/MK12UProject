#pragma once
#include "CoreMinimal.h"
#include "EnduranceTeamCompositionV2.h"
#include "FightingTeamConfiguration.h"
#include "KameoTeamCompositionV2.h"
#include "PermanentCharacterStats.h"
#include "SingleCharacterTeamCompositionV2.h"
#include "TagTeamCompositionV2.h"
#include "TeamDefinitionV2.h"
#include "TeamLifeDefinition.h"
#include "TeamModifierDefinition.h"
#include "FightingTeamDefinition.generated.h"

class UDEPRECATED_FightingTeamComposition;
class UScriptStruct;

UCLASS(Blueprintable, EditInlineNew)
class MK12_API UFightingTeamDefinition : public UTeamDefinitionV2, public IFightingTeamConfiguration {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    UScriptStruct* mCompositionPicker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKameoTeamCompositionV2 mKameoTeamComposition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTagTeamCompositionV2 mTagTeamComposition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnduranceTeamCompositionV2 mEnduranceTeamComposition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSingleCharacterTeamCompositionV2 mSingleCharacterTeamComposition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UDEPRECATED_FightingTeamComposition* mTeamComposition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTeamModifierDefinition> mTeamModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamLifeDefinition mLifeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeamCritEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mStartingSuperMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideStartingSuperMeter;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mStartupFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPermanentCharacterStats> OpponentMorphCharStats;
    
public:
    UFightingTeamDefinition();

};

