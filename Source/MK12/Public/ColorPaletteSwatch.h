#pragma once
#include "CoreMinimal.h"
#include "ColorPaletteSwatch.generated.h"

USTRUCT(BlueprintType)
struct FColorPaletteSwatch {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Colors[4];
    
public:
    MK12_API FColorPaletteSwatch();
};

