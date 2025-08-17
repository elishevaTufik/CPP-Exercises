#include "List.h"
//יעל אילוז ואלישבע טופיק

void List::insertFirst(int value)
{
	Node* tmp = new Node(value, head);
	head = tmp;
}

void List::print() const
{
	const Node* ptr = head;
	while (ptr)
	{
		cout << ptr->getVal() << ",";
		ptr = ptr->getNext();
	}

	cout << endl;
}

// מחיקת רשימה
void List::clear()
{
	Node* tmp ;
	while (head)
	{
		tmp = head;
		head = head->next;
		delete tmp;
	}
}

void List::insertItemByIndex(int val, int indx)
{
	if (indx == 0 || !head)
	{
		insertFirst(val);
		return;
	}
	Node* tmp = head;

	for (int i = 0; i < indx - 1 && tmp->next; i++, tmp = tmp->next);

	Node* newNode = new Node(val, tmp->next);// יצירת איבר חדש
	tmp->next = newNode;

}

void List::insertItemByIndexIfExist(int val, int indx)
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
	int i;
	for (i = 0; i < indx - 1 && tmp->next; i++, tmp = tmp->next);

	if (i< indx - 1)
	{
		throw "There is no such index to insert";
	}
	// הוספת החדש
	Node* newNode = new Node(val, tmp->next);// יצירת איבר חדש
	tmp->next = newNode;

}

void List::deleteItemByIndex(int indx)
{
	if (!head)
	{
		throw "The list is empty??";
	}
	Node* tmp = head;
	for (int i = 0; i < indx - 2 && tmp->next; i++, tmp = tmp->next);
	//טמפ מצביע על המקום האיי
	Node * ezer= tmp->next;
	tmp->next = tmp->next->next;
	delete ezer;

}

int List::getValueByIndex(int indx) const
{
	Node* tmp = head;

	for (int i = 0; i < indx - 1 && tmp->next; i++, tmp = tmp->next);
	return tmp->val;



}

int List::getMaxInList()const
{
	if (!head)
	{
		throw ("the list is empty!😒😋😛");
	}
	Node* tmp = head;
	int max = head->val;
	while (tmp)
	{
		if (tmp->val > max)
		{
			max = tmp->val;
		}
	 tmp = tmp->next;
	}return max;
}
