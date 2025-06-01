#pragma once
#include "CoreMinimal.h"
#include "SkinFilterEntryMapping.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FSkinFilterEntryMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MappingKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowOnlyMatchingSkins;
    
    FSkinFilterEntryMapping();
};

