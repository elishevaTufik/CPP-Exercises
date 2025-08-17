#include "gardenHouse.h"
int tmp = 0;
int gardenHouse::getTotalArea() const
{
    int a = getshetach();
    
    return (shetachGarden + getshetach());
}

const char* gardenHouse::getType() const
{
    return "gardenHouse";
}
