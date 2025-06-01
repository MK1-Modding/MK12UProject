#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "HavokClothItem.h"
#include "ClothSidecarData.h"
#include "ClothSidecarDataArray.h"
#include "HavokInterfaceComponent.generated.h"

class UHavokClothEntityComponent;
class USkeletalMeshComponent;
class USkinnedMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HAVOKINTERFACE_API UHavokInterfaceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClothSidecarDataArray> ClothSidecarDataArrays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClothSidecarData> ClothSidecarData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportRotationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumResetSimulationSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CinemaNumResetSimulationSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StoryModeNumResetSimulationSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProlongedNumResetSimulationSteps;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CachedDistanceThresholdSquared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedRotationThresholdInRadians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> IsFreezeRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> PrevFreezeRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> SlowMotionFreeze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> CachedTMState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> CachedTMTranslationalBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> CachedTMRotationalBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DeferRegistration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ClothIgnoreTimeDilationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EnableClothAutoFreeze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EnableClothBlendToDefaultSimulationWeight;
    
public:
    UHavokInterfaceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWorldSteppingFactor(int32 ComponentIndex, int32 clothInstanceIndex, float WorldSteppingFactor);
    
    UFUNCTION(BlueprintCallable)
    bool SetTransitionConstraintEnabled(int32 ComponentIndex, int32 clothInstanceIndex, bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetSlowMotionFactor(int32 ComponentIndex, int32 clothInstanceIndex, float SlowMotionFactor);
    
    UFUNCTION(BlueprintCallable)
    void SetSimulationWeightForClothInstance(UHavokClothEntityComponent* ClothComponent, int32 clothInstanceIndex, float DesiredSimulationWeight);
    
    UFUNCTION(BlueprintCallable)
    bool SetSimulationWeight(int32 ComponentIndex, int32 clothInstanceIndex, float DesiredSimulationWeight);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplayClothResetSteps(int32 NumSteps);
    
    UFUNCTION(BlueprintCallable)
    void SetForceClothUseAttachParentBounds(bool UseAttachParentBounds);
    
    UFUNCTION(BlueprintCallable)
    void SetEntityTransferMotionTranslationalBlend(const float BlendValue, int32 ComponentIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetEntityTransferMotionRotationalBlend(const float BlendValue, int32 ComponentIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableClothBlendToDefaultSimulationWeight(bool enableBlend);
    
    UFUNCTION(BlueprintCallable)
    void SetClothState(int32 ComponentIndex, int32 ClothItemIndex, int32 StateIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetClothGravity(int32 ComponentIndex, int32 clothInstanceIndex, const FVector& GravityStrength);
    
    UFUNCTION(BlueprintCallable)
    bool SetClothFrozen(int32 ComponentIndex, int32 clothInstanceIndex, bool Frozen);
    
    UFUNCTION(BlueprintCallable)
    void SetClothAwareMasterPoseComponent(USkinnedMeshComponent* PuppetComponent, USkeletalMeshComponent* NewMasterBoneComponent, bool bForceUpdate, int32 ComponentIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCinemaClothResetSteps(int32 NumSteps);
    
    UFUNCTION(BlueprintCallable)
    void RestoreDefaultGameplayClothResetSteps();
    
    UFUNCTION(BlueprintCallable)
    void RestoreDefaultCinemaClothResetSteps();
    
    UFUNCTION(BlueprintCallable)
    void RequestReset(int32 ComponentIndex, int32 clothInstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    void OverrideNextGameplayClothResetSteps(int32 NumSteps);
    
    UFUNCTION(BlueprintCallable)
    void OverrideNextCinemaClothResetSteps(int32 NumSteps);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntityTransferMotionEnabled(int32 ComponentIndex) const;
    
    UFUNCTION(BlueprintCallable)
    float GetWorldSteppingFactor(int32 ComponentIndex, int32 clothInstanceIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    float GetSlowMotionFactor(int32 ComponentIndex, int32 clothInstanceIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    float GetSimulationWeight(int32 ComponentIndex, int32 clothInstanceIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEntityTransferMotionTranslationalBlend(int32 ComponentIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEntityTransferMotionRotationalBlend(int32 ComponentIndex) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetEnableClothBlendToDefaultSimulationWeight();
    
    UFUNCTION(BlueprintCallable)
    float GetDefaultSimulationWeight(int32 ComponentIndex, int32 clothInstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetClothItemsByTagContainer(int32 ComponentIndex, FGameplayTagContainer TagContainer, TArray<FHavokClothItem>& ClothItemArrayOut);
    
    UFUNCTION(BlueprintCallable)
    void GetClothItemsByTag(int32 ComponentIndex, FGameplayTag Tag, TArray<FHavokClothItem>& ClothItemArrayOut);
    
    UFUNCTION(BlueprintCallable)
    bool GetClothItemByName(int32 ComponentIndex, FName ClothName, FHavokClothItem& ClothItemOut);
    
    UFUNCTION(BlueprintCallable)
    bool GetClothItemByIndex(int32 ComponentIndex, int32 ClothIndex, FHavokClothItem& ClothItemOut);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothEntityComponentIndex(UHavokClothEntityComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetAllComponentClothGroups(int32 ComponentIndex);
    
    UFUNCTION(BlueprintCallable)
    void EnablePhysics();
    
    UFUNCTION(BlueprintCallable)
    void EnableEntityTransferMotion(const bool bEnable, int32 ComponentIndex);
    
    UFUNCTION(BlueprintCallable)
    void EnableAllCloth(const bool bEnable, int32 ComponentIndex);
    
    UFUNCTION(BlueprintCallable)
    void DisablePhysics();
    
    UFUNCTION(BlueprintCallable)
    bool ClothItemHasTag(int32 ComponentIndex, int32 ClothIndex, FName TagName);
    
    UFUNCTION(BlueprintCallable)
    void ClearCachedClothPoseStates();
    
    UFUNCTION(BlueprintCallable)
    void CacheCurrentClothPoseState(int32 ComponentIndex, int32 ClothItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCachedClothPoseState(int32 ComponentIndex, int32 ClothItemIndex, bool UseCrossSimInstanceCopy);
    
};

