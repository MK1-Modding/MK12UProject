#pragma once
#include "CoreMinimal.h"
#include "AIDefinition.h"
#include "EStartingLife.h"
#include "ETeamType.h"
#include "EnduranceTeamCompositionV2.h"
#include "KameoTeamCompositionV2.h"
#include "SingleCharacterTeamCompositionV2.h"
#include "StartupCharacterSettings.h"
#include "TYMTeamComposition.h"
#include "TagTeamCompositionV2.h"
#include "TeamModifierDefinition.h"
#include "StartupTeamSettings.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct MK12_API FStartupTeamSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    UScriptStruct* CompositionPicker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKameoTeamCompositionV2 KameoTeamComposition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTagTeamCompositionV2 TagTeamComposition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnduranceTeamCompositionV2 EnduranceTeamComposition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSingleCharacterTeamCompositionV2 SingleCharacterTeamComposition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTYMTeamComposition TYMTeamComposition;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 TeamFlags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 CharacterFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStartingLife StartingLife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomStartingLifePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CriticalHitsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDefinition mAIDroneSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplySpecialCharacterOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTeamModifierDefinition> mTeamModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStartupCharacterSettings> mStartupCharacters;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamType TeamType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UScriptStruct* KameoStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UScriptStruct* TagStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UScriptStruct* EnduranceStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UScriptStruct* SingleStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UScriptStruct* TYMStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UScriptStruct* DefaultStruct;
    
public:
    FStartupTeamSettings();
};

