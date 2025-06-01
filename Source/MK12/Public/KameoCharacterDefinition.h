#pragma once
#include "CoreMinimal.h"
#include "CharacterDefinitionV2.h"
#include "MK12KameoItemConstPtr.h"
#include "KameoCharacterDefinition.generated.h"

class UKameoContentDefinition;
class UMKGameplaySkeletalActorOverride;

USTRUCT(BlueprintType)
struct MK12_API FKameoCharacterDefinition : public FCharacterDefinitionV2 {
    GENERATED_BODY()

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UKameoContentDefinition> mCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UMKGameplaySkeletalActorOverride>> mOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMK12KameoItemConstPtr mKameoItem;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mOverrideSpawnDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOverrideSpawnDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mShouldExecuteStoryOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mLoadSupermoveAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mAllowRandomKameo;
    
public:
    FKameoCharacterDefinition();
};

