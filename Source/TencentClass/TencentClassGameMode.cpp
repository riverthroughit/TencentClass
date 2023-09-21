// Copyright Epic Games, Inc. All Rights Reserved.

#include "TencentClassGameMode.h"
#include "TencentClassHUD.h"
#include "TencentClassCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATencentClassGameMode::ATencentClassGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATencentClassHUD::StaticClass();
}
