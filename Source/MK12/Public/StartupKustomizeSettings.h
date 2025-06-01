#pragma once
#include "CoreMinimal.h"
#include "CharacterDefinition.h"
#include "EKustomizeCharacterType.h"
#include "StartupKustomizeSettings.generated.h"

USTRUCT(BlueprintType)
struct FStartupKustomizeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKustomizeCharacterType StartingCharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterDefinition RosterCharacterDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceGearUnlock;
    
    MK12_API FStartupKustomizeSettings();
};

