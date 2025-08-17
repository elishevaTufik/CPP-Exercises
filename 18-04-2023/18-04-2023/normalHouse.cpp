#define _CRT_SECURE_NO_WARNINGS
#include "normalHouse.h"
#include<string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

void  normalHouse::getDetails() const
{
	cout<< name <<endl;
	cout << shetach << endl;
	cout << numOfRooms << endl;
	cout << level << endl;
}

int normalHouse::getTotalArea() const
{
	return shetach;
}
const char* normalHouse::getType()const
{
	return "normalHouse";
}