#pragma once
#include "CoreMinimal.h"
#include "MKHardScriptRefAndFunctionPicker.h"
#include "MKScriptAndFunctionPicker.h"
#include "ModifierContentDefinition.h"
#include "GlobalModifierContentDefinition.generated.h"

UCLASS(Blueprintable)
class MK12_API UGlobalModifierContentDefinition : public UModifierContentDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKScriptAndFunctionPicker mActivationScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKHardScriptRefAndFunctionPicker mActivationScriptHardRef;
    
public:
    UGlobalModifierContentDefinition();

};

