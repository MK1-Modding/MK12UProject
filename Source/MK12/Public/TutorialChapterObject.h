#pragma once
#include "CoreMinimal.h"
#include "MissionComponent.h"
#include "TutorialSubchapterObject.h"
#include "TutorialChapterObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTutorialChapterObject : public UMissionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChapterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTutorialSubchapterObject> Subchapters;
    
    UTutorialChapterObject();

};

