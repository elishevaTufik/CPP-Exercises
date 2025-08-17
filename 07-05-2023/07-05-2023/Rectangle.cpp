#include "Rectangle.h"
#include<iostream>
using namespace std;

char Rectangle::getPrintValue(int x, int y) const
{
	if (x >= this->x && x <= this->x + this->wiedth)
	{		
		if (y >= this->y && y <= this->y + this->higth)
		{
			return '*';
		}
		
	}
	return '  ';
}

void Rectangle::setInitialLocation(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Rectangle::getArea() const
{
	cout<< higth * wiedth<<endl;
}

void Rectangle::getPerimeter() const
{
	if (getPrintValue(x, y) == '*')
	{
		cout << "malben" << endl;
		return;
	}
	if (getPrintValue(x, y) == ' ')
	{
		cout << "nothing" << endl;
		return;
	}
	cout << "text" << endl;


}

int Rectangle::getMinX() const
{
	return this->x;
}

int Rectangle::getMaxX() const
{
	return this->x+wiedth;
}

int Rectangle::getMinY() const
{
	return this->y;
}

int Rectangle::getMaxY() const
{
	return this->y+higth;
}
