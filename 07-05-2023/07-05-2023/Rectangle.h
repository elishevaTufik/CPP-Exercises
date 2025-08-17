#pragma on+---ce
#include "IShape.h"
#include "IPrintable.h"

class Rectangle :
	public IShape,
	public IPrintable
{
	int higth;
	int wiedth;

	int x;
	int y;

public:

	 Rectangle(int higth, int wiedth, int x, int y)
	 {
		 this-> higth= higth;
		 this->wiedth=wiedth;
		 this->x=x;
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

