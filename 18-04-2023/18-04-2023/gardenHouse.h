#pragma once
#include "normalHouse.h"
class gardenHouse :
    public normalHouse
{
    int shetachGarden;
    bool enter;
public:
	gardenHouse() :normalHouse()
	{
		this->shetachGarden = 0;
		this->enter = false;
	}

	gardenHouse(const char* name,int shetachGarden, int shetach, int numOfRooms, int level, bool enter) :normalHouse(name, shetach, numOfRooms, level)
	{
		this->shetachGarden = shetachGarden;
		this->enter = enter;
	}

	int getshetachGarden()
	{
		return  this->shetachGarden;
	}
	void setshetachGarden(int shetachGarden)
	{
		this->shetachGarden = shetachGarden;
	}

	bool getenter()
	{
		return  this->enter;
	}
	void setenter(int enter)
	{
		this->enter = enter;
	}
	int getTotalArea() const;
	const char* getType()const;

};

