#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SkinFilterEntryMapping.h"
#include "MKDialogueTable.generated.h"

class UGridlyDataTable;

UCLASS(Blueprintable)
class MK12_API UMKDialogueTable : public UDataTable {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpeakerNameKey;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 SpeakerIdentifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkinFilterEntryMapping> SkinFilterMapping;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGridlyDataTable> DataTable;
    
public:
    UMKDialogueTable();

    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetAllSpeakerNames();
    
};

