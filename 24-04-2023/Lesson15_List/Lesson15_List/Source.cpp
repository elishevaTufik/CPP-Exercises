#include <iostream>
#include "List.h"
#include "DoubleList.h"
using namespace std;
//יעל אילוז ואלישבע טופיק

void main()
{
	List l;
	l.insertFirst(10);
	l.insertFirst(8);
	l.insertFirst(4);
	l.insertFirst(2);
	l.insertFirst(5);
	l.print();
	l.deleteItemByIndex(2);
	l.print();
	cout << l.getValueByIndex(2) << endl;
	cout << l.getMaxInList() << endl;
	cout<<("___________")<<endl;
	l.insertItemByIndex(4,2);
	l.print();

	l.insertItemByIndexIfExist(5,5);
	l.print();

	l.deleteItemByIndex(2);
	l.print();


}