#pragma once
#include "IpaintBord.h"
#include "IPrintable.h"

class ConsolePaintBoard:
	public IpaintBord
{
	IPrintable* arr [255];
	int index = 0;
	
	int higth;
	int wiedth;

public:
	ConsolePaintBoard(int higth, int wiedth)
	{
		this->wiedth = wiedth;
		this->higth = higth;
	}
	void insertObject(IPrintable* obj);
	void print()const;



};

