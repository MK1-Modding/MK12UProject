#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MKInventoryItemDefinition.h"
#include "MKInventoryItemDefinitionReferencer.h"
#include "MKInventoryDataTable.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class MKINVENTORY_API UMKInventoryDataTable : public UDataTable, public IMKInventoryItemDefinitionReferencer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsNetworkRelevant: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayIndex;
    
    UMKInventoryDataTable();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, FMKInventoryItemDefinition> GetDefinitionMap() const;

    // Fix for true pure virtual functions not being implemented
};

