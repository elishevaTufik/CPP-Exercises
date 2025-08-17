#include "List.h"
#pragma once
class DoubleList :public List
{
	Node* last = nullptr;
public:

	virtual void insertItemByIndex(int val, int indx);
	virtual void insertItemByIndexIfExist(int val, int indx);
	// פונקציה שמוחקת איבר שנמצא באינדקס מסוים
	virtual void deleteItemByIndex(int indx);

};

