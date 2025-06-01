// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MKPropInstanceComponent.generated.h"

class AMKPropInstance;
class UAnimSequence;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MKANIM_API UMKPropInstanceComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UMKPropInstanceComponent();

private:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSubclassOf<AMKPropInstance> PropClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FName PropType;

	/*UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		FEntityReference Instance;*/

	UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool AutoInstance;

	UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool IsSharedInstance;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bShouldMirrorWithAttachParent;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* CurrentAnimation;

	UFUNCTION(BlueprintCallable)
		void SetupPropInstance();
		
};
