#pragma once
#include "CoreMinimal.h"
#include "BuffPropertySetInitializer.h"
#include "ModifierDefinition.h"
#include "FightEventModifierDefinition.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FFightEventModifierDefinition : public FModifierDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mModifierLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuffPropertySetInitializer> ModifierOverridesList;
    
public:
    FFightEventModifierDefinition();
};

