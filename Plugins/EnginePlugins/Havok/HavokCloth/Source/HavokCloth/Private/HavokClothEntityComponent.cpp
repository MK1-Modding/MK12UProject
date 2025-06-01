#include "HavokClothEntityComponent.h"

UHavokClothEntityComponent::UHavokClothEntityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bAffectDynamicIndirectLighting = false;
    this->bCastStaticShadow = false;
    this->bHasCustomNavigableGeometry = EHasCustomNavigableGeometry::EvenIfNotCollidable;
    this->ClothAsset = NULL;
    this->bEntityTransferMotionEnabled = false;
    this->EntityTransferMotionTranslationalBlend = 0.00f;
    this->EntityTransferMotionRotationalBlend = 0.00f;
    this->bEntityAdjustConstraintStiffnessForSlowMotion = false;
    this->EntitySlowMotionTimeScale = 1.00f;
    this->EntityMinSlowMotionTimeScale = 0.05f;
    this->CachedClothAsset = NULL;
}

void UHavokClothEntityComponent::TriggerClothTeleport() {
}

void UHavokClothEntityComponent::SetSkipRenderDataInvalidation(bool Skip) {
}

bool UHavokClothEntityComponent::SetSimulationConfig(int32 ClothIndex, int32 SimClothIndex, FName ConfigName) {
    return false;
}

void UHavokClothEntityComponent::SetSimulateUserSubSteps(int32 ClothIndex, int32 SimClothIndex, int32 Substeps, bool bResetPostStep) {
}

void UHavokClothEntityComponent::SetSimulateUserStiffnessFactor(int32 ClothIndex, int32 SimClothIndex, float StiffnessFactor, bool bResetPostStep) {
}

bool UHavokClothEntityComponent::SetSimulateConfigSubSteps(int32 ClothIndex, int32 SimClothIndex, int32 NumSubSteps) {
    return false;
}

void UHavokClothEntityComponent::SetSimClothCollidableEnabled(int32 ClothIndex, int32 SimClothIndex, int32 CollidableIndex, bool bEnable) {
}

void UHavokClothEntityComponent::SetGravity(int32 ClothIndex, int32 SimClothIndex, const FVector& Gravity) {
}

void UHavokClothEntityComponent::SetEntityTransferMotionTranslationalBlend(const float BlendValue) {
}

void UHavokClothEntityComponent::SetEntityTransferMotionRotationalBlend(const float BlendValue) {
}

void UHavokClothEntityComponent::SetEntitySlowMotionTimeScale(const float TimeScale) {
}

void UHavokClothEntityComponent::SetEntityMinSlowMotionTimeScale(const float MinTimeScale) {
}

void UHavokClothEntityComponent::SetDamping(int32 ClothIndex, int32 SimClothIndex, const float Damping) {
}

void UHavokClothEntityComponent::SetConstraintStiffness(int32 ClothIndex, int32 SimClothIndex, int32 ConstraintIndex, float ConstraintStiffness) {
}

void UHavokClothEntityComponent::SetCollidableVelocitySubStepEnabled(bool bEnable, int32 ClothIndex, int32 SimClothIndex) {
}

void UHavokClothEntityComponent::SetCollidableVelocitySubStepConfig(int32 ClothIndex, int32 SimClothIndex, float LinearVelocity, float AngularVelocity, bool bCheckAllCollidables, int32 NumSubSteps) {
}

void UHavokClothEntityComponent::SetClothVisibility(int32 ClothIndex, int32 BufferIndex, bool bIsVisible) {
}

void UHavokClothEntityComponent::SetClothTransition(int32 ClothIndex, int32 TransitionIndex) {
}

bool UHavokClothEntityComponent::SetClothStateSimulateOperatorConfig(int32 ClothIndex, int32 ClothStateIndex, int32 SimulateOperatorIndex, int32 ConfigIndex) {
    return false;
}

void UHavokClothEntityComponent::SetClothStateAwareVisibility(FName MaterialSlotName, bool bDesiredVisibilityState) {
}

void UHavokClothEntityComponent::SetClothState(int32 ClothIndex, int32 StateIndex) {
}

void UHavokClothEntityComponent::SetClothMaterial(int32 SectionIndex, UMaterialInterface* Material) {
}

void UHavokClothEntityComponent::SetClothAsset(UHavokClothAsset* NewAsset) {
}

void UHavokClothEntityComponent::SetCheckCollidableVelocityEnabled(int32 ClothIndex, int32 SimClothIndex, int32 CollidableIndex, bool bEnable) {
}

void UHavokClothEntityComponent::SetCheckAllCollidablesVelocityEnabled(int32 ClothIndex, int32 SimClothIndex, bool bEnable) {
}

void UHavokClothEntityComponent::ResetSimulationConfig(int32 ClothIndex, int32 SimClothIndex) {
}

void UHavokClothEntityComponent::ResetSimulateConfigSubSteps(int32 ClothIndex, int32 SimClothIndex) {
}

