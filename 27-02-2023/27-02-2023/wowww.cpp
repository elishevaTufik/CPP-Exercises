
#include "wowww.h"
#include <string.h>

void wowww::moveHome(const char* newAdress)
{
	for (int i = 0; i < strlen(newAdress); i++)
	{
		this->adress[i] = newAdress[i];
	}
	return;
}

void wowww::wedding(const char* newAdress)
{
	moveHome(newAdress);
}

void wowww::wedding(const char* newAdress, const char* newlName)
{
	moveHome(newAdress);
	for (int i = 0; i < strlen(newlName); i++)
	{
		this->lName[i] = newlName[i];
	}
	return;
}

bool wowww::operator==(const wowww& other)
{
	return age == other.age;
}
