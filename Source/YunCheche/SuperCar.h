// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"
#include "SuperCar.generated.h"

/**
 * 
 */
UCLASS()
class YUNCHECHE_API ASuperCar : public AWheeledVehicle
{
	GENERATED_BODY()
    public:
	UFUNCTION(BlueprintCallable)
	void ResetYourCar();

};
