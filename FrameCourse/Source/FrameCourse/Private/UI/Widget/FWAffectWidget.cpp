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

	//获取UMG内部控件方法一：强转子集
	RootPanel = Cast<UCanvasPanel>(UUserWidget::GetRootWidget());
	if (RootPanel!=nullptr)
	{
		BGImage = Cast<UImage>(RootPanel->GetChildAt(0));
	}
	//获取UMG内部控件方法二: GetWidgetFromeName
	UButton* ButtonTwo = (UButton*)UUserWidget::GetWidgetFromName(TEXT("ButtonTwo"));
	//获取UMG内部控件方法三：见 .h使用BindWidget说明符


	//绑定按钮事件方法一：_Internal_AddDynamic
	ButtonOne->OnClicked.__Internal_AddDynamic(this, &UFWAffectWidget::ButtonOneEvent, FName("ButtonOneEvent"));
	//绑定按钮事件方法二: FScriptDelegate
	FScriptDelegate _ButTwoDelegate;
	_ButTwoDelegate.BindUFunction(this, "ButtonTwoEvent");
	ButtonTwo->OnReleased.Add(_ButTwoDelegate);
	//绑定按钮事件方法三：在蓝图里直接进行节点链接


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
	//创建Widget方法二：利用WidgetTree
	DynImage = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass());
	//添加其 到Panel
	UCanvasPanelSlot* _DynamImageSlot = RootPanel->AddChildToCanvas(DynImage);
	_DynamImageSlot->SetAnchors(FAnchors(0.0f));
	_DynamImageSlot->SetOffsets(FMargin(244, 268, 100, 100));

}

void UFWAffectWidget::ButtonThreeEvent()
{
	FWHelper::Debug("ButtonThreeEvent works", 10.f);

	//若动态Image不存在，直接返回
	if (!DynImage) return;
	RootPanel->RemoveChild(DynImage); /*DynImage->RemoveFromParent();*/

	DynImage->ConditionalBeginDestroy();//清除资源
	DynImage = nullptr;//设置为空
}
