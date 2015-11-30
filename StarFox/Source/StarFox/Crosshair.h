// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "Crosshair.generated.h"

/**
 * 
 */
UCLASS()
class STARFOX_API ACrosshair : public AHUD
{
	GENERATED_BODY()
	
public:
	ACrosshair();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;
	
	
};
