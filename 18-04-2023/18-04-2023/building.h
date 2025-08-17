#define _CRT_SECURE_NO_WARNINGS

#pragma once
#include "normalHouse.h"
#include "gardenHouse.h"
#include "pentHouse.h"
#include <string.h>
#include <stdio.h>
#include <iostream>
class building
{
	char streetname[20];
	int numHouse;
	int len;
public:
	normalHouse** arr;


	building(const char* streetname,int numHouse,int len)
	{
		strcpy(this->streetname,streetname);
		this->numHouse = numHouse;
		this->len = len;
		arr = new normalHouse * [len];
	}
	int finalshetach()const;
	int name(const char* named)const;
	int empty()const;
	void pirteiBinyan()const;
	};

