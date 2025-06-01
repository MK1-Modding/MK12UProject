#include "TYMCharacterAnimationInstance.h"

UTYMCharacterAnimationInstance::UTYMCharacterAnimationInstance() {
    this->AnimationReadyForInput = true;
    this->Success = false;
    this->MeterValue = 0.00f;
    this->MeterValueHistoryBufferSize = 10;
    this->MeterValueHistoryIndex = 0;
    this->State = TYMCharacterStates::TYM_Stance;
    this->AnimUpdateSpeed = 1.00f;
    this->CameraUpdateSpeed = 1.00f;
    this->UseAltCamera = false;
}

void UTYMCharacterAnimationInstance::SetHiddenPropRegions(int32 regions, uint8 PropSide, FName PropName) {
}

void UTYMCharacterAnimationInstance::OnStrikeNotify_Implementation() {
}



float UTYMCharacterAnimationInstance::GetMeterValue() const {
    return 0.0f;
}

float UTYMCharacterAnimationInstance::GetBlendValue(float MinValue, float MaxValue) const {
    return 0.0f;
}

UBlendSpace1D* UTYMCharacterAnimationInstance::GetBlendSpaceAnim(FName NameID) const {
    return NULL;
}


