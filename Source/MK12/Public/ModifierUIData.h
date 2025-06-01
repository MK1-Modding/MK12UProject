#pragma once
#include "CoreMinimal.h"
#include "EElementalTypeMask.h"
#include "ModifierUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct MK12_API FModifierUIData {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText mName;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText mDescription;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> mUIModifierIcon;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere, meta=(AllowPrivateAccess=true))
    EElementalTypeMask mUIElementalTypeMask;
    
    FModifierUIData();
};

