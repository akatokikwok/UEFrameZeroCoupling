// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture2D.h"
#include "FWDataSingleton.generated.h"

/**
 * 
 */
UCLASS( Blueprintable, BlueprintType)/*加上2个关键字*/
class FRAMECOURSE_API UFWDataSingleton : public UObject
{
	GENERATED_BODY()
public:
	UFWDataSingleton();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Framework")
		TArray<UClass*> SourceBlueprints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Framework")
		UTexture2D* Source2D;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Framework")
		FVector SourceVector;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Framework")
		FString SourceFilePath;

	
};
