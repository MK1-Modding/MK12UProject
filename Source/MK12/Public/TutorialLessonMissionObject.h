#pragma once
#include "CoreMinimal.h"
#include "MissionObject.h"
#include "UserConfigurationSettings.h"
#include "TutorialLessonMissionObject.generated.h"

class UMissionOutroObject;
class UTeamDefinitionV2;
class UTutorialChapterObject;
class UTutorialFightObject;
class UUIDamageNumbersComponent;
class UUIFightingPauseMenuComponent;
class UUIGenericPauseSettingsComponent;

UCLASS(Blueprintable, EditInlineNew)
class MK12_API UTutorialLessonMissionObject : public UMissionObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LessonDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    TArray<UTutorialChapterObject*> Chapters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UTutorialFightObject* FightObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMissionOutroObject* MissionOutro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipKompletionNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UTeamDefinitionV2* Team1Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UTeamDefinitionV2* Team2Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceOfflineRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UUIFightingPauseMenuComponent* FightingPauseMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UUIDamageNumbersComponent* DamageNumbersComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UUIGenericPauseSettingsComponent* mGenericSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserConfigurationSettings InputDemoUserConfiguration;
    
    UTutorialLessonMissionObject();

};

