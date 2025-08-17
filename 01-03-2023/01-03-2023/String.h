#pragma once
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

class String
{
	char str[256];

public:
	//constractor
	String()
	{
		for (int i = 0; i < 256; i++)
		{
			str[i] = 0;
		}
	}
	//copy constractor
	String (const String& other)
	{
		for (int i = 0; i < strlen(str); i++)
		{
			str[i] = other.str[i];
		}
	}
	//get, set
	void getString()const
	{
		for (int i = 0; i < strlen(str); i++)
		{
			cout<<str[i];
		}
	}
	//לא צריך דיסטרקטור כי הגדרנו את הסטרינג כמערך של צרים
	//כלומר צר ולא צר כוכבית
	void setString(String s)
	{
		for (int i = 0; i < strlen(str); i++)
		{
			cout << "enter chars";
			cin >> str[i];
		}
	}

	void printString(const char* str)const ;
	bool operator=(const String& other)const;
	bool operator==(const String& other)const;
	void operator+(String& other);
	bool operator<(const String& other)const;
	bool operator>(const String& other)const;
	void operator<<(const String& str)const;
	void operator>>(const String&  str);

};

