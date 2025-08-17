#include "ConsolePaintBoard.h"
#include<iostream>
using namespace std;

void ConsolePaintBoard::insertObject(IPrintable* obj)
{
	arr[index++] =obj;

}

void ConsolePaintBoard::print() const
{
	for (int i = 0; i < higth; i++)
	{
		for (int j = 0; j < wiedth; j++) 
		{
			char c =' ';
			for (int w = 0; w < index; w++)
			{
				if (arr[w]->getPrintValue(j, i) == '*')
				{
					c = '*';
					break;
				}
				else
				{
					if (c!= '*')
					{
						if (arr[w]->getPrintValue( j,i) != ' ')
							c = arr[w]->getPrintValue(j,i);
					}
				}
			}
			cout << c;
		}
		cout << endl;

	}
	
}
