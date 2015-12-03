// Fill out your copyright notice in the Description page of Project Settings.

#include"Blueprint/UserWidget.h"
#include "StarFox.h"
#include "StarFoxGameMode.h"

void AStarFoxGameMode::BeginPlay()
{
	Super::BeginPlay();
	if (HUDWidgetClass)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
		if (CurrentWidget)
		{
			CurrentWidget->AddToViewport();
		}
	}
}




