// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMoneyUpdated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReputationUpdated);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIXINGGOOD_API UPlayerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player")
		TArray<AActor*> IgnoredActors;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player")
		float Reputation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player")
		float Money;

	UFUNCTION(BlueprintCallable)
		void ChangeReputation(float value);

	UFUNCTION(BlueprintCallable)
		void ChangeMoney(float value);

	UFUNCTION(BlueprintCallable)
		bool HasMoney(float value);

	UFUNCTION(BlueprintCallable)
		bool HasReputation(float value);

	UPROPERTY(BlueprintAssignable)
	FOnMoneyUpdated OnMoneyUpdated;

	UPROPERTY(BlueprintAssignable)
	FOnReputationUpdated OnReputationUpdated;

};
