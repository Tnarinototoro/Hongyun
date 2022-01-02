// Copyright Epic Games, Inc. All Rights Reserved.

#include "YunChecheGameMode.h"
#include "YunChechePawn.h"
#include "YunChecheHud.h"

AYunChecheGameMode::AYunChecheGameMode()
{
	DefaultPawnClass = AYunChechePawn::StaticClass();
	HUDClass = AYunChecheHud::StaticClass();
}
