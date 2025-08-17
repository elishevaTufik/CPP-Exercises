#include "turn.h"
#include "priority.h"
#include <map>
#include <queue>
#include <iostream>
//אלישבע טופיק ויעל אילוז
//תודה רבה
void main()
{
	turn<char> tor;
	tor.enqueue('a', normal);
	tor.enqueue('b',high);
	tor.enqueue('c',low);
	tor.enqueue('d', normal);	
	tor.enqueue('e', high);
	tor.enqueue('g', normal);
	tor.enqueue('j', low);
	tor.enqueue('r', low);

	try {
		cout << tor.dequeue() << endl;
		cout << tor.dequeue() << endl;
		cout << tor.dequeue() << endl;
	}
	catch(...){

}
	cout << tor.count() << endl;

}