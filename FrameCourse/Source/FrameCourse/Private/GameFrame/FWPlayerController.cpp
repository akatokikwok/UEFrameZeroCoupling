// Fill out your copyright notice in the Description page of Project Settings.


#include "FWPlayerController.h"
#include "GameFramework/PlayerController.h"

void AFWPlayerController::BeginPlay()
{
	Super::BeginPlay();

	//����ģʽָ��
	FInputModeGameAndUI _InputMode;
	_InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	_InputMode.SetHideCursorDuringCapture(false);
	SetInputMode(_InputMode);
	//��ʾ���
	bShowMouseCursor = true;

}
