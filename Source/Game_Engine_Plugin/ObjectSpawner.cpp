// Fill out your copyright notice in the Description page of Project Settings.

#include "ObjectSpawner.h"
#include "Classes/Engine/World.h"

// Constructor
#include "UObject/ConstructorHelpers.h"
#include "Classes/Components/BillboardComponent.h"

// Sets default values
AObjectSpawner::AObjectSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

//	// Structure to hold one-time initialization
//	struct FConstructorStatics
//	{
//		// A helper class object we use to find target UTexture2D object in resource package
//		ConstructorHelpers::FObjectFinderOptional<UTexture2D> NoteTextureObject;
//
//		// Icon sprite category name
//		FName ID_Notes;
//
//		// Icon sprite display name
//		FText NAME_Notes;
//
//		FConstructorStatics()
//			// Use helper class object to find the texture
//			// "/Engine/EditorResources/S_Note" is resource path
//			: NoteTextureObject(TEXT("/Game/Gizmos/gizmo_transform_replace"))
//			, ID_Notes(TEXT("Notes"))
//			, NAME_Notes(NSLOCTEXT("SpriteCategory", "Notes", "Notes"))
//		{
//		}
//	};
//	static FConstructorStatics ConstructorStatics;
//
//	FObjectInitializer PCIP;
//
//	// We need a scene component to attach Icon sprite
//	USceneComponent* SceneComponent = PCIP.CreateDefaultSubobject<USceneComponent>(this, TEXT("SceneComp"));
//	RootComponent = SceneComponent;
//	RootComponent->Mobility = EComponentMobility::Static;
//
//#if WITH_EDITORONLY_DATA
//	SpriteComponent = PCIP.CreateEditorOnlyDefaultSubobject<UBillboardComponent>(this, TEXT("Sprite"));
//	if (nullptr != SpriteComponent)
//	{
//		SpriteComponent->Sprite = ConstructorStatics.NoteTextureObject.Get();		// Get the sprite texture from helper class object
//		SpriteComponent->SpriteInfo.Category = ConstructorStatics.ID_Notes;		// Assign sprite category name
//		SpriteComponent->SpriteInfo.DisplayName = ConstructorStatics.NAME_Notes;	// Assign sprite display name
//		//SpriteComponent->AttachParent = RootComponent;				        // Attach sprite to scene component
//		SpriteComponent->Mobility = EComponentMobility::Static;
//	}
//#endif // WITH_EDITORONLY_DATA
}

void AObjectSpawner::SpawnObject()
{
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.Name = FName(*ActorToSpawn->GetName());
	GetWorld()->SpawnActor<AActor>(this->GetActorLocation(), this->GetActorRotation(), SpawnInfo);

	Destroy();
}

// Called when the game starts or when spawned
void AObjectSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObjectSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

