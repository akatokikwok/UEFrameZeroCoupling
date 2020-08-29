// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FWCharacter.generated.h"

UCLASS()
class FRAMECOURSE_API AFWCharacter : public ACharacter
{
	GENERATED_BODY()

public:///公有方法
	// Sets default values for this character's properties
	AFWCharacter();

	//蓝图可调用，由C++实现
	UFUNCTION(BlueprintCallable, Category = "Framework")
		void CAFuncOne(int32 Input, bool& Output);
	//由蓝图实现
	UFUNCTION(BlueprintImplementableEvent, Category = "Framework")
		void CAFuncTwo(int32 Input, bool& Output);
	//C++和蓝图均可实现，C++需要补_Implementation后缀
	UFUNCTION(BlueprintNativeEvent, Category = "Framework")
		void CAFuncThree(int32 Input, bool& Output);
	//在控制台命令实现
	UFUNCTION(Exec, Category = "Framework")
		void CAFuncFour(FString Info, int32 Count);

#if WITH_EDITOR//仅在编辑器模式下才允许编译
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;//变量在蓝图修改的时候会调用此PostEditChangeProperty函数
#endif

public:///公有成员

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Framework")
		AActor* CAOne; 

	//对应蓝图里的 类类型的硬引用
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Framework")
		TSubclassOf<AActor> CATwo;     

	//对应蓝图到的 对象软引用;并没有实际加载内存
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Framework")
		TSoftObjectPtr<AActor> CAThree; 

	//对象的类类型软引用,需要时再加载内存
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Framework")
		TSoftClassPtr<AActor> CAFour;	

	// 资源引用, 是对FStringAssetReference的封装,还额外包含对象路径与弱指针
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Framework")
		TAssetPtr<AActor> CAFive;
    
	//资源路径引用
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = ( MetaClass = "AActor"),/*限定显示范围为Actor类型*/Category = "Framework" )
		FStringAssetReference CASix;  

	// Meta注释符的DisplayNameToolTip使用
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "_ActualDisplayName", ToolTip = "This is a ToolTip 中文测试"), Category = "Framework")
		bool CAAllow;

	// meta限定变量CACount为10~100,且仅在CAAllow开启时 能被使用
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = 10, ClampMax = 100, EditCondition = CAAllow), Category = "Framework")
		int32 CACount;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
