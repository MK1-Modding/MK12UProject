#pragma once
#include "CoreMinimal.h"
#include "UIPauseSubMenu.h"
#include "UIMovelist.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable)
class MK12_API UUIMovelist : public UUIPauseSubMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* mMovelistScreenObject;
    
public:
    UUIMovelist();

};

