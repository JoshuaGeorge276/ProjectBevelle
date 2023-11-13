// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectBevelleUE5GameMode.h"
#include "ProjectBevelleUE5Character.h"
#include "UObject/ConstructorHelpers.h"

AProjectBevelleUE5GameMode::AProjectBevelleUE5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
