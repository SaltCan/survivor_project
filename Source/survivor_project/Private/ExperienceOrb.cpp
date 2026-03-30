// Fill out your copyright notice in the Description page of Project Settings.


#include "ExperienceOrb.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"

// Sets default values
AExperienceOrb::AExperienceOrb()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = SphereCollision;

	SphereCollision->InitSphereRadius(100.0f);
	SphereCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereCollision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	SphereCollision->SetGenerateOverlapEvents(true);

	PlaneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaneMesh"));
	ExperienceAmount = 0.0f;

	PlaneMesh->SetupAttachment(SphereCollision);

	PlaneMesh->SetRelativeRotation(FRotator(0.0f, 120.0f, 40.0f));
	PlaneMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    PlaneMesh->SetGenerateOverlapEvents(false);
}

// Called when the game starts or when spawned
void AExperienceOrb::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AExperienceOrb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
