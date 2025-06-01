#pragma once
#include "CoreMinimal.h"
#include "ShellCharacterAnimationInstance.h"
#include "TYMCharacterStates.h"
#include "TYMCharacterAnimationInstance.generated.h"

class ATYMBreakable;
class UAnimSequence;
class UBlendSpace1D;

UCLASS(Blueprintable, NonTransient)
class MK12_API UTYMCharacterAnimationInstance : public UShellCharacterAnimationInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AnimationReadyForInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeterValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeterValueHistoryBufferSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> MeterValueHistory;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 MeterValueHistoryIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TYMCharacterStates State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimUpdateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraUpdateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseAltCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATYMBreakable> SpawnedBreakableObject;
    
    UTYMCharacterAnimationInstance();

    UFUNCTION(BlueprintCallable)
    void SetHiddenPropRegions(int32 regions, uint8 PropSide, FName PropName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStrikeNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetStateAnimation(FName NewState, UAnimSequence*& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMeterValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlendValue(float MinValue, float MaxValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBlendSpace1D* GetBlendSpaceAnim(FName NameID) const;
    
};

