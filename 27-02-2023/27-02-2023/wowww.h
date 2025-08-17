
#define _CRT_SECURE_NO_WARNINGS 
#pragma once
#include <string.h>

class wowww
{
   char* fName;
   char* lName;
   int age;
   char* adress;

public:
	wowww(const wowww& other)//copy constractor
	{
		this->fName = new char[strlen(other.fName) + 1];
		strcpy(this->fName, other.fName);

		this->lName = new char[strlen(other.lName) + 1];
		strcpy(this->lName, other.lName);

		age = other.age;

		this->adress = new char[strlen(other.adress) + 1];
		strcpy(this->adress, other.adress);
		return;
	}


	wowww() :wowww("ploni", "almoni", 0, "no place")//constractor
	{
		return;

	}

	wowww(const char* fName, const  char* lName, int age, const char* adress)//constractor
	{
		this->fName = new char[strlen(fName) + 1];
		strcpy(this->fName,fName);

		this->lName = new char[strlen(lName) + 1];
		strcpy(this->lName, lName);

		this->age = age;

		this->adress = new char[strlen(adress) + 1];
		strcpy(this->adress, adress);

		
		return;

	}

	~wowww() //distractor
	{
		delete[]fName;
		delete[]lName;
		delete[]adress;
		return;

	}

	
	bool operator==(const wowww& other);
	void moveHome(const char* newAdress);
	void wedding(const char* newAdress);
	void wedding(const char* newAdress, const char* newlName);

}; 

