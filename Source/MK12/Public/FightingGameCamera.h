#pragma once
#include "CoreMinimal.h"
#include "MK12CameraActor.h"
#include "FightingGameCamera.generated.h"

class UFightingCameraData;

UCLASS(Blueprintable)
class MK12_API AFightingGameCamera : public AMK12CameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFightingCameraData* mpFightCameraData;
    
    AFightingGameCamera(const FObjectInitializer& ObjectInitializer);

};

