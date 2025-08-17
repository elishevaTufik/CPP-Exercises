#include <list>
#include <algorithm>
#include <stdio.h>
#include <iostream>

#pragma once
//אלישבע טופיק ויעל אילוז
//תודה רבה!!
using namespace std;
void main()
{
	list<int> ls;
	for (int i = 0; i <10; i++)
	{
		ls.push_back(rand()%900*(pow(-1,i)));
	}

	cout << "the source list :" << endl;
	for (auto j = ls.begin();j!=ls.end(); j++)
	{
		cout << *j << endl;
	}


	for_each(ls.begin(), ls.end(), [](int& i) {if (i > 0)  i = i*2; });
	
	cout << "after *2 :" << endl;

	for (auto j = ls.begin(); j != ls.end(); j++)
	{
		cout << *j << endl;
	}

	int rish = count_if(ls.begin(), ls.end(), [](int num) {
		for (int k = 2; k < num; k++) {
			if (num % k == 0)
				return false;//not rishoni
		}return true;
		;});
	cout << "rish: " << rish<<endl;

	ls.sort();

	int middle = 0;
	for_each(ls.begin(), ls.end(), [&middle,ls](int& f) {
		if (f == ls.size() / 2 )
		middle += f;
		if ( f == ls.size() / 2 + 1)
		{middle += f;
		}});

	middle = middle / 2;
	cout << "middle: "<<middle << endl;

	cout<<"all of: " << all_of(ls.begin(), ls.end(), [](int num) {if (num % 10 % 2 != 0)return true; }) << endl;
	cout << "any_of: " << any_of(ls.begin(), ls.end(), [](int num) {if (num % 10 % 2 != 0)return true; }) << endl;
	
	ls.sort();
	ls.reverse();
	cout << "after reverse: " << endl;
	for (auto j = ls.begin(); j != ls.end(); j++)
	{
		cout << *j << endl;
	}


}


