#pragma once
#include "CoreMinimal.h"
#include "MKInventoryItemDefinitionGroupWithAsset.generated.h"

USTRUCT(BlueprintType)
struct FMKInventoryItemDefinitionGroupWithAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AssetPath;
    
    MKINVENTORY_API FMKInventoryItemDefinitionGroupWithAsset();
};

