#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceDecalHitPatternProperties.generated.h"

class UNRSDecalHitPattern;
class UNiagaraComponent;

UCLASS(Blueprintable, EditInlineNew)
class NRSDECALS_API UNiagaraDataInterfaceDecalHitPatternProperties : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNRSDecalHitPattern* Source;
    
    UNiagaraDataInterfaceDecalHitPatternProperties();

    UFUNCTION(BlueprintCallable)
    static void OverrideSystemUserVariableDecalHitPatternProperties(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, UNRSDecalHitPattern* HitPatternAsset);
    
};

