#pragma once
#include "CoreMinimal.h"
#include "MissionComponent.h"
#include "MissionOutroObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MK12_API UMissionOutroObject : public UMissionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UMissionOutroObject();

};

