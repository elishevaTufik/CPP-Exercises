#include <iostream>
using namespace std;
#pragma once
class List
{
	//יעל אילוז ואלישבע טופיק

protected:
	// מתארת חוליה
	class Node
	{
		int val;
	public:
		Node* next;

		Node(int val, Node * next): val(val),next(next)
		{

		}
		int getVal()const
		{
			return val;
		}
		const Node* getNext()const
		{
			return next;
		}
		friend class List;
	};


	Node * head = nullptr;// מצביע לראש הרשימה

public:
	virtual void insertFirst(int value);
	virtual void print()const;
	virtual void clear();
	virtual void insertItemByIndex(int val, int indx);
	virtual void insertItemByIndexIfExist(int val, int indx);
	// פונקציה שמוחקת איבר שנמצא באינדקס מסוים
	virtual void deleteItemByIndex(int indx);
	// החזרת הערך שנמצא באינקס מסוים
	virtual int getValueByIndex(int indx) const;
	// החזרת הערך המקסימלי 
	virtual int getMaxInList() const;

	~List()
	{
		clear();
	}
};

