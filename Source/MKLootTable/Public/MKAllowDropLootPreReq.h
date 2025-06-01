#pragma once
#include "CoreMinimal.h"
#include "MKLootDropItemPrerequisite.h"
#include "MKAllowDropLootPreReq.generated.h"

USTRUCT(BlueprintType)
struct FMKAllowDropLootPreReq : public FMKLootDropItemPrerequisite {
    GENERATED_BODY()
public:
    MKLOOTTABLE_API FMKAllowDropLootPreReq();
};

