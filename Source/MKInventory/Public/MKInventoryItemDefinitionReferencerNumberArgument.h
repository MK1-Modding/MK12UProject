#pragma once
#include "CoreMinimal.h"
#include "MKInventoryItemDefinitionReferencerNumberArgument.generated.h"

USTRUCT(BlueprintType)
struct FMKInventoryItemDefinitionReferencerNumberArgument {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    MKINVENTORY_API FMKInventoryItemDefinitionReferencerNumberArgument();
};

