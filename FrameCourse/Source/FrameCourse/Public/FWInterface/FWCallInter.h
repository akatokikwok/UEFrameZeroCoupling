// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FWCallInter.generated.h"

/*
带meta = (CannotImplementInterfaceInBlueprint)的接口
只能够接受UFUNCTION(BlueprintCallable)的方法,禁止使用诸如BlueprintNativeEvent关键字
并且要写成虚函数
子类实现重写按照普通C++的方式重写
*/
UINTERFACE(MinimalAPI, meta=( CannotImplementInterfaceInBlueprint))									   
class UFWCallInter : public UInterface
{
	//GENERATED_BODY()
	GENERATED_UINTERFACE_BODY()
};

/**
 * 
 */
class FRAMECOURSE_API IFWCallInter
{
	//GENERATED_BODY()
	GENERATED_IINTERFACE_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, meta=(ToolTip = "This is a ToolTip 中文测试"), Category = "Framework_FWCallInter")
		virtual void FWCallFun(const FString& Hitresult) = 0;

};
