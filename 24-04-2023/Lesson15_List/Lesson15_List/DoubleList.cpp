#include "DoubleList.h"
//יעל אילוז ואלישבע טופיק
void DoubleList::insertItemByIndex(int val, int indx)
{
	if (indx == 0 || !head)
	{
		insertFirst(val);
		return;
	}
	Node* tmp = head;
	for (int i = 0; i < indx - 1 && tmp->next; i++, tmp = tmp->next);

	if (tmp->next != nullptr) 
	{
		Node* newNode = new Node(val, tmp->next);// יצירת איבר חדש
		tmp->next = newNode;
	}
	else{
		Node* newNode = new Node(val, nullptr);//יצרתי אובייקט חדש בסוףףף הרשימה
		last = newNode;
	}

}

void DoubleList::insertItemByIndexIfExist(int val, int indx)
{

	if (indx == 0)
	{
		insertFirst(val);
		return;
	}

	if (!head)
	{
		throw "The list is empty!";
	}

	Node* tmp = head;
	int i=0;
	for (; i < indx - 1 && tmp->next; i++, tmp = tmp->next);

	if (i < indx - 1)
	{
		throw "There is no such index to insert";
	}
	if (tmp->next != nullptr)
	{
		Node* newNode = new Node(val, tmp->next);// יצירת איבר חדש
		tmp->next = newNode;
	}
	else {
		Node* newNode = new Node(val, nullptr);//יצרתי אובייקט חדש בסוףףף הרשימה
		last = newNode;
	}

}

void DoubleList::deleteItemByIndex(int indx)
{
	if (!head)
	{
		throw "The list is empty";
	}
	Node* tmp = head;
	for (int i = 0; i < indx - 2 && tmp->next; i++, tmp = tmp->next);
	if (tmp->next != nullptr)
	{ 
		Node* ezer = tmp->next;
		tmp->next = tmp->next->next;
		delete ezer;
	}
	else 
	{
		delete tmp->next;
	}
}