void UHavokClothEntityComponent::ResetGravity(int32 ClothIndex, int32 SimClothIndex) {
}

void UHavokClothEntityComponent::ResetDisabledSimClothCollidables(int32 ClothIndex, int32 SimClothIndex) {
}

void UHavokClothEntityComponent::ResetDamping(int32 ClothIndex, int32 SimClothIndex) {
}

void UHavokClothEntityComponent::ResetConstraintsStiffness(int32 ClothIndex, int32 SimClothIndex) {
}

void UHavokClothEntityComponent::ResetCollidableSidedness(int32 ClothIndex, int32 SimClothIndex) {
}

void UHavokClothEntityComponent::RemoveWorldCollidable(UHavokClothCollidableBaseComponent* CollidableComponent, int32 ClothIndex) {
}

void UHavokClothEntityComponent::RemoveEntityAction(UHavokClothActionBase* action) {
}

void UHavokClothEntityComponent::RemoveClothAction(int32 ClothIndex, UHavokClothActionBase* action) {
}

bool UHavokClothEntityComponent::IsSimClothTransferMotionAvailable(int32 ClothIndex, int32 SimClothIndex) {
    return false;
}

bool UHavokClothEntityComponent::IsSimClothCollidableEnabled(int32 ClothIndex, int32 SimClothIndex, int32 CollidableIndex) {
    return false;
}

bool UHavokClothEntityComponent::IsEntityTransferMotionEnabled() const {
    return false;
}

bool UHavokClothEntityComponent::IsCollisionWithWorldCollidablesEnabled(int32 ClothIndex) {
    return false;
}

bool UHavokClothEntityComponent::IsCollidableVelocitySubStepEnabled(int32 ClothIndex, int32 SimClothIndex) {
    return false;
}

bool UHavokClothEntityComponent::IsCollidableSidednessSupported(int32 ClothIndex, int32 SimClothIndex) {
    return false;
}

bool UHavokClothEntityComponent::IsCollidableSidednessEnabled(int32 ClothIndex, int32 SimClothIndex, int32 CollidableIndex) {
    return false;
}

bool UHavokClothEntityComponent::IsClothUpdateEnabled(int32 ClothIndex) {
    return false;
}

bool UHavokClothEntityComponent::IsCheckCollidableVelocityEnabled(int32 ClothIndex, int32 SimClothIndex, int32 CollidableIndex) {
    return false;
}

bool UHavokClothEntityComponent::IsCheckAllCollidablesVelocityEnabled(int32 ClothIndex, int32 SimClothIndex) {
    return false;
}

bool UHavokClothEntityComponent::GetSkipRenderDataInvalidation() {
    return false;
}

bool UHavokClothEntityComponent::GetSimulationConfigNames(int32 ClothIndex, int32 SimClothIndex, TArray<FName>& ConfigNamesOut) {
    return false;
}

void UHavokClothEntityComponent::GetSimulationConfigName(int32 ClothIndex, int32 SimClothIndex, FName& ConfigNameOut) {
}

int32 UHavokClothEntityComponent::GetSimulateUserSubSteps(int32 ClothIndex, int32 SimClothIndex) {
    return 0;
}

float UHavokClothEntityComponent::GetSimulateUserStiffnessFactor(int32 ClothIndex, int32 SimClothIndex) {
    return 0.0f;
}

int32 UHavokClothEntityComponent::GetSimulateConfigSubSteps(int32 ClothIndex, int32 SimClothIndex) {
    return 0;
}

int32 UHavokClothEntityComponent::GetSimClothIndexByName(int32 ClothIndex, FName SimClothName) {
    return 0;
}

void UHavokClothEntityComponent::GetSimClothCollidablesNames(int32 ClothIndex, int32 SimClothIndex, TArray<FName>& CollidableNamesOut) {
}

FName UHavokClothEntityComponent::GetSimClothCollidableName(int32 ClothIndex, int32 SimClothIndex, int32 CollidableIndex) {
    return NAME_None;
}

int32 UHavokClothEntityComponent::GetSimClothCollidableIndex(int32 ClothIndex, int32 SimClothIndex, FName CollidableName) {
    return 0;
}

void UHavokClothEntityComponent::GetSidednessEnabledCollidables(int32 ClothIndex, int32 SimClothIndex, TArray<FName>& EnabledCollidablesOut) {
}

int32 UHavokClothEntityComponent::GetNumSimCloths(int32 ClothIndex) {
    return 0;
}

int32 UHavokClothEntityComponent::GetNumSimClothCollidables(int32 ClothIndex, int32 SimClothIndex) {
    return 0;
}

int32 UHavokClothEntityComponent::GetNumConstraints(int32 ClothIndex, int32 SimClothIndex) {
    return 0;
}

int32 UHavokClothEntityComponent::GetNumClothItems() {
    return 0;
}

int32 UHavokClothEntityComponent::GetMeshSectionFromDisplayBufferName(const FString& DisplayBufferName) {
    return 0;
}

int32 UHavokClothEntityComponent::GetMeshSectionByDisplayBufferName(FName DisplayBufferName) {
    return 0;
}

