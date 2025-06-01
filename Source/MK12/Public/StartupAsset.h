#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StartupSettings.h"
#include "StartupAsset.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MK12_API UStartupAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupSettings StartupSettings;
    
    UStartupAsset();
};
