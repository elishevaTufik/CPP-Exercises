// אלישבע טופיק ויעל אילוז
#include "hour.h"
#include <stdio.h>
#include <iostream>
using namespace std;

void hour::addTime(int h , int m , int s )
{
	this->s  = (this->s  + s ) % 60;
	this->m  = (this->m  + m ) % 60 + (this->s  + s ) / 60;
	this->h  = (this->h + h ) % 24 + (this->m + m ) / 60;
}
void hour::subTime(int h , int m , int s  )
{
	this->s  = (this->s  - s  + 60) % 60;
	this->m  = (this->m  - m  + 60) % 60 - s  / 60;
	this->h  = (this->h  - h   + 24) % 24 - m  / 60;
}

	void hour::printHour()
	{
		cout << h << ":" << m << ":" << s << endl;
	}
 