// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "GameFramework/GameMode.h"
#include "StarFoxGameMode.generated.h"

/**
 * 
 */
UCLASS()
class STARFOX_API AStarFoxGameMode : public AGameMode
{
	GENERATED_BODY()
public:
		virtual void BeginPlay() override;

		UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class UUserWidget> HUDWidgetClass;
	
	UPROPERTY()
		class UUserWidget* CurrentWidget;
	
};
