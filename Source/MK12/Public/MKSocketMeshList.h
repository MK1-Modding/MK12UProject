#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MKSocketMeshList.generated.h"

class USkeleton;

UCLASS(Blueprintable)
class MK12_API UMKSocketMeshList : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeleton*> SkeletonList;
    
    UMKSocketMeshList();

};

