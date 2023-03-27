// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"

/**
 * 
 */

UENUM()
enum class ERoomType {

	None,
	Init,
	Normal,
	Boss,
	Shop
};


class KYT_API CRoomData
{
public:
	CRoomData();
	~CRoomData();


private:

	ERoomType mRoomType;



public:

	void SetRoomType(ERoomType Type) {
		mRoomType = Type;
	}
	ERoomType GetRoomType() {
		return mRoomType;
	}


};
