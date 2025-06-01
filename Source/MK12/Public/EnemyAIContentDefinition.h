#pragma once
#include "CoreMinimal.h"
#include "MKScriptFunctionPicker.h"
#include "CharacterContentDefinition.h"
#include "EDronePersonalityType.h"
#include "EEnemyArchetype.h"
#include "EnemyAIContentDefinition.generated.h"

class UCompatibleKameoCharactersDefinition;

UCLASS(Blueprintable)
class MK12_API UEnemyAIContentDefinition : public UCharacterContentDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyArchetype mEnemyArchetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> mCompatibleKameoCharacterList;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCompatibleKameoCharactersDefinition* mCompatibleKameoCharacterAsset;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDronePersonalityType mDronePersonality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKScriptFunctionPicker mPersonalitySetupFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKScriptFunctionPicker mGameInitOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKScriptFunctionPicker mRoundInitInitOverride;
    
    UEnemyAIContentDefinition();

private:
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetAllKameoAssetNames();
    
};

