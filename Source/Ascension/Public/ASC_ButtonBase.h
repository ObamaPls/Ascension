// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ASC_ButtonBase.generated.h"

UCLASS()
class ASCENSION_API AASC_ButtonBase : public AActor
{
	GENERATED_BODY()
	
public:	
	AASC_ButtonBase();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
