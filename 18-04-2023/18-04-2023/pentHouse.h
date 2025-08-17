#pragma once
#include "normalHouse.h"
class pentHouse :
    public normalHouse
{
    int shetachMir;
public:
	pentHouse():normalHouse()
	{
		this->shetachMir = 0;
	}
	 
	pentHouse( const char* name,int shetachMir, int shetach, int numOfRooms, int level) :normalHouse(name,shetach, numOfRooms, level)
	{
		this->shetachMir = shetachMir;
	}

	int getshetachMir()
	{

		return  this->shetachMir;
	}
	void setshetachMir(int shetachMir)
	{
		
		this->shetachMir = shetachMir;
	}
	//int getTotalArea() const;

	int getPentTotalArea() const;

	const char* getType()const ;


};

