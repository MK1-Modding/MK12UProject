#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MKLootTable.h"
#include "MKLootTableAsset.generated.h"

UCLASS(Blueprintable)
class MKLOOTTABLE_API UMKLootTableAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKLootTable mLootTable;
    
public:
    UMKLootTableAsset();

};

