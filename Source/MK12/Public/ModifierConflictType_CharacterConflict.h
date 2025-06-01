#pragma once
#include "CoreMinimal.h"
#include "ModifierConflictType.h"
#include "ModifierConflictType_CharacterConflict.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FModifierConflictType_CharacterConflict : public FModifierConflictType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> mCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> mKameos;
    
public:
    FModifierConflictType_CharacterConflict();
};

