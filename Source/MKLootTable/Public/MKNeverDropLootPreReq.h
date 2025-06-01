#pragma once
#include "CoreMinimal.h"
#include "MKLootDropItemPrerequisite.h"
#include "MKNeverDropLootPreReq.generated.h"

USTRUCT(BlueprintType)
struct FMKNeverDropLootPreReq : public FMKLootDropItemPrerequisite {
    GENERATED_BODY()
public:
    MKLOOTTABLE_API FMKNeverDropLootPreReq();
};

