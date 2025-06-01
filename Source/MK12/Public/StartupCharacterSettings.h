#pragma once
#include "CoreMinimal.h"
#include "AugmentModifierDefinition.h"
#include "CharacterDefinition.h"
#include "StartupCharacterSettings.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FStartupCharacterSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterDefinition Character;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 RandomCharacterFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RandomCharacterCustomisation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAugmentModifierDefinition> mAugmentModifiers;
    
public:
    FStartupCharacterSettings();
};

