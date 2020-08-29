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
		//当在蓝图里修改成员值时，若该成员名字匹配为CASix则将成员CACount加10;即此处CACount是CASix改动时的映射
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

