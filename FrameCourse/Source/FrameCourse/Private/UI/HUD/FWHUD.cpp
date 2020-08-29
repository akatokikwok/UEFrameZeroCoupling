// Fill out your copyright notice in the Description page of Project Settings.


#include "Public\UI\HUD\FWHUD.h"
#include "Public/UI/Widget/FWHUDWidget.h"

void AFWHUD::BeginPlay()
{
	Super::BeginPlay();

	//创建UMG方法一
	UFWHUDWidget* _HUDWidget = CreateWidget<UFWHUDWidget>(GetWorld(), HUDWidgetClass);
	_HUDWidget->AddToViewport();
	//创建UMG方法二

}
