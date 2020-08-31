// Fill out your copyright notice in the Description page of Project Settings.


#include "Public\OnlyTest\FWActor.h"
#include "FWCommon.h"

// Sets default values
AFWActor::AFWActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//FWHelper::Debug("Actor --->AFWActor::AFWActor()", 500.f);

}

void AFWActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	//FWHelper::Debug("Actor ---->AFWActor::PostInitializeComponents()", 500.0f);
}

// Called when the game starts or when spawned
void AFWActor::BeginPlay()
{
	Super::BeginPlay();

	//FWHelper::Debug("Actor ---->AFWActor::BeginPlay()", 500.0f);
	
}

// Called every frame
void AFWActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//if ( !IsOnceTick)
	//{
	//	FWHelper::Debug("Actor ---> Execute Tick Func", 500.0f);
	//	IsOnceTick = true;
	//}

}

