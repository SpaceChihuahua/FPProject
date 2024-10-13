// Fill out your copyright notice in the Description page of Project Settings.


#include "SignActor.h"
#include "Components/TextRenderComponent.h" 

// Sets default values
ASignActor::ASignActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;	
    // Створення компонента UTextRenderComponent
    TextComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextComponent"));
}

// Called when the game starts or when spawned
void ASignActor::BeginPlay()
{
	Super::BeginPlay();
	TextComponent->SetText(FText::FromString("Drink me!"));
}

// Called every frame
void ASignActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

