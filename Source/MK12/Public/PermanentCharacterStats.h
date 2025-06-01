#pragma once
#include "CoreMinimal.h"
#include "EElementalType.h"
#include "PermanentCharacterStats.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FPermanentCharacterStats {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 KoreStatPoints[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElementalResist[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EElementalType> ElementalTypes;
    
    FPermanentCharacterStats();
};

