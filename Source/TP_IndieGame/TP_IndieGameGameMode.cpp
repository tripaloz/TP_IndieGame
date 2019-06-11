// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TP_IndieGameGameMode.h"
#include "TP_IndieGamePlayerController.h"
#include "TP_IndieGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATP_IndieGameGameMode::ATP_IndieGameGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATP_IndieGamePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}