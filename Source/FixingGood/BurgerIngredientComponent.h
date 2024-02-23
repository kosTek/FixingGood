// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BurgerIngredientComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIXINGGOOD_API UBurgerIngredientComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBurgerIngredientComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Container")
		UStaticMesh* CheeseMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Container")
		UStaticMesh* TomatoMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Container")
		UStaticMesh* SaladMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Container")
		UStaticMesh* TopBunMesh;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
