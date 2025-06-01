#pragma once
#include "CoreMinimal.h"
#include "MKInventoryItemDefinitionReferencerNumberArgument.h"
#include "MKInventoryItemDefinitionReferencerContext.generated.h"

USTRUCT(BlueprintType)
struct MKINVENTORY_API FMKInventoryItemDefinitionReferencerContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMKInventoryItemDefinitionReferencerNumberArgument> NumberArguments;
    
    FMKInventoryItemDefinitionReferencerContext();
};

