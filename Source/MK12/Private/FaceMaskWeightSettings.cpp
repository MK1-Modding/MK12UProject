#include "FaceMaskWeightSettings.h"

UFaceMaskWeightSettings::UFaceMaskWeightSettings() {
}

void UFaceMaskWeightSettings::SetWeight(EFacialMaskWeightValues Weight, float Value) {
}

void UFaceMaskWeightSettings::SetMaskWeights(float LeftBrow, float RightRow, float LeftEye, float RightEye, float LeftCheek, float RightCheek, float Nose, float Lip, float Jaw, float Neck) {
}

void UFaceMaskWeightSettings::SetFacialMaskWeightEnabled(bool Enabled) {
}

void UFaceMaskWeightSettings::RecacheFaceMaskWeight() {
}

FFacialMaskWeight UFaceMaskWeightSettings::MakeFacialMaskWeight(float LeftBrow, float RightRow, float LeftEye, float RightEye, float LeftCheek, float RightCheek, float Nose, float Lip, float Jaw, float Neck, bool Enabled) {
    return FFacialMaskWeight{};
}

UFaceMaskWeightSettings* UFaceMaskWeightSettings::GetFaceWeightSettings(AMK12GameplaySkeletalActor* Actor) {
    return NULL;
}

FFacialMaskWeight UFaceMaskWeightSettings::GetCombinedFacialMaskWeight(AMK12GameplaySkeletalActor* Actor) {
    return FFacialMaskWeight{};
}

void UFaceMaskWeightSettings::CopyFacialMaskWeightFromActor(AMK12GameplaySkeletalActor* DestActor, AMK12GameplaySkeletalActor* SrcActor) {
}

void UFaceMaskWeightSettings::BreakFacialMaskWeight(const FFacialMaskWeight& NewMaskWeight, float& LeftBrow, float& RightRow, float& LeftEye, float& RightEye, float& LeftCheek, float& RightCheek, float& Nose, float& Lip, float& Jaw, float& Neck, bool& Enabled) {
}


