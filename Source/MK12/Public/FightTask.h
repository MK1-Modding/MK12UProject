#pragma once
#include "CoreMinimal.h"
#include "FightTask.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFightTask : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TaskDescription;
    
    UFightTask();

};

