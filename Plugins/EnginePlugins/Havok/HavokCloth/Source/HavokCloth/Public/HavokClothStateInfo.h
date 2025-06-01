#pragma once
#include "CoreMinimal.h"
#include "HavokClothStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FHavokClothStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> AffectedBufferSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBonesUpdatedBySimulation;
    
    HAVOKCLOTH_API FHavokClothStateInfo();
};

