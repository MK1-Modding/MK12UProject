#include "TutorialLessonMissionObject.h"
#include "FadeToBlackLoadingScreenComponent.h"
#include "FightingGameCamera.h"
#include "FightingTeamDefinition.h"
#include "TutorialFightObject.h"
#include "UIDamageNumbersComponent.h"
#include "UIFightingPauseMenuComponent.h"
#include "UIGenericPauseSettingsComponent.h"

UTutorialLessonMissionObject::UTutorialLessonMissionObject() {
    this->FightCameraClass = AFightingGameCamera::StaticClass();
    this->MusicPlayerMissionStates.AddDefaulted(1);
    this->LoadingScreen = CreateDefaultSubobject<UFadeToBlackLoadingScreenComponent>(TEXT("LoadingScreen"));
    this->mMissionBundles.AddDefaulted(3);
    this->mLoadBrutalityAssets = false;
    this->FightObject = CreateDefaultSubobject<UTutorialFightObject>(TEXT("FightObject"));
    this->MissionOutro = NULL;
    this->bSkipKompletionNotification = false;
    this->Team1Definition = CreateDefaultSubobject<UFightingTeamDefinition>(TEXT("Team1Definition"));
    this->Team2Definition = CreateDefaultSubobject<UFightingTeamDefinition>(TEXT("Team2Definition"));
    this->bForceOfflineRewards = false;
    this->FightingPauseMenu = CreateDefaultSubobject<UUIFightingPauseMenuComponent>(TEXT("FightingPauseMenu"));
    this->DamageNumbersComponent = CreateDefaultSubobject<UUIDamageNumbersComponent>(TEXT("DamageNumbersScreen"));
    this->mGenericSettings = CreateDefaultSubobject<UUIGenericPauseSettingsComponent>(TEXT("GenericSettings"));
}


