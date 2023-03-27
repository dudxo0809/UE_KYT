// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomRoomGameMode.h"


#include "RandomRoomGenerator.h"
#include "FloorData.h"
#include "RoomData.h"

#include "RoomBase.h"

ARandomRoomGameMode::ARandomRoomGameMode()
{
	mFloorData = nullptr;




}

void ARandomRoomGameMode::BeginPlay()
{
	Super::BeginPlay();

	int32 N = (int32)EFloorInfo::RoomY;
	int32 M = (int32)EFloorInfo::RoomX;


	CRandomRoomGenerator* RandomRoomGenerator = CRandomRoomGenerator::GetInst();
	mFloorData = RandomRoomGenerator->MakeFloorData(N, M);


	// Spawn Actor from FloorData

	//mFloorData;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			ERoomType RoomType = mFloorData->GetRoomData(i, j)->GetRoomType();
			if (RoomType == ERoomType::Normal) {

				FActorSpawnParameters	SpawnParam;

				GetWorld()->SpawnActor<ARoomBase>(FVector(0, 0, 0) + FVector(1000 * j, 1000 * i, 0), FRotator(0, 0, 0), SpawnParam);
			}
			else if (RoomType == ERoomType::Init) {

				FActorSpawnParameters	SpawnParam;

				ARoomBase* Room = GetWorld()->SpawnActor<ARoomBase>(FVector(0, 0, 0) + FVector(1000 * i, 1000 * j, 100), FRotator(0, 0, 0), SpawnParam);
			}
		}
	}


}

void ARandomRoomGameMode::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

}

void ARandomRoomGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

}

void ARandomRoomGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

}

void ARandomRoomGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
