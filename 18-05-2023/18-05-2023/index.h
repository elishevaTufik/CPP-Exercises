#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <vector>
#include <map>
#include <string>
#include <list>
#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;
//אלישבע טופיק ויעל אילוז
//תודה רבה

#pragma once
class index
{
	map<string, vector<int>> m;
	const char* keys;
	const char* book;
	char c;
public:
	index(const char* keys, const char* book,char c)
	{
		this->keys = keys;
		this->book = book;
		this->c = c;
	}

	
	void readFromFile()
	{
		ifstream keys(this->keys);
		char b[200];
		char key[200];
		while(!keys.eof())
		{ 
			keys >> key;
			int count = 0;
			ifstream book(this->book);
			while (!book.eof())
			{
				book >> b;
				if (strcmp(b, key)==0)
				{
					m[key].push_back(count);
				}
				if (b[0] == c)
					count++;
			}
			book.close();
		}

		
		keys.close();
		//return key;
	}

	void writeToFile( const char* location )
	{

		ofstream f;
		f.open(location);
		for (auto i = m.begin(); i != m.end(); i++)
		{
			f <<"the key: " << i ->first<<"  exist in chpters:  " ;

			for (auto j = i->second.begin(); j != i->second.end(); j++)
			{
				f << *j <<"   ";
			}
			f <<endl;
		}
		f.close();
	}

};

