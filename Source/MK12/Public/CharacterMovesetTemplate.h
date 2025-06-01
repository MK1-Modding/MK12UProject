#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CharacterMovesetTemplate.generated.h"

class AMK12GameplaySkeletalActor;
class UMKScriptAsset;

UCLASS(Abstract, Blueprintable)
class MK12_API ACharacterMovesetTemplate : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKScriptAsset* MovesetScript;
    
    ACharacterMovesetTemplate(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyToActor(AMK12GameplaySkeletalActor* DestinationActor) const;
    
};

