#pragma once
#include "CoreMinimal.h"
#include "UIPauseMenuDriver.generated.h"

UCLASS(Abstract, Blueprintable)
class MK12_API UUIPauseMenuDriver : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* mMenuScreenObject;
    
public:
    UUIPauseMenuDriver();

};