void UHavokClothEntityComponent::GetGravity(int32 ClothIndex, int32 SimClothIndex, FVector& GravityOut) {
}

float UHavokClothEntityComponent::GetEntityTransferMotionTranslationalBlend() const {
    return 0.0f;
}

float UHavokClothEntityComponent::GetEntityTransferMotionRotationalBlend() const {
    return 0.0f;
}

float UHavokClothEntityComponent::GetEntityMinSlowMotionTimeScale() const {
    return 0.0f;
}

float UHavokClothEntityComponent::GetDamping(int32 ClothIndex, int32 SimClothIndex) {
    return 0.0f;
}

float UHavokClothEntityComponent::GetConstraintStiffness(int32 ClothIndex, int32 SimClothIndex, int32 ConstraintIndex) {
    return 0.0f;
}

void UHavokClothEntityComponent::GetConstraintsNames(int32 ClothIndex, int32 SimClothIndex, TArray<FName>& ConstraintNamesOut) {
}

FName UHavokClothEntityComponent::GetConstraintName(int32 ClothIndex, int32 SimClothIndex, int32 ConstraintIndex) {
    return NAME_None;
}

int32 UHavokClothEntityComponent::GetConstraintIndex(int32 ClothIndex, int32 SimClothIndex, FName ConstraintName) {
    return 0;
}

bool UHavokClothEntityComponent::GetCollidableVelocitySubStepConfig(int32 ClothIndex, int32 SimClothIndex, float& LinearVelocityOut, float& AngularVelocityOut, bool& bCheckAllCollidablesOut, int32& NumSubStepsOut) {
    return false;
}

int32 UHavokClothEntityComponent::GetClothTransitionIndexFromName(int32 ClothIndex, const FString& TransitionName) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothTransitionIndexByName(int32 ClothIndex, FName TransitionName) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothTransitionIndex(int32 ClothIndex, int32 FromStateIndex, int32 ToStateIndex) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothTransition(int32 ClothIndex) {
    return 0;
}

void UHavokClothEntityComponent::GetClothStateSimulateOperatorIndices(int32 ClothIndex, int32 ClothStateIndex, TArray<int32>& OutSimulateOperatorIndices) {
}

FName UHavokClothEntityComponent::GetClothStateName(int32 ClothIndex, int32 StateIndex) {
    return NAME_None;
}

int32 UHavokClothEntityComponent::GetClothStateIndexFromName(int32 ClothIndex, const FString& StateName) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothStateIndexByName(int32 ClothIndex, FName StateName) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothState(int32 ClothIndex) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothSimulateOperatorConfigIndexFromName(int32 ClothIndex, int32 SimulateOperatorIndex, const FString& ConfigName) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothSimulateOperatorConfigIndexByName(int32 ClothIndex, int32 SimulateOperatorIndex, FName ConfigName) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothNumSimulateOperatorConfigs(int32 ClothIndex, int32 SimulateOperatorIndex) {
    return 0;
}

void UHavokClothEntityComponent::GetClothMeshSectionsByDisplayBufferName(int32 ClothIndex, FName DisplayBufferName, TArray<int32>& MeshSectionsOut) {
}

int32 UHavokClothEntityComponent::GetClothMeshSectionByDisplayBufferName(int32 ClothIndex, FName DisplayBufferName) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothIndexFromName(const FString& ClothName) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothIndexByName(FName ClothName) {
    return 0;
}

void UHavokClothEntityComponent::EnableStaticCollision(int32 ClothIndex, bool bStaticCollisions) {
}

void UHavokClothEntityComponent::EnableSimClothTransferMotion(const bool bEnable, int32 ClothIndex, int32 SimClothIndex) {
}

void UHavokClothEntityComponent::EnableEntityTransferMotion(const bool bEnable) {
}

void UHavokClothEntityComponent::EnableEntitySlowMotion(const bool bEnable) {
}

void UHavokClothEntityComponent::EnableDynamicCollision(int32 ClothIndex, bool bDynamicCollisions) {
}

void UHavokClothEntityComponent::EnableCollisionWithWorldCollidables(bool bEnableCollision, int32 ClothIndex) {
}

bool UHavokClothEntityComponent::EnableCollidableSidedness(int32 ClothIndex, int32 SimClothIndex, int32 CollidableIndex, bool bEnable) {
    return false;
}

void UHavokClothEntityComponent::EnableClothUpdate(int32 ClothIndex, bool bEnableUpdate) {
}

void UHavokClothEntityComponent::DisableColidableSidedness(int32 ClothIndex, int32 SimClothIndex) {
}



void UHavokClothEntityComponent::AddWorldCollidable(UHavokClothCollidableBaseComponent* CollidableComponent, int32 ClothIndex) {
}

void UHavokClothEntityComponent::AddEntityAction(UHavokClothActionBase* action) {
}

void UHavokClothEntityComponent::AddClothAction(int32 ClothIndex, UHavokClothActionBase* action) {
}


