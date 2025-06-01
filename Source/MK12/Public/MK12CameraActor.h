#pragma once
#include "CoreMinimal.h"
#include "MKCameraActor.h"
#include "MK12CameraActor.generated.h"

UCLASS(Abstract, Blueprintable)
class AMK12CameraActor : public AMKCameraActor {
    GENERATED_BODY()
public:
    AMK12CameraActor(const FObjectInitializer& ObjectInitializer);

};

