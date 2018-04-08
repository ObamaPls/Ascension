// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ASC_AscensionPlayer.generated.h"

UCLASS()
class ASCENSION_API AASC_AscensionPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	AASC_AscensionPlayer();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
