#pragma once
#include "CoreMinimal.h"
#include "ModifierConflictType.h"
#include "ModifierConflictType_ModifierConflict.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FModifierConflictType_ModifierConflict : public FModifierConflictType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> mModifiers;
    
public:
    FModifierConflictType_ModifierConflict();
};

