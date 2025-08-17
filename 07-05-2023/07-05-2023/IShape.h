#pragma once
class IShape
{
public:
	virtual void setInitialLocation(int x, int y) = 0;
	virtual  void getArea() const= 0;
	virtual  void getPerimeter()const = 0;


};

