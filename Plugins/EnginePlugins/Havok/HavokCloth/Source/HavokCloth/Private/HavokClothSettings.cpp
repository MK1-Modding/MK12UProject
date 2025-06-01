#include "HavokClothSettings.h"

UHavokClothSettings::UHavokClothSettings() {
    this->BaseFPS = 60;
    this->MinFPS = 1;
    this->bAdaptConstraintStiffness = false;
    this->bStepInEditor = true;
    this->MaxConstraintStiffnessFactor = 8.00f;
    this->bSubstepWhenBelowBaseFPS = false;
    this->MaxSubsteps = 6;
    this->FrameTimeSmoothingFactor = 0.00f;
    this->bAddWorldCollidablesAutomatically = true;
    this->DefaultThreadingModel = EHavokClothThreadingMode::TaskGraph;
    this->DefaultTaskQueueMaxThreads = 4;
}


