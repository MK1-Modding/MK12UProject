#pragma once
#include "CoreMinimal.h"
#include "CharacterDefinitionV2.h"
#include "TYMAnimOverrideType.h"
#include "TYMCharacterDefinition.generated.h"

class UBaseCharacterContentDefinition;
class UMKGameplaySkeletalActorOverride;
class UTYMCharacterAnimationInstance;

USTRUCT(BlueprintType)
struct MK12_API FTYMCharacterDefinition : public FCharacterDefinitionV2 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBaseCharacterContentDefinition> mCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UMKGameplaySkeletalActorOverride>> mOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTYMCharacterAnimationInstance> mAnimInstanceOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TYMAnimOverrideType AnimOverrideType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mOverrideSpawnDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOverrideSpawnDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideUntilStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnBreakable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideBreakable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InitializeCharacterScript;
    
public:
    FTYMCharacterDefinition();
};

