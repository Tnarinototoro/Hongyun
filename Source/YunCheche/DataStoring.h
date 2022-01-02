// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <Misc/FileHelper.h>
#include <Misc/Paths.h>
#include "DataStoring.generated.h"

/**
 * 
 */
UCLASS()
class YUNCHECHE_API UDataStoring : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "File", meta = (Keywords = "LoadText"))
		static bool LoadTxt(FString FileNameA, FString& SaveTextA);
	UFUNCTION(BlueprintCallable, Category = "File", meta = (Keywords = "SaveText"))
		static bool SaveText(FString FileName, FString SaveTextB);
};
