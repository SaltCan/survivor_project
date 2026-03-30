// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExperienceOrb.generated.h"

class USphereComponent;
class UStaticMeshComponent;
class USceneComponent;

UCLASS()
class SURVIVOR_PROJECT_API AExperienceOrb : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExperienceOrb();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USphereComponent* SphereCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* PlaneMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	float ExperienceAmount;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
