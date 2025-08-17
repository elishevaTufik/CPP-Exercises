#pragma once
class IPrintable
{
public:

	virtual  char getPrintValue(int x, int y) const = 0;
	
	virtual  int getMinX() const  = 0;
	virtual  int getMaxX() const  = 0;
	virtual  int getMinY() const = 0;
	virtual  int getMaxY()  const = 0;

};


