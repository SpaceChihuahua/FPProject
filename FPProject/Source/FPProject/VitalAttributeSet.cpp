// Fill out your copyright notice in the Description page of Project Settings.


#include "VitalAttributeSet.h"

void UVitalAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, MaxHealth.GetCurrentValue());
	}
	else if (Attribute == GetOxygenLevelAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, MaxOxygenLevel.GetCurrentValue());
	}
}

void UVitalAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);

	if ((Attribute == GetHealthAttribute()) || (Attribute == GetOxygenLevelAttribute()))
	{
		if (NewValue <= 0.f)
		{
			//send gameplay event of death
		}
	}
}

