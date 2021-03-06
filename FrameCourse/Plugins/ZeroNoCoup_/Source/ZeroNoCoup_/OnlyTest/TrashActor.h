// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TrashActor.generated.h"

UCLASS( hidecategories = (Input, Collision, Physics, Tags, Mobile, Activation, Cooking, AssetUserData, LOD, Physics, Replication), AutoExpandCategories = (Entity), meta = (ChildCanTick) )
class ZERONOCOUP__API ATrashActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATrashActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category="Entity")
	class USceneComponent* Scene;

};
