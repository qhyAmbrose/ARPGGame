// Copyright Epic Games, Inc. All Rights Reserved.

#include "ARPGGameGameMode.h"
#include "ARPGGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AARPGGameGameMode::AARPGGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
