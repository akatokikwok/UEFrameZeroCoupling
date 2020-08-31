// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FWCallInter.h"
#include "FWCallActor.generated.h"

UCLASS()
class FRAMECOURSE_API AFWCallActor : public AActor, public IFWCallInter//多继承实现接口
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFWCallActor();

	virtual void FWCallFun(const FString& Hitresult) override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
