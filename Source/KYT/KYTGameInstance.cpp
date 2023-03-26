// Fill out your copyright notice in the Description page of Project Settings.


#include "KYTGameInstance.h"




UKYTGameInstance::UKYTGameInstance()
{
}


UKYTGameInstance::~UKYTGameInstance()
{
}

void UKYTGameInstance::Init()
{
}

const FPlayerCharacterInfo* UKYTGameInstance::FindPlayerTable(const FName& Name)
{
	return m_PlayerTable->FindRow<FPlayerCharacterInfo>(Name, TEXT(""));
}
