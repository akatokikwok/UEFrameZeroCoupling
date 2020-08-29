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
public:///���з���
	UFWAffectWidget( const FObjectInitializer& ObjectInitializer);

	//�󲿷�uuserwidget���͵ĳ�ʼ������
	virtual bool Initialize() override;

	UFUNCTION(BlueprintCallable, Category = "Framework")
		void ButtonThreeEvent();
	UFUNCTION()
		void ButtonOneEvent();
	UFUNCTION()
		void ButtonTwoEvent();

public:///���г�Ա
	UPROPERTY(Meta = (BindWidget))
		UButton* ButtonOne;//��ȡUMG�ڲ��ؼ�������:�����

private:
	UImage* BGImage;
	UCanvasPanel* RootPanel;

	UImage* DynImage;//�����滻�Ķ�̬ͼƬ

};
