// Fill out your copyright notice in the Description page of Project Settings.


#include "SuperCar.h"

void ASuperCar::ResetYourCar()
{
	UE_LOG(LogTemp, Warning, L"RESET the car")
	FRotator Rotation = GetActorRotation();
	Rotation.Pitch = 0;
	Rotation.Roll = 0;
	GetMesh()->SetAllPhysicsRotation(FQuat(Rotation));
}