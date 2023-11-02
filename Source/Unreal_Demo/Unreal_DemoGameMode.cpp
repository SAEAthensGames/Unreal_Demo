// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal_DemoGameMode.h"
#include "Unreal_DemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnreal_DemoGameMode::AUnreal_DemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
