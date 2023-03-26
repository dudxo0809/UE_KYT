// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicianPlayerCharacter.h"

#include "../KYTGameInstance.h"


AMagicianPlayerCharacter::AMagicianPlayerCharacter()
{


	mPlayerTableRowName = TEXT("Magician");



}

void AMagicianPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	UKYTGameInstance* GameInst = GetWorld()->GetGameInstance<UKYTGameInstance>();

	const FPlayerCharacterInfo* Info = GameInst->FindPlayerTable(mPlayerTableRowName);

	if (Info)
	{
		mInfo.Name = Info->Name;
		mInfo.AttackPoint = Info->AttackPoint;
		mInfo.ArmorPoint = Info->ArmorPoint;
		mInfo.HP = Info->HP;
		mInfo.HPMax = Info->HP;
		mInfo.MP = Info->MP;
		mInfo.MPMax = Info->MP;
		mInfo.Level = Info->Level;
		mInfo.Exp = Info->Exp;
		mInfo.Gold = Info->Gold;
		mInfo.MoveSpeed = Info->MoveSpeed;
		mInfo.BaseAttackDistance = Info->BaseAttackDistance;
		
		mInfo.Mesh = Info->Mesh;
	}
	
}

void AMagicianPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}

void AMagicianPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
