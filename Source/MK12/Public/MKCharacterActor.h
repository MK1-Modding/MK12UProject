// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MirrorPolicyInfo.h"
#include "EntityFactory.h"
#include "BloodProperties.h"
#include "CharacterBodyType.h"
#include "CharacterUserData.h"
#include "ECloneInstanceBehavior.h"
#include "MK12GameplaySkeletalActor.h"
#include "OnPropKnockedOffDelegate.h"
#include "SkinFXColorProperties.h"
#include "MKCharacterActor.generated.h"

/**
 * 
 */

class AActor;
class UBuffManagerComponent;
class UCharacterAssetUserData;
class UMKGameplaySkeletalActorOverride;
class UMKPropFactoryComponent;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class MK12_API AMKCharacterActor : public AMK12GameplaySkeletalActor, public IEntityFactory
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FOnPropKnockedOff PropKnockOffDelegate;
	
private:
	UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftObjectPtr<UTexture2D> mOverridePortrait;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta = (AllowPrivateAccess = true))
		UCharacterAssetUserData* TempGameplayCharacterUserData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		bool bIsClone;

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FCharacterUserData UserData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FPrimaryAssetId CharacterName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta = (AllowPrivateAccess = true))
		UBuffManagerComponent* BuffManagerComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FMirrorPolicyInfo PrimaryMaterialMirrorPolicy;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta = (AllowPrivateAccess = true))
		UMKPropFactoryComponent* CloneFactory;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
		ECloneInstanceBehavior OverrideCloneInstanceBehavior;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
		uint32 ClonePoolSize;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool IsCharacterProp;

public:
	AMKCharacterActor(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable)
		void SetIsKameo(bool IsKameo);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void RegisterOpponentSkin(TSubclassOf<AMK12GameplaySkeletalActor> Skin, const TArray<TSoftClassPtr<UMKGameplaySkeletalActorOverride>>& OpponentSkinOverrides);

	UFUNCTION(BlueprintCallable)
		void OnActorHitRegistered(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool IsClone() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
		FSkinFXColorProperties GetSkinFXColorProperties() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool GetIsKameo() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
		FString GetCharName() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
		CharacterBodyType GetBodyType() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
		FBloodProperties GetBloodProperties() const;
};
