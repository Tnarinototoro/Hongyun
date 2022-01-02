// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "YunChecheHud.generated.h"


UCLASS(config = Game)
class AYunChecheHud : public AHUD
{
	GENERATED_BODY()

public:
	AYunChecheHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
