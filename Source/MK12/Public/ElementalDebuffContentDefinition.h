#pragma once
#include "CoreMinimal.h"
#include "MKHardScriptRefAndFunctionPicker.h"
#include "MKScriptAndFunctionPicker.h"
#include "ContentDefinition.h"
#include "ElementalDebuffContentDefinition.generated.h"

UCLASS(Blueprintable)
class MK12_API UElementalDebuffContentDefinition : public UContentDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKScriptAndFunctionPicker mActivationScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKHardScriptRefAndFunctionPicker mActivationScriptHardRef;
    
public:
    UElementalDebuffContentDefinition();

};

