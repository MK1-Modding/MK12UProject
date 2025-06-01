#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CinemaCameraData.h"
#include "CinemaCameraAsset.generated.h"

UCLASS(Blueprintable)
class MK12_API UCinemaCameraAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinemaCameraData CinemaCameraData;
    
    UCinemaCameraAsset();

};

