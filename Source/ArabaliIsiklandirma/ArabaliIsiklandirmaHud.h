// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "ArabaliIsiklandirmaHud.generated.h"


UCLASS(config = Game)
class AArabaliIsiklandirmaHud : public AHUD
{
	GENERATED_BODY()

public:
	AArabaliIsiklandirmaHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
