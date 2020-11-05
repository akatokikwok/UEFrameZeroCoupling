// Fill out your copyright notice in the Description page of Project Settings.


#include "CeshiActor.h"

// Sets default values
ACeshiActor::ACeshiActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACeshiActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACeshiActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

