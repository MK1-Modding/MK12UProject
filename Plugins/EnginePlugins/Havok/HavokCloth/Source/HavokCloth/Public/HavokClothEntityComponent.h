#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/MeshComponent.h"
#include "HavokClothItem.h"
#include "HavokClothStateChangedSignatureDelegate.h"
#include "HavokClothTransitionFinishedSignatureDelegate.h"
#include "HavokClothTransitionTriggeredSignatureDelegate.h"
#include "HavokClothEntityComponent.generated.h"

class UHavokClothActionBase;
class UHavokClothAsset;
class UHavokClothCollidableBaseComponent;
class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HAVOKCLOTH_API UHavokClothEntityComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHavokClothStateChangedSignature OnStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHavokClothTransitionTriggeredSignature OnTransitionTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHavokClothTransitionFinishedSignature OnTransitionFinished;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHavokClothAsset* ClothAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHavokClothItem> ClothItems;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEntityTransferMotionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntityTransferMotionTranslationalBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntityTransferMotionRotationalBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEntityAdjustConstraintStiffnessForSlowMotion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntitySlowMotionTimeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntityMinSlowMotionTimeScale;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHavokClothAsset* CachedClothAsset;
    
    UHavokClothEntityComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerClothTeleport();
    
    UFUNCTION(BlueprintCallable)
    void SetSkipRenderDataInvalidation(bool Skip);
    
    UFUNCTION(BlueprintCallable)
    bool SetSimulationConfig(int32 ClothIndex, int32 SimClothIndex, FName ConfigName);
    
    UFUNCTION(BlueprintCallable)
    void SetSimulateUserSubSteps(int32 ClothIndex, int32 SimClothIndex, int32 Substeps, bool bResetPostStep);
    
    UFUNCTION(BlueprintCallable)
    void SetSimulateUserStiffnessFactor(int32 ClothIndex, int32 SimClothIndex, float StiffnessFactor, bool bResetPostStep);
    
    UFUNCTION(BlueprintCallable)
    bool SetSimulateConfigSubSteps(int32 ClothIndex, int32 SimClothIndex, int32 NumSubSteps);
    
    UFUNCTION(BlueprintCallable)
    void SetSimClothCollidableEnabled(int32 ClothIndex, int32 SimClothIndex, int32 CollidableIndex, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetGravity(int32 ClothIndex, int32 SimClothIndex, const FVector& Gravity);
    
    UFUNCTION(BlueprintCallable)
    void SetEntityTransferMotionTranslationalBlend(const float BlendValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEntityTransferMotionRotationalBlend(const float BlendValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEntitySlowMotionTimeScale(const float TimeScale);
    
    UFUNCTION(BlueprintCallable)
    void SetEntityMinSlowMotionTimeScale(const float MinTimeScale);
    
    UFUNCTION(BlueprintCallable)
    void SetDamping(int32 ClothIndex, int32 SimClothIndex, const float Damping);
    
    UFUNCTION(BlueprintCallable)
    void SetConstraintStiffness(int32 ClothIndex, int32 SimClothIndex, int32 ConstraintIndex, float ConstraintStiffness);
    
    UFUNCTION(BlueprintCallable)
    void SetCollidableVelocitySubStepEnabled(bool bEnable, int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCollidableVelocitySubStepConfig(int32 ClothIndex, int32 SimClothIndex, float LinearVelocity, float AngularVelocity, bool bCheckAllCollidables, int32 NumSubSteps);
    
    UFUNCTION(BlueprintCallable)
    void SetClothVisibility(int32 ClothIndex, int32 BufferIndex, bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetClothTransition(int32 ClothIndex, int32 TransitionIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetClothStateSimulateOperatorConfig(int32 ClothIndex, int32 ClothStateIndex, int32 SimulateOperatorIndex, int32 ConfigIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetClothStateAwareVisibility(FName MaterialSlotName, bool bDesiredVisibilityState);
    
    UFUNCTION(BlueprintCallable)
    void SetClothState(int32 ClothIndex, int32 StateIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetClothMaterial(int32 SectionIndex, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetClothAsset(UHavokClothAsset* NewAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckCollidableVelocityEnabled(int32 ClothIndex, int32 SimClothIndex, int32 CollidableIndex, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckAllCollidablesVelocityEnabled(int32 ClothIndex, int32 SimClothIndex, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ResetSimulationConfig(int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetSimulateConfigSubSteps(int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetGravity(int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetDisabledSimClothCollidables(int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetDamping(int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetConstraintsStiffness(int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetCollidableSidedness(int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWorldCollidable(UHavokClothCollidableBaseComponent* CollidableComponent, int32 ClothIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEntityAction(UHavokClothActionBase* action);
    
    UFUNCTION(BlueprintCallable)
    void RemoveClothAction(int32 ClothIndex, UHavokClothActionBase* action);
    
    UFUNCTION(BlueprintCallable)
    bool IsSimClothTransferMotionAvailable(int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsSimClothCollidableEnabled(int32 ClothIndex, int32 SimClothIndex, int32 CollidableIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntityTransferMotionEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCollisionWithWorldCollidablesEnabled(int32 ClothIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsCollidableVelocitySubStepEnabled(int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsCollidableSidednessSupported(int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsCollidableSidednessEnabled(int32 ClothIndex, int32 SimClothIndex, int32 CollidableIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsClothUpdateEnabled(int32 ClothIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsCheckCollidableVelocityEnabled(int32 ClothIndex, int32 SimClothIndex, int32 CollidableIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsCheckAllCollidablesVelocityEnabled(int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSkipRenderDataInvalidation();
    
    UFUNCTION(BlueprintCallable)
    bool GetSimulationConfigNames(int32 ClothIndex, int32 SimClothIndex, TArray<FName>& ConfigNamesOut);
    
    UFUNCTION(BlueprintCallable)
    void GetSimulationConfigName(int32 ClothIndex, int32 SimClothIndex, FName& ConfigNameOut);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSimulateUserSubSteps(int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    float GetSimulateUserStiffnessFactor(int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSimulateConfigSubSteps(int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSimClothIndexByName(int32 ClothIndex, FName SimClothName);
    
    UFUNCTION(BlueprintCallable)
    void GetSimClothCollidablesNames(int32 ClothIndex, int32 SimClothIndex, TArray<FName>& CollidableNamesOut);
    
    UFUNCTION(BlueprintCallable)
    FName GetSimClothCollidableName(int32 ClothIndex, int32 SimClothIndex, int32 CollidableIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSimClothCollidableIndex(int32 ClothIndex, int32 SimClothIndex, FName CollidableName);
    
    UFUNCTION(BlueprintCallable)
    void GetSidednessEnabledCollidables(int32 ClothIndex, int32 SimClothIndex, TArray<FName>& EnabledCollidablesOut);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumSimCloths(int32 ClothIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumSimClothCollidables(int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumConstraints(int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumClothItems();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMeshSectionFromDisplayBufferName(const FString& DisplayBufferName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMeshSectionByDisplayBufferName(FName DisplayBufferName);
    
    UFUNCTION(BlueprintCallable)
    void GetGravity(int32 ClothIndex, int32 SimClothIndex, FVector& GravityOut);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEntityTransferMotionTranslationalBlend() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEntityTransferMotionRotationalBlend() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEntityMinSlowMotionTimeScale() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDamping(int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    float GetConstraintStiffness(int32 ClothIndex, int32 SimClothIndex, int32 ConstraintIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetConstraintsNames(int32 ClothIndex, int32 SimClothIndex, TArray<FName>& ConstraintNamesOut);
    
    UFUNCTION(BlueprintCallable)
    FName GetConstraintName(int32 ClothIndex, int32 SimClothIndex, int32 ConstraintIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetConstraintIndex(int32 ClothIndex, int32 SimClothIndex, FName ConstraintName);
    
    UFUNCTION(BlueprintCallable)
    bool GetCollidableVelocitySubStepConfig(int32 ClothIndex, int32 SimClothIndex, float& LinearVelocityOut, float& AngularVelocityOut, bool& bCheckAllCollidablesOut, int32& NumSubStepsOut);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothTransitionIndexFromName(int32 ClothIndex, const FString& TransitionName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothTransitionIndexByName(int32 ClothIndex, FName TransitionName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothTransitionIndex(int32 ClothIndex, int32 FromStateIndex, int32 ToStateIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothTransition(int32 ClothIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetClothStateSimulateOperatorIndices(int32 ClothIndex, int32 ClothStateIndex, TArray<int32>& OutSimulateOperatorIndices);
    
    UFUNCTION(BlueprintCallable)
    FName GetClothStateName(int32 ClothIndex, int32 StateIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothStateIndexFromName(int32 ClothIndex, const FString& StateName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothStateIndexByName(int32 ClothIndex, FName StateName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothState(int32 ClothIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothSimulateOperatorConfigIndexFromName(int32 ClothIndex, int32 SimulateOperatorIndex, const FString& ConfigName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothSimulateOperatorConfigIndexByName(int32 ClothIndex, int32 SimulateOperatorIndex, FName ConfigName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothNumSimulateOperatorConfigs(int32 ClothIndex, int32 SimulateOperatorIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetClothMeshSectionsByDisplayBufferName(int32 ClothIndex, FName DisplayBufferName, TArray<int32>& MeshSectionsOut);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothMeshSectionByDisplayBufferName(int32 ClothIndex, FName DisplayBufferName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothIndexFromName(const FString& ClothName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothIndexByName(FName ClothName);
    
    UFUNCTION(BlueprintCallable)
    void EnableStaticCollision(int32 ClothIndex, bool bStaticCollisions);
    
    UFUNCTION(BlueprintCallable)
    void EnableSimClothTransferMotion(const bool bEnable, int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    void EnableEntityTransferMotion(const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnableEntitySlowMotion(const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnableDynamicCollision(int32 ClothIndex, bool bDynamicCollisions);
    
    UFUNCTION(BlueprintCallable)
    void EnableCollisionWithWorldCollidables(bool bEnableCollision, int32 ClothIndex);
    
    UFUNCTION(BlueprintCallable)
    bool EnableCollidableSidedness(int32 ClothIndex, int32 SimClothIndex, int32 CollidableIndex, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnableClothUpdate(int32 ClothIndex, bool bEnableUpdate);
    
    UFUNCTION(BlueprintCallable)
    void DisableColidableSidedness(int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClothInstanceTransitionTriggered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClothInstanceStateChanged() const;
    
    UFUNCTION(BlueprintCallable)
    void AddWorldCollidable(UHavokClothCollidableBaseComponent* CollidableComponent, int32 ClothIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddEntityAction(UHavokClothActionBase* action);
    
    UFUNCTION(BlueprintCallable)
    void AddClothAction(int32 ClothIndex, UHavokClothActionBase* action);
    
};

