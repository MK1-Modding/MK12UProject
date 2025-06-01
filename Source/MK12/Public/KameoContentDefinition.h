#pragma once
#include "CoreMinimal.h"
#include "MKInventoryDataTableRowHandle.h"
#include "BaseCharacterContentDefinition.h"
#include "EElementalType.h"
#include "EKameoSkillLevel.h"
#include "KameoContentDefinition.generated.h"

class UGameplayAnimationInstance;
class UMKAssetLibrary;
class UTexture2D;

UCLASS(Blueprintable)
class MK12_API UKameoContentDefinition : public UBaseCharacterContentDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKAssetLibrary* mNavAssetLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKAssetLibrary* mGetupAssetLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKAssetLibrary* mDefeatGetupAssetLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKAssetLibrary* mCharacterSelectAssetLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKAssetLibrary* mKustomizeCharacterAssetLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKAssetLibrary* mCinemaAssetsLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EElementalType> mElementalTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAdditionalPartnerHitPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayAnimationInstance> mMapModeAnimationBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKInventoryDataTableRowHandle mInventoryItemRowHandle;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> mUIKameoSelectPortrait;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> mUIKameoPurchaseMasteryPortrait;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKameoSkillLevel mUIKameoSkillLevel;
    
public:
    UKameoContentDefinition();

};

