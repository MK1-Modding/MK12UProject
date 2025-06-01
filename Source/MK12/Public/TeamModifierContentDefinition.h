#pragma once
#include "CoreMinimal.h"
#include "MKHardScriptRefAndFunctionPicker.h"
#include "ModifierContentDefinition.h"
#include "TeamModifierContentDefinition.generated.h"

UCLASS(Blueprintable)
class MK12_API UTeamModifierContentDefinition : public UModifierContentDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKHardScriptRefAndFunctionPicker mActivationScriptHardRef;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBeneficalToHost;
    
public:
    UTeamModifierContentDefinition();

};

