#pragma once
#include "CoreMinimal.h"
#include "ENRSDecalHitGroup.h"
#include "NRSDecalHitPattern.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class NRSDECALS_API UNRSDecalHitPattern : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> DecalTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DecalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENRSDecalHitGroup HitGroup;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HitPatternHandle;
    
    UNRSDecalHitPattern();

};

