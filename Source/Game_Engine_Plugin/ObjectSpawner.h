// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Classes/Components/BillboardComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjectSpawner.generated.h"

UCLASS()
class GAME_ENGINE_PLUGIN_API AObjectSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObjectSpawner();
	void SpawnObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Functionality")
	AActor* ActorToSpawn;	

	UPROPERTY()
	// A UBillboardComponent to hold Icon sprite
	UBillboardComponent* SpriteComponent;

	// Icon sprite
	UTexture2D* SpriteTexture;
};
