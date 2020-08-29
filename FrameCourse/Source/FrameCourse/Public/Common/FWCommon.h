// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/GameEngine.h"
#include "FWCommon.generated.h"

namespace FWHelper
{
	FORCEINLINE void Debug(FString _Message, float _Duration)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, _Duration, FColor::Yellow, _Message);
		}
	}
}


/**
 * 
 */
UCLASS()
class FRAMECOURSE_API UFWCommon : public UObject
{
	GENERATED_BODY()
	
};
