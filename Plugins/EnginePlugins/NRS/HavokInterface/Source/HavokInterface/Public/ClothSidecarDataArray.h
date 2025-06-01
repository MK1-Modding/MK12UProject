#pragma once
#include "CoreMinimal.h"
#include "ClothSidecarData.h"
#include "ClothSidecarDataArray.generated.h"

USTRUCT(BlueprintType)
struct FClothSidecarDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClothSidecarData> ClothSidecarData;
    
    HAVOKINTERFACE_API FClothSidecarDataArray();
};

