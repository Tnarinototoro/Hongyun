// Fill out your copyright notice in the Description page of Project Settings.


#include "DataStoring.h"

bool UDataStoring::LoadTxt(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameSourceDir() + FileNameA));
}
bool UDataStoring::SaveText(FString FileNameB, FString SaveTextB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameSourceDir() + FileNameB));
}

