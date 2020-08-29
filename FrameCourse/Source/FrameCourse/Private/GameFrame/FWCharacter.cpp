// Fill out your copyright notice in the Description page of Project Settings.


#include "Public/GameFrame/FWCharacter.h"
#include "Public/Common/FWCommon.h"


// Sets default values
AFWCharacter::AFWCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AFWCharacter::CAFuncOne(int32 Input, bool& Output)
{

}


void AFWCharacter::CAFuncThree_Implementation(int32 Input, bool& Output)
{

}

void AFWCharacter::CAFuncFour(FString Info, int32 Count)
{
	FWHelper::Debug(Info + FString(" ") + FString::FromInt(Count), 120.f);
}

#if WITH_EDITOR
void AFWCharacter::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	if ( PropertyChangedEvent.Property !=nullptr 
			&& PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(AFWCharacter, CASix))
	{
		//������ͼ���޸ĳ�Աֵʱ�����ó�Ա����ƥ��ΪCASix�򽫳�ԱCACount��10;���˴�CACount��CASix�Ķ�ʱ��ӳ��
		CACount += 10;
	}
}
#endif

// Called when the game starts or when spawned
void AFWCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFWCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFWCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

