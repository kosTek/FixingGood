// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProductActor.generated.h"

UENUM(BlueprintType)
enum EProductType {
	UNASSIGNED UMETA(DisplayName = "UNASSIGNED"),
	INGREDIENT UMETA(DisplayName = "INGREDIENT"),
	METH UMETA(DisplayName = "METH")
};

UENUM(BlueprintType)
enum EProductStatus {
	UNKNOWN UMETA(DisplayName = "UNKNOWN"),
	EMPTY UMETA(DisplayName = "EMPTY"),
	NOT_EMPTY UMETA(DisplayName = "NOT_EMPTY"),
	IN_PROGRESS UMETA(DisplayName = "IN_PROGRESS"),
	FINISHED UMETA(DisplayName = "FINISHED")
};

UCLASS()
class FIXINGGOOD_API AProductActor : public AActor
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Sets default values for this actor's properties
	AProductActor();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ingredient")
		UStaticMeshComponent* Mesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ingredient")
		TEnumAsByte<EProductType> Type;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ingredient")
		TEnumAsByte<EProductStatus> Status;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
