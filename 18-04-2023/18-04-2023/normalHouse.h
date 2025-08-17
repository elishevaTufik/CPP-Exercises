#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

class normalHouse
 {
	char name[20];
	int shetach;
	int numOfRooms;
	int level;
public:
	normalHouse():normalHouse(" ",0,0,0)
	{

	}
	normalHouse(const char* name, int shetach,int numOfRooms,int level)
	{
		strcpy(this->name, name);
		this->shetach= shetach;
		this->numOfRooms = numOfRooms;
		this->level = level;
	}

	char* getname()
	{
		return name;
	}
	void setname(char* name)
	{
		for (int i = 0; i < strlen(name); i++)
		{
			name[i] = this->name[i];
		}
	}

	int getshetach() const
	{
		return  this->shetach;
	}
	void setshetach(int shetach)
	{
		this->shetach = shetach;
	}

	int getnumOfRooms()
	{
		return  this->numOfRooms;
	}
	void setnumOfRooms(int numOfRooms)
	{
		this->numOfRooms = numOfRooms;
	}

	int getlevel()
	{
		return  this->level;
	}
	void setlevel(int level)
	{
		this->level = level;
	}

	void getDetails() const; 
	virtual int getTotalArea() const;
	virtual const char* getType()const  ;
};

