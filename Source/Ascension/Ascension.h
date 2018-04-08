// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/*
	 Prints something to the screen
	 @DebugMessage		 : The message that will be shown.
	 @TimeToDisplay		 : How long does the message is going to be shown.
	 @bNewerOnTop		 : If false, will replace the last message displayed.
	 @TextScale			 : Size of the text.
	 @DisplayColor		 : Color of the text.
*/
void QuickPrint(const FString& DebugMessage, float TimeToDisplay = 3.0f, const FVector2D& TextScale = FVector2D(1.0f,1.0f), FColor DisplayColor = FColor::White);

/*
	 Prints something to the screen
	 @DebugMessage		 : The message that will be shown.
	 @TimeToDisplay		 : How long does the message is going to be shown.
	 @bNewerOnTop		 : If false, will replace the last message displayed.
	 @TextScale			 : Size of the text.
	 @DisplayColor		 : Color of the text.
*/
void QuickPrint(float DebugMessage, float TimeToDisplay = 2.0f, bool bNewerOnTop = true, FVector2D TextScale = FVector2D(3, 3), FColor DisplayColor = FColor::Blue);