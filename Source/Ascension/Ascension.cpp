// Fill out your copyright notice in the Description page of Project Settings.

#include "Ascension.h"
#include "Engine.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, Ascension, "Ascension" );

void QuickPrint(const FString& DebugMessage, float TimeToDisplay, const FVector2D& TextScale, FColor DisplayColor)
{
	 if (GEngine)
	 {
		GEngine->AddOnScreenDebugMessage(-1, TimeToDisplay, DisplayColor, DebugMessage, false, TextScale);
	 }
}		 

void QuickPrint(const float DebugMessage, float TimeToDisplay, const FVector2D& TextScale, FColor DisplayColor)
{
	 if(GEngine)
	 {
		  GEngine->AddOnScreenDebugMessage(-1, TimeToDisplay,DisplayColor ,FString::SanitizeFloat(DebugMessage), false, TextScale);	   
	 }
}
