#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FightCameraSettings.h"
#include "FightingCameraData.generated.h"

UCLASS(Blueprintable)
class MK12_API UFightingCameraData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFightCameraSettings CameraSettings;
    
public:
    UFightingCameraData();

};

