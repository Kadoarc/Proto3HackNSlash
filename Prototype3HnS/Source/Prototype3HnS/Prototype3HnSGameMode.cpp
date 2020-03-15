// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Prototype3HnSGameMode.h"
#include "Prototype3HnSCharacter.h"
#include "UObject/ConstructorHelpers.h"

APrototype3HnSGameMode::APrototype3HnSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
