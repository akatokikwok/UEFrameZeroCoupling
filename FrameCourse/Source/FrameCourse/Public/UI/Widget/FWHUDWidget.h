// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FWHUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class FRAMECOURSE_API UFWHUDWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UFWHUDWidget(const FObjectInitializer& ObjectInitializer);

	virtual bool Initialize() override;
protected:
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;//NativeTick供C++使用 Tick供给给蓝图使用
public:
	bool IsOnceTick;
};
