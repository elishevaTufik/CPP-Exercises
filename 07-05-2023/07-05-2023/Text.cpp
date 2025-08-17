#include "Text.h"
#include<iostream>
#include <string.h>
using namespace std;

char Text::getPrintValue(int x, int y) const
{
	if (x >= this->x && x <= this->x + strlen(this->text))
	{
		if (y == this->y )
		{
			return text[x-this->x];
		}
	}
	return '  ';
}

void Text::setInitialLocation(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Text::getArea() const
{
	cout << strlen(text) << endl;
}

void Text::getPerimeter() const
{/*
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
*/

}

int Text::getMinX() const
{
	return this->x;
}

int Text ::getMaxX() const
{
	return this->x + strlen(text);
}

int Text::getMinY() const
{
	return this->y;
}

int Text::getMaxY() const
{
	return this->y;
}
