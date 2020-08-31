// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Widget/FWAffectWidget.h"
#include "UserWidget.h"
#include "CanvasPanel.h"
#include "Image.h"
#include "Button.h"
#include "DelegateSignatureImpl.inl"
#include "WeakObjectPtr.h"
#include "FWCommon.h"
#include "WidgetTree.h"
#include "CanvasPanelSlot.h"

UFWAffectWidget::UFWAffectWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
}

bool UFWAffectWidget::Initialize()
{
	if ( !Super::Initialize() )
	{
		return false;
	}

	//��ȡUMG�ڲ��ؼ�����һ��ǿת�Ӽ�
	RootPanel = Cast<UCanvasPanel>(UUserWidget::GetRootWidget());
	if (RootPanel!=nullptr)
	{
		BGImage = Cast<UImage>(RootPanel->GetChildAt(0));
	}
	//��ȡUMG�ڲ��ؼ�������: GetWidgetFromeName
	UButton* ButtonTwo = (UButton*)UUserWidget::GetWidgetFromName(TEXT("ButtonTwo"));
	//��ȡUMG�ڲ��ؼ����������� .hʹ��BindWidget˵����


	//�󶨰�ť�¼�����һ��_Internal_AddDynamic
	ButtonOne->OnClicked.__Internal_AddDynamic(this, &UFWAffectWidget::ButtonOneEvent, FName("ButtonOneEvent"));
	//�󶨰�ť�¼�������: FScriptDelegate
	FScriptDelegate _ButTwoDelegate;
	_ButTwoDelegate.BindUFunction(this, "ButtonTwoEvent");
	ButtonTwo->OnReleased.Add(_ButTwoDelegate);
	//�󶨰�ť�¼�������������ͼ��ֱ�ӽ��нڵ�����


	return true;
}


void UFWAffectWidget::ButtonOneEvent()
{
	FWHelper::Debug("ButtonOneEvent works", 10.f);

	UTexture2D* TarTex = LoadObject<UTexture2D>(NULL, TEXT("Texture2D'/Game/Resource/UI/Texture/MenuTex/book.book'"));
	BGImage->SetBrushFromTexture(TarTex);
}

void UFWAffectWidget::ButtonTwoEvent()
{
	FWHelper::Debug("ButtonTwoEvent works", 10.f);

	if (DynImage != nullptr) return;
	//����Widget������������WidgetTree
	DynImage = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass());
	//����� ��Panel
	UCanvasPanelSlot* _DynamImageSlot = RootPanel->AddChildToCanvas(DynImage);
	_DynamImageSlot->SetAnchors(FAnchors(0.0f));
	_DynamImageSlot->SetOffsets(FMargin(244, 268, 100, 100));

}

void UFWAffectWidget::ButtonThreeEvent()
{
	FWHelper::Debug("ButtonThreeEvent works", 10.f);

	//����̬Image�����ڣ�ֱ�ӷ���
	if (!DynImage) return;
	RootPanel->RemoveChild(DynImage); /*DynImage->RemoveFromParent();*/

	DynImage->ConditionalBeginDestroy();//�����Դ
	DynImage = nullptr;//����Ϊ��
}
