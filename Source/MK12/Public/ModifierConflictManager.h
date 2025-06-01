#pragma once
#include "CoreMinimal.h"
#include "ModifierConflictType_BackgroundConflict.h"
#include "ModifierConflictType_CharacterConflict.h"
#include "ModifierConflictType_ModifierConflict.h"
#include "ModifierConflictManager.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FModifierConflictManager {
    GENERATED_BODY()

private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModifierConflictType_CharacterConflict CharacterConflicts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModifierConflictType_BackgroundConflict BackgroundConflicts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModifierConflictType_ModifierConflict ModifierConflicts;
    
public:
    FModifierConflictManager();
};

