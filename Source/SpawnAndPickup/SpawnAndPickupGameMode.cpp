// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpawnAndPickupGameMode.h"
#include "SpawnAndPickupCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpawnAndPickupGameMode::ASpawnAndPickupGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
