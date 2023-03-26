// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "Engine/GameInstance.h"

#include "Character/CharacterInfo.h"

#include "KYTGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class KYT_API UKYTGameInstance : public UGameInstance
{
	GENERATED_BODY()
	

public:
	UKYTGameInstance();
	~UKYTGameInstance();

private:
	UDataTable* m_PlayerTable;


public:
	virtual void Init();

public:
	const FPlayerCharacterInfo* FindPlayerTable(const FName& Name);
	
};
