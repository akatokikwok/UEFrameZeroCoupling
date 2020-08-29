// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Image.h"
#include "CanvasPanel.h"
#include "Button.h"
#include "FWAffectWidget.generated.h"

class UImage;
class UCanvasPanel;
class UButton;
/**
 * 
 */
UCLASS()
class FRAMECOURSE_API UFWAffectWidget : public UUserWidget
{
	GENERATED_BODY()
public:///公有方法
	UFWAffectWidget( const FObjectInitializer& ObjectInitializer);

	//大部分uuserwidget类型的初始化函数
	virtual bool Initialize() override;

	UFUNCTION(BlueprintCallable, Category = "Framework")
		void ButtonThreeEvent();
	UFUNCTION()
		void ButtonOneEvent();
	UFUNCTION()
		void ButtonTwoEvent();

public:///公有成员
	UPROPERTY(Meta = (BindWidget))
		UButton* ButtonOne;//获取UMG内部控件方法三:反射绑定

private:
	UImage* BGImage;
	UCanvasPanel* RootPanel;

	UImage* DynImage;//用于替换的动态图片

};
