// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TencentClassHUD.generated.h"

UCLASS()
class ATencentClassHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATencentClassHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

