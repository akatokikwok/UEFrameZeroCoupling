// Fill out your copyright notice in the Description page of Project Settings.


#include "Public\OnlyTest\FWLevelScriptActor.h"
#include "FWCommon.h"

AFWLevelScriptActor::AFWLevelScriptActor()
{
	//FWHelper::Debug("LevelActor ---> Construct", 500.0f);
}

void AFWLevelScriptActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	//FWHelper::Debug("LevelActor ---> PostInitializeComponents()", 500.0f);
}

void AFWLevelScriptActor::BeginPlay()
{
	Super::BeginPlay();
	//FWHelper::Debug("LevelActor ---> BeginPlay()", 500.f);
}

void AFWLevelScriptActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//if (!IsOnceTick)
	//{
	//	FWHelper::Debug("LevelActor --->Tick()", 500.0f);
	//	IsOnceTick = true;
	//}
}
