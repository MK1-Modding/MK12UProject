#pragma once
#include "CoreMinimal.h"
#include "MissionComponent.h"
#include "UIDamageNumbersComponent.generated.h"

class UUIDamageNumbersDriver;

UCLASS(Blueprintable)
class MK12_API UUIDamageNumbersComponent : public UMissionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUIDamageNumbersDriver* mDamageNumbersDriverObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUIDamageNumbersDriver> mDamageNumbersDriverClass;
    
public:
    UUIDamageNumbersComponent();

};

