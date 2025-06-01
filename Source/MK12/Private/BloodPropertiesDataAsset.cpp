// Fill out your copyright notice in the Description page of Project Settings.


#include "BloodPropertiesDataAsset.h"

UBloodPropertiesDataAsset::UBloodPropertiesDataAsset() {
    this->PlayerDamage = 0.00f;
    this->PlayerID = 0;
    this->SDF_EmisIntensity = 0.00f;
    this->SDF_EmisPower = 2.50f;
    this->SDF_SSPower = 1.00f;
    this->SDF_Metalic = 0.00f;
    this->SDF_Specular = 1.00f;
    this->SDF_Roughness = 0.15f;
    this->SDF_LightingChannel0 = 0;
    this->SDF_LightingChannel1 = 0;
    this->SDF_LightingChannel2 = 0;
    this->bIsT1000 = false;
}