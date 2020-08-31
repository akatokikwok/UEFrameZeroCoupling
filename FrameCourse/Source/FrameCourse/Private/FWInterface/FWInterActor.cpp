// Fill out your copyright notice in the Description page of Project Settings.


#include "Public/FWInterface/FWInterActor.h"
#include "FWCommon.h"

// Sets default values
AFWInterActor::AFWInterActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AFWInterActor::FWFuncOne_Implementation(const FString& HitResult)
{
	FWHelper::Debug("FWFuncOne_Implementation", 50);
}

void AFWInterActor::FWFuncThree_Implementation(const FString& HitResult)
{
	FWHelper::Debug("FWFuncThree_Implementation", 50);
}

// Called when the game starts or when spawned
void AFWInterActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFWInterActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

