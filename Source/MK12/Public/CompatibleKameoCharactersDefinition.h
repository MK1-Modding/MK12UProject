#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CompatibleKameoCharactersDefinition.generated.h"

UCLASS(Blueprintable)
class MK12_API UCompatibleKameoCharactersDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> mCompatibleKameoCharacterList;
    
    UCompatibleKameoCharactersDefinition();

};

