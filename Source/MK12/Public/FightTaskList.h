#pragma once
#include "CoreMinimal.h"
#include "FightTaskList.generated.h"

class UFightTask;

USTRUCT(BlueprintType)
struct FFightTaskList {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    TArray<UFightTask*> mTasks;
    
public:
    MK12_API FFightTaskList();
};

