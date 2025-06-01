#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "MKHardScriptRefAndFunctionPicker.h"
#include "BreakableDefinition.h"
#include "BreakableSpawnBehavior.h"
#include "TYMBreakable.generated.h"

UCLASS(Abstract, Blueprintable)
class MK12_API ATYMBreakable : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    BreakableSpawnBehavior SpawnBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKHardScriptRefAndFunctionPicker mTymTweakvarsScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBreakableDefinition> BreakableDefinitions;
    
    ATYMBreakable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBreakSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBreakStrikeStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBreakFailure();
    
};

