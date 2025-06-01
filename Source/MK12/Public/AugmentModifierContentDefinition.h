#pragma once
#include "CoreMinimal.h"
#include "MKHardScriptRefAndFunctionPicker.h"
#include "MKScriptAndFunctionPicker.h"
#include "ModifierContentDefinition.h"
#include "AugmentModifierContentDefinition.generated.h"

UCLASS(Blueprintable)
class MK12_API UAugmentModifierContentDefinition : public UModifierContentDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKScriptAndFunctionPicker mActivationScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKHardScriptRefAndFunctionPicker mActivationScriptHardRef;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBeneficalToHost;
    
public:
    UAugmentModifierContentDefinition();

};

