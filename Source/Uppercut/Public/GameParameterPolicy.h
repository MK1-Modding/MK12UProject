// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ParameterInterface.h"
#include "GameParameterPolicy.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPPERCUT_API UGameParameterPolicy : public UObject {
	GENERATED_BODY()
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta = (AllowPrivateAccess = true))
		UClass* SupportedClass;

public:
	UGameParameterPolicy();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void BluePrint_UpdatePolicy(const UObject* VisualEntity, const FParameterInterface& Parameters);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void BluePrint_OnEntityDestroy(UObject* VisualEntity);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void BluePrint_OnEntityDeactivate(UObject* VisualEntity);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		bool BluePrint_IsReadyForOwnerToSuspend(UObject* VisualEntity) const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void BluePrint_InitPolicy(UObject* VisualEntity);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void BluePrint_Apply(UObject* VisualEntity) const;

};
