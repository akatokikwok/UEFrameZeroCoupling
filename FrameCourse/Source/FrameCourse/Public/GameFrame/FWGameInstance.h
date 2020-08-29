// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FWGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class FRAMECOURSE_API UFWGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UFUNCTION(Exec, Category = "Framework")
		void GIEcho(FString info, int32 count);//�ڿ���̨ �������

	//��дԴ��ProcessConsoleExec������ �ﵽ����ĳ�������������,�˴�Ϊ�����𵽵ȼ�FWchar�����CAFuncFourЧ��
	virtual bool ProcessConsoleExec(const TCHAR* Cmd, FOutputDevice& Ar, UObject* Executor) override;

};
