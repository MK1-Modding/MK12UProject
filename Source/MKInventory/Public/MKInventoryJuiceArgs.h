#pragma once
#include "CoreMinimal.h"
#include "MKInventoryDataTableRowHandle.h"
#include "MKInventoryTagGroup.h"
#include "MKInventoryJuiceArgs.generated.h"

USTRUCT(BlueprintType)
struct MKINVENTORY_API FMKInventoryJuiceArgs {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMKInventoryTagGroup> TagGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMKInventoryDataTableRowHandle> ItemHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJuiceAll;
    
public:
    FMKInventoryJuiceArgs();
};

