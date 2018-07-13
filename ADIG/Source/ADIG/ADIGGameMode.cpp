// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ADIGGameMode.h"
#include "ADIGPawn.h"

AADIGGameMode::AADIGGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AADIGPawn::StaticClass();
}
