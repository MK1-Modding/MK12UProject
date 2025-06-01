#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "Templates/SubclassOf.h"
#include "StolenPropAssetUserData.generated.h"

class AMK12GameplaySkeletalActor;
class UMKGameplaySkeletalActorOverride;
class UTexture;

UCLASS(Blueprintable, EditInlineNew)
class MK12_API UStolenPropAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* PaletteTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMK12GameplaySkeletalActor> SourceActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumInstances;
    
    UStolenPropAssetUserData();

    UFUNCTION(BlueprintCallable)
    static void StealProp(AMK12GameplaySkeletalActor* DestinationActor, TSubclassOf<AMK12GameplaySkeletalActor> NewSourceActorClass, const TArray<TSoftClassPtr<UMKGameplaySkeletalActorOverride>>& Overrides);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveStolenProps(AMK12GameplaySkeletalActor* DestinationActor, TSubclassOf<AMK12GameplaySkeletalActor> RemovedActorClass, bool ReinitializeEntity);
    
};

