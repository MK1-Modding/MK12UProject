#pragma once
#include "CoreMinimal.h"
#include "MKInventoryTagGroup.generated.h"

USTRUCT(BlueprintType)
struct MKINVENTORY_API FMKInventoryTagGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    FMKInventoryTagGroup();
};

