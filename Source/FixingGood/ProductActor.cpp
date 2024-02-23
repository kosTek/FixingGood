// Fill out your copyright notice in the Description page of Project Settings.


#include "ProductActor.h"

// Sets default values
AProductActor::AProductActor(){
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	Type = UNASSIGNED;
	Status = UNKNOWN;

}

// Called when the game starts or when spawned
void AProductActor::BeginPlay(){
	Super::BeginPlay();
	
}

// Called every frame
void AProductActor::Tick(float DeltaTime){
	Super::Tick(DeltaTime);

}

