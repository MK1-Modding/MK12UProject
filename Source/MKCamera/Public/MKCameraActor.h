#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "MKCameraActor.generated.h"

UCLASS(Abstract, Blueprintable, DefaultConfig, Config=Game)
class MKCAMERA_API AMKCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    AMKCameraActor(const FObjectInitializer& ObjectInitializer);

};

