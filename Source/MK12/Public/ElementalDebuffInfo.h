#pragma once
#include "CoreMinimal.h"
#include "ElementalDebuffInfo.generated.h"

class UElementalDebuffContentDefinition;

USTRUCT(BlueprintType)
struct FElementalDebuffInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UElementalDebuffContentDefinition> mElementalDebuffContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UElementalDebuffContentDefinition* mLoadedElementalDebuffContent;
    
    MK12_API FElementalDebuffInfo();
};

