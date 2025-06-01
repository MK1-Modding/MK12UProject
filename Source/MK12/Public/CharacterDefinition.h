#pragma once
#include "CoreMinimal.h"
#include "MKInventoryItemConstPtr.h"
#include "AIDefinition.h"
#include "AllocatedCharacterStatPoints.h"
#include "AugmentModifierDefinition.h"
#include "ECharacterIdentifiers.h"
#include "ESecondaryCharacterIdentifiers.h"
#include "ESpeechIdentifiers.h"
#include "MK12CharacterItemConstPtr.h"
#include "MK12KameoItemConstPtr.h"
#include "MK12PassiveBonusItemConstPtr.h"
#include "MK12RelicItemConstPtr.h"
#include "MK12SingleUseItemConstPtr.h"
#include "MK12TalismanItemConstPtr.h"
#include "PermanentCharacterStats.h"
#include "CharacterDefinition.generated.h"

class UBaseCharacterContentDefinition;
class UMKGameplaySkeletalActorOverride;
class UTexture2D;

USTRUCT(BlueprintType)
struct MK12_API FCharacterDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBaseCharacterContentDefinition> mCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mMoveset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UMKGameplaySkeletalActorOverride>> mOverrides;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mCharacterTypeFilter;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mStartupFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDefinition mAIDroneSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAugmentModifierDefinition> mInnateAugmentModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMK12CharacterItemConstPtr mCharacterItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMK12KameoItemConstPtr mKameoItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMK12TalismanItemConstPtr mTalismanItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMK12RelicItemConstPtr mRelicItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMK12PassiveBonusItemConstPtr mPassiveBonusItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMK12SingleUseItemConstPtr> mSingleUseItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKInventoryItemConstPtr mSeasonalFatalityItem;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitializeCharacterStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitializeElementalResists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAllocatedCharacterStatPoints mCharacterStatPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPermanentCharacterStats mPermanentCharacterStats;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mOverrideSpawnDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOverrideSpawnDist;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mBaseHealthOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mDisableMaxDamageOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOverrideBaseHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mLoadSupermoveAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mLoadBrutalityAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool mCheckLockStateOnAllUsers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool mUseOpposingInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName mSpeakerName;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESpeechIdentifiers mSpeakerIdentifiers;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECharacterIdentifiers mIdentifiers;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESecondaryCharacterIdentifiers mSecondaryIdentifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> mHUDPortrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> mHUDMirrorPortrait;
    
public:
    FCharacterDefinition();
};

