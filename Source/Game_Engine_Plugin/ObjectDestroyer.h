// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjectDestroyer.generated.h"

UCLASS()
class GAME_ENGINE_PLUGIN_API AObjectDestroyer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObjectDestroyer();
	void DestroyObject();
	void SetActorToDestroy(AActor*);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Functionality")
	AActor* ActorToDestroy;
	
};
