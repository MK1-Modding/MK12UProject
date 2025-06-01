#pragma once
#include "CoreMinimal.h"
#include "MKScriptAndFunctionPicker.h"
#include "BackgroundDefinition.h"
#include "EDebugStartupRollbackState.h"
#include "EStartupMode.h"
#include "MK12AnnouncerItemConstPtr.h"
#include "MKConsoleCommand.h"
#include "SeamlessTransitionSettings.h"
#include "StartupBackgroundSettings.h"
#include "StartupFightConfiguration.h"
#include "StartupInventorySettings.h"
#include "StartupKustomizeSettings.h"
#include "StartupLadderSettings.h"
#include "StartupMapModeSettings.h"
#include "StartupOnlineSettings.h"
#include "StartupPlayerSelectSettings.h"
#include "StartupPracticeSettings.h"
#include "StartupReplaySettings.h"
#include "StartupStorySettings.h"
#include "StartupTYMSettings.h"
#include "StartupTeamSettings.h"
#include "StartupTestReplaySettings.h"
#include "StartupTutorialSettings.h"
#include "Templates/SubclassOf.h"
#include "StartupSettings.generated.h"

class UMissionObject;
class UTutorialLessonMissionObject;

USTRUCT(BlueprintType)
struct MK12_API FStartupSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EStartupMode StartupMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 GlobalFlags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mScrollerFilterFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMK12AnnouncerItemConstPtr mAnnouncerVoiceItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupFightConfiguration FightConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupTeamSettings TeamOneSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupTeamSettings TeamTwoSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupBackgroundSettings BackgroundSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugStartupRollbackState DebugRollbackState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowAttractModeTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlwaysShowEULAScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceShowFTUE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceNotShowFTUE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseTeamSettingsForAttract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBackgroundDefinition BackgroundDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeamlessTransitionSettings SeamlessTransitionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupPlayerSelectSettings PlayerSelectSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupMapModeSettings MapModeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupStorySettings StoryModeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMissionObject> CustomMissionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupTutorialSettings TutorialModeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTutorialLessonMissionObject> TutorialLessonMissionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupPracticeSettings PracticeModeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupLadderSettings LadderSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupKustomizeSettings KustomizeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupInventorySettings InventorySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupOnlineSettings OnlineSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupReplaySettings ReplaySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupTestReplaySettings TestReplaySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupTYMSettings TYMSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseBackgroundDefinitionForPIE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMKConsoleCommand> ConsoleCommands;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKScriptAndFunctionPicker StartupExecScript;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 MissionRandSeed;
    
    FStartupSettings();
};

