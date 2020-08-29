// Fill out your copyright notice in the Description page of Project Settings.


#include "Public/GameFrame/FWGameInstance.h"
#include "Public/Common/FWCommon.h"
#include "EngineUtils.h"
#include "Public/GameFrame/FWCharacter.h"
#include "Kismet/GameplayStatics.h"

void UFWGameInstance::GIEcho(FString info, int32 count)
{
	FWHelper::Debug(info + FString(" ") + FString::FromInt(count), 120.0f);
}

bool UFWGameInstance::ProcessConsoleExec(const TCHAR* Cmd, FOutputDevice& Ar, UObject* Executor)
{
	bool Res = Super::ProcessConsoleExec(Cmd, Ar, Executor);

	if (!Res)
	{	//��ȡ���� ����һ
		for (TActorIterator<AFWCharacter> It(GetWorld()); It; ++It)
		{
			Res = It->ProcessConsoleExec(Cmd, Ar, Executor);
		}
		//��ȡ���� ������
		/*TArray<AActor*> ActorArray;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFWCharacter::StaticClass(), ActorArray);//�õ�FWChAr������ʵ���浽����������
		for (AActor* Act:ActorArray)
		{
			Act->ProcessConsoleExec(Cmd, Ar, Executor);
		}*/
	}

	return Res;
}
