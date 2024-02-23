// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerComponent.h"

// Sets default values for this component's properties
UPlayerComponent::UPlayerComponent(){
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayerComponent::BeginPlay(){
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPlayerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction){
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPlayerComponent::ChangeReputation(float value) {
	Reputation += value;

	OnReputationUpdated.Broadcast();
}

void UPlayerComponent::ChangeMoney(float value) {
	Money += value;

	OnMoneyUpdated.Broadcast();
}

bool UPlayerComponent::HasMoney(float value) {
	if (Money >= value) {
		return true;
	}

	return false;
}

bool UPlayerComponent::HasReputation(float value) {
	if (Reputation >= value) {
		return true;
	}

	return false;
}