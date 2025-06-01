#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ASColorTransform.generated.h"

USTRUCT(BlueprintType)
struct SCALEFORMUI_API FASColorTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Multiply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Add;
    
    FASColorTransform();
};

