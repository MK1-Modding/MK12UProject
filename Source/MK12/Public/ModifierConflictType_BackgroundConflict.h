#pragma once
#include "CoreMinimal.h"
#include "ModifierConflictType.h"
#include "ModifierConflictType_BackgroundConflict.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FModifierConflictType_BackgroundConflict : public FModifierConflictType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> mBackgrounds;
    
public:
    FModifierConflictType_BackgroundConflict();
};

