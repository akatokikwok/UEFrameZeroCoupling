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
		void GIEcho(FString info, int32 count);//在控制台 输出文字

	//重写源码ProcessConsoleExec函数来 达到调用某个自制输出命令,此处为测试起到等价FWchar类里的CAFuncFour效果
	virtual bool ProcessConsoleExec(const TCHAR* Cmd, FOutputDevice& Ar, UObject* Executor) override;

};
