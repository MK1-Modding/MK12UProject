#include "TutorialSubchapterObject.h"

FTutorialSubchapterObject::FTutorialSubchapterObject() {
    this->bShowPreInstructionExecuteHUDWord = false;
    this->bShowPostInstructionExecuteHUDWord = false;
    this->bPersistentInstructionsWidgetEnabled = false;
    this->bEnableOverrideSpawnPosition = false;
    this->OverrideSpawnPositions[0] = 0.00f;
    this->OverrideSpawnPositions[1] = 0.00f;
    this->bEnableOverrideTeam1Health = false;
    this->OverrideTeam1Health = 0.00f;
    this->bEnableOverrideTeam2Health = false;
    this->OverrideTeam2Health = 0.00f;
    this->bShouldInputDemoWaitForOpponentBeforeReset = false;
    this->bShouldResetAfterAICommand = false;
    this->bShouldResetAfterEveryCompletion = false;
    this->bOpponentImmuneToDeath = false;
    this->bPlayerImmuneToDeath = false;
    this->CharacterDisableFlags[0] = 0;
    this->CharacterDisableFlags[1] = 0;
    this->SuperMeterOverride[0] = EMeterOverrideType::None;
    this->SuperMeterOverride[1] = EMeterOverrideType::None;
    this->EnergyGaugeOverride[0] = EMeterOverrideType::None;
    this->EnergyGaugeOverride[1] = EMeterOverrideType::None;
    this->bMaxCharacterResourceTeam1 = false;
    this->bMaxKameoResourceTeam1 = false;
    this->bMaxCharacterResourceTeam2 = false;
    this->bMaxKameoResourceTeam2 = false;
    this->DelayTicksUntilPlayerEnabled = 0;
    this->bDisplayDamageNumbers = false;
    this->bDisplayDamageBlockTypes = false;
    this->bDisableSubchapterResetAction = false;
}

