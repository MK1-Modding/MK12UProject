#pragma once
#include "CoreMinimal.h"
#include "AddOnMovesetInfo.generated.h"

class ACharacterMovesetTemplate;
class AMK12GameplaySkeletalActor;
class UTexture2D;

USTRUCT(BlueprintType)
struct MK12_API FAddOnMovesetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Mid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACharacterMovesetTemplate> mMoveset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMK12GameplaySkeletalActor> mSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> mHudPortraitOverride;
    
    FAddOnMovesetInfo();
};

