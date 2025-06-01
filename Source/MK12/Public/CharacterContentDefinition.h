#pragma once
#include "CoreMinimal.h"
#include "MKInventoryDataTableRowHandle.h"
#include "MKHardScriptRefPicker.h"
#include "AddOnMovesetInfo.h"
#include "AssetLibraries.h"
#include "BaseCharacterContentDefinition.h"
#include "EElementalType.h"
#include "CharacterContentDefinition.generated.h"

class ACharacterMovesetTemplate;
class AMK12GameplaySkeletalActor;
class UCharacterStatPointsConverter;
class UGameplayAnimationInstance;
class ULevelSequence;
class UTYMCharacterAnimationInstance;
class UTexture2D;

UCLASS(Blueprintable)
class MK12_API UCharacterContentDefinition : public UBaseCharacterContentDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAssetLibraries mLibraryCollection[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayAnimationInstance> mMapModeAnimationBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> mMapModeWalkIntoPortalSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> mMapModeWalkOutOfPortalSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> mMapModeWalkOutOfPortalNoCameraSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKInventoryDataTableRowHandle mInventoryItemRowHandle;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mCharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EElementalType> mElementalTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EElementalType> mOffensiveElementalTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mBaseHitPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterStatPointsConverter* mCharacterStatPointsConverter;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> mUITallPortrait;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> mUIMapModeTeamPortrait;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> mUIPlayerSelectPortrait;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> mUIPlayerSelectPortraitBacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTYMCharacterAnimationInstance> mTYMAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTYMCharacterAnimationInstance> mCh15TYMAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<ACharacterMovesetTemplate>> mMovesetLibraries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAddOnMovesetInfo> mAddOnMovesets;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mOverrideBaseXpReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKInventoryDataTableRowHandle mLadderEndingUnlockItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKHardScriptRefPicker mCharacterOwnedAI;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMK12GameplaySkeletalActor> mChapter15Skin;
    
public:
    UCharacterContentDefinition();

    UFUNCTION(BlueprintCallable)
    TArray<FName> GetValidCharacterTypes() const;
    
};

