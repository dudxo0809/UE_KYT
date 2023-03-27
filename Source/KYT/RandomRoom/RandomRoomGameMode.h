// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KYTGameModeBase.h"


#include "RandomRoomGameMode.generated.h"

/**
 * 
 */
class ARoomBase;

class CRoomData;
class CFloorData;

UCLASS()
class KYT_API ARandomRoomGameMode : public AKYTGameModeBase
{
	GENERATED_BODY()
	


public:
	ARandomRoomGameMode();



private:

	CFloorData* mFloorData;
	ARoomBase* mRoomBase;



public:
	virtual void BeginPlay()	override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason)override;

	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage);
	virtual void PostLogin(APlayerController* NewPlayer);
	virtual void Tick(float DeltaTime)	override;

};
