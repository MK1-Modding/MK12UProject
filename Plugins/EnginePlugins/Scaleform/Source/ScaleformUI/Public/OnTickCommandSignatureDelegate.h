#pragma once
#include "CoreMinimal.h"
#include "OnTickCommandSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTickCommandSignature, float, DeltaTime);

