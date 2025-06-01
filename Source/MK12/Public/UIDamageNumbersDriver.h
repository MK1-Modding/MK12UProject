#pragma once
#include "CoreMinimal.h"
#include "UIDamageNumbersDriver.generated.h"

UCLASS(Abstract, Blueprintable)
class MK12_API UUIDamageNumbersDriver : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mNumberDamageTextBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* mDamageTextObject;
    
public:
    UUIDamageNumbersDriver();

};

