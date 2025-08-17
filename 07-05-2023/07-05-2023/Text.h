#define _CRT_SECURE_NO_WARNINGS

#pragma once
#include "IShape.h"
#include "IPrintable.h"
#include <string>

class Text:
	public IShape,
	public IPrintable
{
	char* text;
	int x;
	int y;
public:
	Text(const char* text,int x,int y)
	{
		this->text = new char [strlen(text) + 1];
		strcpy( this->text, text);
		this-> x=x;
		this->y=y;
	}
	char getPrintValue(int x, int y)const;
	void setInitialLocation(int x, int y);
	void getArea() const;
	void getPerimeter()const;
	int getMinX() const;
	int getMaxX() const;
	int getMinY() const;
	int getMaxY()  const;
};

