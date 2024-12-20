// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPAttributeSet.h"
#include "VitalAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class FPPROJECT_API UVitalAttributeSet : public UFPAttributeSet
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, Health)

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, MaxHealth)

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData OxygenLevel;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, OxygenLevel)
		
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData MaxOxygenLevel;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, MaxOxygenLevel)

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;
	
};
