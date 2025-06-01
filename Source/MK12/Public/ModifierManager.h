#pragma once
#include "CoreMinimal.h"
#include "MissionComponent.h"
#include "ModifierPicker.h"
#include "ModifierManager.generated.h"

class UBuffManagerComponent;

UCLASS(Blueprintable)
class UModifierManager : public UMissionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBuffManagerComponent* mBuffManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModifierPicker mScriptedAIInvokedModifier;
    
public:
    UModifierManager();

};

