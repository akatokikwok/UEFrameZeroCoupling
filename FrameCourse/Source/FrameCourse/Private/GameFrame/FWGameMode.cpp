// Fill out your copyright notice in the Description page of Project Settings.


#include "FWGameMode.h"
#include "FWDataSingleton.h"
#include "Engine/Engine.h"
#include "FWCommon.h"

AFWGameMode::AFWGameMode()
{

}

void AFWGameMode::BeginPlay()
{
	UFWDataSingleton* DataSingleton = Cast<UFWDataSingleton>(GEngine->GameSingleton);
	//FWHelper::Debug(DataSingleton->SourceVector.ToString(), 5);
}
