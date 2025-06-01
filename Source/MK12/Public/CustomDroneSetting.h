#pragma once
#include "CoreMinimal.h"
#include "EBlockMode.h"
#include "EBlockType.h"
#include "EDroneBreakerMode.h"
#include "EDroneMovementMode.h"
#include "EDroneReversalMode.h"
#include "EDroneThrowEscapeMode.h"
#include "EDroneWakeupDelayMode.h"
#include "EDroneWakeupMode.h"
#include "CustomDroneSetting.generated.h"

USTRUCT(BlueprintType)
struct FCustomDroneSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockMode mBlockMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockType mBlockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDroneMovementMode mMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDroneThrowEscapeMode mThrowEscapeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDroneBreakerMode mBreakerMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDroneWakeupMode mWakeupMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mWakeupAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpecificGetupAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDroneWakeupDelayMode mWakeupDelayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDroneReversalMode mReversalMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mReversalAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpecificReversalAttack;
    
    MK12_API FCustomDroneSetting();
};

