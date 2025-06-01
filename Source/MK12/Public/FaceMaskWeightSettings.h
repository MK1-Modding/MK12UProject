#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "EFacialMaskWeightValues.h"
#include "FacialMaskWeight.h"
#include "FaceMaskWeightSettings.generated.h"

class AMK12GameplaySkeletalActor;
class UFaceMaskWeightSettings;

UCLASS(Blueprintable, EditInlineNew)
class MK12_API UFaceMaskWeightSettings : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFacialMaskWeight MaskWeight;
    
    UFaceMaskWeightSettings();

    UFUNCTION(BlueprintCallable)
    void SetWeight(EFacialMaskWeightValues Weight, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaskWeights(float LeftBrow, float RightRow, float LeftEye, float RightEye, float LeftCheek, float RightCheek, float Nose, float Lip, float Jaw, float Neck);
    
    UFUNCTION(BlueprintCallable)
    void SetFacialMaskWeightEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void RecacheFaceMaskWeight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFacialMaskWeight MakeFacialMaskWeight(float LeftBrow, float RightRow, float LeftEye, float RightEye, float LeftCheek, float RightCheek, float Nose, float Lip, float Jaw, float Neck, bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    static UFaceMaskWeightSettings* GetFaceWeightSettings(AMK12GameplaySkeletalActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static FFacialMaskWeight GetCombinedFacialMaskWeight(AMK12GameplaySkeletalActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void CopyFacialMaskWeightFromActor(AMK12GameplaySkeletalActor* DestActor, AMK12GameplaySkeletalActor* SrcActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakFacialMaskWeight(const FFacialMaskWeight& NewMaskWeight, float& LeftBrow, float& RightRow, float& LeftEye, float& RightEye, float& LeftCheek, float& RightCheek, float& Nose, float& Lip, float& Jaw, float& Neck, bool& Enabled);
    
};

