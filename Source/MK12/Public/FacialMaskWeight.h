#pragma once
#include "CoreMinimal.h"
#include "FacialMaskWeight.generated.h"

USTRUCT(BlueprintType)
struct FFacialMaskWeight {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    float Weights[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    MK12_API FFacialMaskWeight();
};

