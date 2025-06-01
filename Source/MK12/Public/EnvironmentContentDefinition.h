#pragma once
#include "CoreMinimal.h"
#include "ContentDefinition.h"
#include "MKLevelScenarioInfo.h"
#include "EnvironmentContentDefinition.generated.h"

class UAkSwitchValue;
class UMKScriptAsset;
class UWorld;

UCLASS(Blueprintable)
class MK12_API UEnvironmentContentDefinition : public UContentDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKScriptAsset* mScriptAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> mWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMKLevelScenarioInfo> mLevelVariants;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkSwitchValue> mNameSwitch;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mRegistryFlags;
    
public:
    UEnvironmentContentDefinition();

    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetAllEnvironmentAssetNames();
    
};

