#include <iostream>
using namespace std;
#pragma once
class List
{
	//��� ����� ������� �����

protected:
	// ����� �����
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


	Node * head = nullptr;// ����� ���� ������

public:
	virtual void insertFirst(int value);
	virtual void print()const;
	virtual void clear();
	virtual void insertItemByIndex(int val, int indx);
	virtual void insertItemByIndexIfExist(int val, int indx);
	// ������� ������ ���� ����� ������� �����
	virtual void deleteItemByIndex(int indx);
	// ����� ���� ����� ������ �����
	virtual int getValueByIndex(int indx) const;
	// ����� ���� �������� 
	virtual int getMaxInList() const;

	~List()
	{
		clear();
	}
};

