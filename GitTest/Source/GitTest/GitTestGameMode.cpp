// Copyright Epic Games, Inc. All Rights Reserved.

#include "GitTestGameMode.h"
#include "GitTestHUD.h"
#include "GitTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGitTestGameMode::AGitTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGitTestHUD::StaticClass();
}
