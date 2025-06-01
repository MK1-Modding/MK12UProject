#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MKInventoryDataTableRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MKINVENTORY_API FMKInventoryDataTableRowHandle : public FDataTableRowHandle {
    GENERATED_BODY()
public:
    FMKInventoryDataTableRowHandle();
};

