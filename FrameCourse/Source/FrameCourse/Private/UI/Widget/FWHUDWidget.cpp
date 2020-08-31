// Fill out your copyright notice in the Description page of Project Settings.


#include "Public\UI\Widget\FWHUDWidget.h"
#include "FWCommon.h"

UFWHUDWidget::UFWHUDWidget(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{
	//FWHelper::Debug("UFWHUDWidget --->UFWHUDWidget", 500.0f);
}

bool UFWHUDWidget::Initialize()
{
	if (!Super::Initialize())
	{
		return false;
	}
	//FWHelper::Debug("UFWHUDWidget --->Initialize()", 500.f);
	return true;
}

void UFWHUDWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	//if (!IsOnceTick)
	//{
	//	FWHelper::Debug("UFWHUDWidget ---> Tick", 500.0f);
	//	IsOnceTick = true;
	//}
}
