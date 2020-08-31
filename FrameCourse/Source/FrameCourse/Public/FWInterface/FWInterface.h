// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FWInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UFWInterface : public UInterface
{
	//GENERATED_BODY()
	GENERATED_UINTERFACE_BODY()//����Ĭ�ϵĺ꣬���ô˺�
//public:
//	UFWInterface(const FObjectInitializer& ObjectInitialzer);
};

/**
 * 
 */
class FRAMECOURSE_API IFWInterface
{
	//GENERATED_BODY()
	GENERATED_IINTERFACE_BODY() //����Ĭ�ϵĺ꣬���ô�GENERATED_IINTERFACE_BODY��,�Ա���������ʹ��UFUNCTION

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Framework")
		void FWFuncOne(const FString& HitResult);//����ʵ�֣������̳нӿڵ�ʹ��������ʹ����ʵ��

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Framework")
		void FWFuncTwo(const FString& HitResult);

	UFUNCTION(BlueprintNativeEvent, Category = "Framework")
		void FWFuncThree(const FString& HitResult);//����ʵ�֣������̳нӿڵ�ʹ��������ʹ����ʵ��

	UFUNCTION(BlueprintImplementableEvent,Category = "Framework")
		void FWFuncFour(const FString& HitResult);

};
