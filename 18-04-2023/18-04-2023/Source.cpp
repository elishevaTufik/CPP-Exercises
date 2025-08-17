#define _CRT_SECURE_NO_WARNINGS

#pragma once
#include "building.h"
#include "normalHouse.h"
#include "gardenHouse.h"
#include "pentHouse.h"

int main()
{
	building mybuilding("100 shearim", 99, 10);
	mybuilding.arr[0] = new normalHouse("levi", 100, 4, 2);
	mybuilding.arr[1] = new pentHouse("choen", 80, 3, 3, 15);
	mybuilding.arr[2] = new gardenHouse("kloytzpenmacher",4, 90, 5, 30, true);
	mybuilding.arr[3] = new normalHouse("tufik", 60, 2, 5);
	mybuilding.arr[4] = new pentHouse("iluz", 110, 6, 6, 20);

}
