// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "FWLevelScriptActor.generated.h"

/**
 * 
 */
UCLASS()
class FRAMECOURSE_API AFWLevelScriptActor : public ALevelScriptActor
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	AFWLevelScriptActor();

	virtual void PostInitializeComponents() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	bool IsOnceTick;

};
