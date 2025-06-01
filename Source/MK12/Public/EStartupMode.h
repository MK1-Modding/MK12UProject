#pragma once
#include "CoreMinimal.h"
#include "EStartupMode.generated.h"

UENUM()
enum class EStartupMode : int32 {
    Attract,
    PlayerSelect,
    Versus,
    Ladder,
    MainMenu,
    OnlineMainMenu,
    Story,
    Practice,
    FatalityPractice,
    Tutorial,
    SeamlessTransition,
    Custom,
    MapMode,
    AIAttackPropFinder,
    AIComboFinder,
    Online,
    Kustomize,
    Replay,
    TestReplay,
    TestYourMight,
    Tournament,
    TournamentPlayerSelect,
    ModifierSoakTest,
    MapModeMissionSoakTest,
};

