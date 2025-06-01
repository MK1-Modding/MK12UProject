#include "HavokInterfaceComponent.h"

UHavokInterfaceComponent::UHavokInterfaceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->TeleportDistanceThreshold = 400.00f;
    this->TeleportRotationThreshold = 45.00f;
    this->NumResetSimulationSteps = 3;
    this->CinemaNumResetSimulationSteps = 12;
    this->StoryModeNumResetSimulationSteps = 120;
    this->ProlongedNumResetSimulationSteps = 24;
    this->CachedDistanceThresholdSquared = 0;
    this->CachedRotationThresholdInRadians = 0.00f;
    this->DeferRegistration = false;
    this->ClothIgnoreTimeDilationOverride = true;
    this->EnableClothAutoFreeze = true;
    this->EnableClothBlendToDefaultSimulationWeight = true;
}

void UHavokInterfaceComponent::SetWorldSteppingFactor(int32 ComponentIndex, int32 clothInstanceIndex, float WorldSteppingFactor) {
}

bool UHavokInterfaceComponent::SetTransitionConstraintEnabled(int32 ComponentIndex, int32 clothInstanceIndex, bool IsEnabled) {
    return false;
}

void UHavokInterfaceComponent::SetSlowMotionFactor(int32 ComponentIndex, int32 clothInstanceIndex, float SlowMotionFactor) {
}

void UHavokInterfaceComponent::SetSimulationWeightForClothInstance(UHavokClothEntityComponent* ClothComponent, int32 clothInstanceIndex, float DesiredSimulationWeight) {
}

bool UHavokInterfaceComponent::SetSimulationWeight(int32 ComponentIndex, int32 clothInstanceIndex, float DesiredSimulationWeight) {
    return false;
}

void UHavokInterfaceComponent::SetGameplayClothResetSteps(int32 NumSteps) {
}

void UHavokInterfaceComponent::SetForceClothUseAttachParentBounds(bool UseAttachParentBounds) {
}

void UHavokInterfaceComponent::SetEntityTransferMotionTranslationalBlend(const float BlendValue, int32 ComponentIndex) {
}

void UHavokInterfaceComponent::SetEntityTransferMotionRotationalBlend(const float BlendValue, int32 ComponentIndex) {
}

void UHavokInterfaceComponent::SetEnableClothBlendToDefaultSimulationWeight(bool enableBlend) {
}

void UHavokInterfaceComponent::SetClothState(int32 ComponentIndex, int32 ClothItemIndex, int32 StateIndex) {
}

void UHavokInterfaceComponent::SetClothGravity(int32 ComponentIndex, int32 clothInstanceIndex, const FVector& GravityStrength) {
}

bool UHavokInterfaceComponent::SetClothFrozen(int32 ComponentIndex, int32 clothInstanceIndex, bool Frozen) {
    return false;
}

void UHavokInterfaceComponent::SetClothAwareMasterPoseComponent(USkinnedMeshComponent* PuppetComponent, USkeletalMeshComponent* NewMasterBoneComponent, bool bForceUpdate, int32 ComponentIndex) {
}

void UHavokInterfaceComponent::SetCinemaClothResetSteps(int32 NumSteps) {
}

void UHavokInterfaceComponent::RestoreDefaultGameplayClothResetSteps() {
}

void UHavokInterfaceComponent::RestoreDefaultCinemaClothResetSteps() {
}

void UHavokInterfaceComponent::RequestReset(int32 ComponentIndex, int32 clothInstanceIndex) {
}

void UHavokInterfaceComponent::OverrideNextGameplayClothResetSteps(int32 NumSteps) {
}

void UHavokInterfaceComponent::OverrideNextCinemaClothResetSteps(int32 NumSteps) {
}

bool UHavokInterfaceComponent::IsEntityTransferMotionEnabled(int32 ComponentIndex) const {
    return false;
}

float UHavokInterfaceComponent::GetWorldSteppingFactor(int32 ComponentIndex, int32 clothInstanceIndex, int32 SimClothIndex) {
    return 0.0f;
}

float UHavokInterfaceComponent::GetSlowMotionFactor(int32 ComponentIndex, int32 clothInstanceIndex, int32 SimClothIndex) {
    return 0.0f;
}

float UHavokInterfaceComponent::GetSimulationWeight(int32 ComponentIndex, int32 clothInstanceIndex) {
    return 0.0f;
}

float UHavokInterfaceComponent::GetEntityTransferMotionTranslationalBlend(int32 ComponentIndex) const {
    return 0.0f;
}

float UHavokInterfaceComponent::GetEntityTransferMotionRotationalBlend(int32 ComponentIndex) const {
    return 0.0f;
}

bool UHavokInterfaceComponent::GetEnableClothBlendToDefaultSimulationWeight() {
    return false;
}

float UHavokInterfaceComponent::GetDefaultSimulationWeight(int32 ComponentIndex, int32 clothInstanceIndex) {
    return 0.0f;
}

void UHavokInterfaceComponent::GetClothItemsByTagContainer(int32 ComponentIndex, FGameplayTagContainer TagContainer, TArray<FHavokClothItem>& ClothItemArrayOut) {
}

void UHavokInterfaceComponent::GetClothItemsByTag(int32 ComponentIndex, FGameplayTag Tag, TArray<FHavokClothItem>& ClothItemArrayOut) {
}

bool UHavokInterfaceComponent::GetClothItemByName(int32 ComponentIndex, FName ClothName, FHavokClothItem& ClothItemOut) {
    return false;
}

bool UHavokInterfaceComponent::GetClothItemByIndex(int32 ComponentIndex, int32 ClothIndex, FHavokClothItem& ClothItemOut) {
    return false;
}

int32 UHavokInterfaceComponent::GetClothEntityComponentIndex(UHavokClothEntityComponent* InComponent) {
    return 0;
}

FGameplayTagContainer UHavokInterfaceComponent::GetAllComponentClothGroups(int32 ComponentIndex) {
    return FGameplayTagContainer{};
}

void UHavokInterfaceComponent::EnablePhysics() {
}

void UHavokInterfaceComponent::EnableEntityTransferMotion(const bool bEnable, int32 ComponentIndex) {
}

void UHavokInterfaceComponent::EnableAllCloth(const bool bEnable, int32 ComponentIndex) {
}

void UHavokInterfaceComponent::DisablePhysics() {
}

bool UHavokInterfaceComponent::ClothItemHasTag(int32 ComponentIndex, int32 ClothIndex, FName TagName) {
    return false;
}

void UHavokInterfaceComponent::ClearCachedClothPoseStates() {
}

void UHavokInterfaceComponent::CacheCurrentClothPoseState(int32 ComponentIndex, int32 ClothItemIndex) {
}

void UHavokInterfaceComponent::ApplyCachedClothPoseState(int32 ComponentIndex, int32 ClothItemIndex, bool UseCrossSimInstanceCopy) {
}


