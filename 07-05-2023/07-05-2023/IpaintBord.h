#pragma once
#include "IPrintable.h"
class IpaintBord

{
	virtual void insertObject(IPrintable* obj) = 0;
	virtual void print()const = 0;

};

