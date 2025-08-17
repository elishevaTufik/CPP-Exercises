#include "building.h"
#include "normalHouse.h"
#include "gardenHouse.h"
#include "pentHouse.h"
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int building::finalshetach() const
{
    int sum = 0;
	for (int i=0; i < len; i++)
	{
		if(arr[i]->getType()=="gardenHouse")
		{
			sum += ((gardenHouse*)(arr[i]))->getshetachGarden();
		}
	}
    return sum;
}

int building::name(const char* named) const
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i]->getname() == named)
		{
				return i;
		}
	}
}

int building::empty() const
{
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i]->getname() == NULL)
		{
			sum++;
		}
	}
	return sum;
}

void building::pirteiBinyan() const
{
	cout << "adress:" << streetname << numHouse <<endl;
	cout << "num of houses:" << len<< endl;
	cout << "peroot of the houses::" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "house number " << i << endl;
		arr[i]->getDetails();
	}
}
