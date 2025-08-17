#include "pentHouse.h"
#include "normalHouse.h"

int pentHouse::getPentTotalArea() const
{
	return shetachMir + this->getshetach();

}


const char* pentHouse::getType() const
{
	return "pentHouse";
}
