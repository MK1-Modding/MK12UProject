#pragma once
#include "CoreMinimal.h"
#include "BuffPropertySetInitializer.h"
#include "ContentDefinition.h"
#include "ModifierConflictManager.h"
#include "ModifierUIData.h"
#include "ModifierContentDefinition.generated.h"

class UMissionComponent;

UCLASS(Abstract, Blueprintable)
class MK12_API UModifierContentDefinition : public UContentDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuffPropertySetInitializer> mPropertySetInitializers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMissionComponent* mRequiredMissionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModifierConflictManager mModifierConflictManager;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModifierUIData mModifierUIData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 mIgnoredPauseReasons;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnabled;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsSoakable;
    
public:
    UModifierContentDefinition();

    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetAllModifierPrimaryAssetIds();
    
};

