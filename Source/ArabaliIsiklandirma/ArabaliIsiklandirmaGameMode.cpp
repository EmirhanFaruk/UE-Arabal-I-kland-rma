// Copyright Epic Games, Inc. All Rights Reserved.

#include "ArabaliIsiklandirmaGameMode.h"
#include "ArabaliIsiklandirmaPawn.h"
#include "ArabaliIsiklandirmaHud.h"

AArabaliIsiklandirmaGameMode::AArabaliIsiklandirmaGameMode()
{
	DefaultPawnClass = AArabaliIsiklandirmaPawn::StaticClass();
	HUDClass = AArabaliIsiklandirmaHud::StaticClass();
}
