#define _CRT_SECURE_NO_WARNINGS

#include "IShape.h"
#include "IPrintable.h"
#include "Rectangle.h"
#include "IpaintBord.h"
#include "ConsolePaintBoard.h"
#include "Text.h"

void main()
{
	Rectangle r= Rectangle(16,18,22,60);
	Rectangle r2 = Rectangle(8,8,45, 65);
	Text t = Text("yael & eli7", 0, 80);
	ConsolePaintBoard c(100, 100);
	c.insertObject(&r);
	c.insertObject(&r2);
	c.insertObject(&t);
	c.print();
}