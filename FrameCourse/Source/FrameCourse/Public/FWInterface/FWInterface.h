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
	GENERATED_UINTERFACE_BODY()//弃用默认的宏，改用此宏
//public:
//	UFWInterface(const FObjectInitializer& ObjectInitialzer);
};

/**
 * 
 */
class FRAMECOURSE_API IFWInterface
{
	//GENERATED_BODY()
	GENERATED_IINTERFACE_BODY() //弃用默认的宏，改用此GENERATED_IINTERFACE_BODY宏,以便在类内里使用UFUNCTION

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Framework")
		void FWFuncOne(const FString& HitResult);//不用实现，留给继承接口的使用类里由使用类实现

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Framework")
		void FWFuncTwo(const FString& HitResult);

	UFUNCTION(BlueprintNativeEvent, Category = "Framework")
		void FWFuncThree(const FString& HitResult);//不用实现，留给继承接口的使用类里由使用类实现

	UFUNCTION(BlueprintImplementableEvent,Category = "Framework")
		void FWFuncFour(const FString& HitResult);

};
