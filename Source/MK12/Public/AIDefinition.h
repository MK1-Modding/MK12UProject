#pragma once
#include "CoreMinimal.h"
#include "CustomDroneSetting.h"
#include "EAIDifficultyLevel.h"
#include "EDronePersonalityType.h"
#include "NormalDroneSetting.h"
#include "AIDefinition.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FAIDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDronePersonalityType mDroneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIDifficultyLevel mDroneDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomDroneSetting mCustomDroneSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNormalDroneSetting mNormalDroneSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mShouldTrack;
    
    FAIDefinition();
};

