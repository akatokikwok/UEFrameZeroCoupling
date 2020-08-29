// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FWHUD.generated.h"

/**
 * 
 */
UCLASS()
class FRAMECOURSE_API AFWHUD : public AHUD
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Framework")
		TSubclassOf<class UFWHUDWidget> HUDWidgetClass;//先指定所有的UFWHUDWidget型
	
protected:
	virtual void BeginPlay() override;
};
