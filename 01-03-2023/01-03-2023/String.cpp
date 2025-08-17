#include "String.h"
	
	//print
	void String:: printString(const char* str) const
	{
		for (int i = 0; i < 256; i++)
		{
			cout << str[i];
		}
	}


	bool String::operator=(const String& other)const
	{
		if (strlen(str) != strlen(other.str))
			return false;
		for (int i = 0; i < strlen(str); i++)
		{
			if(str[i] != *other.str)
				return false;
		}
		return true;
	}

	bool String::operator==(const String& other)const
	{
		if (strlen(str) != strlen(other.str))
			return false;
		for (int i = 0; i < strlen(str); i++)
		{
			if (str[i] != *other.str)
				return false;
		}
		return true;
	}

	 void String::operator+(String& other)
	{
		 
		for (int ind = 0,int i = strlen(str); i < 256; i++, ind++)
		{
			str[i] = other.str[ind];
		}
	}

	 bool String::operator<(const String& other) const
	 {
		 for (int i = 0; i < strlen(other.str); i++)
		 {
			 if (str[i] > *other.str)
				 return false;
		 }
		 return true;
	 }
	 bool String::operator>(const String& other) const
	 {
		 for (int i = 0; i < strlen(other.str); i++)
		 {
			 if (str[i] < *other.str)
				 return false;
		 }
		 return true;
	 }

	 void String::operator<<(const String& str) const
	 {
		 for (int i = 0; i < strlen(this->str); i++)
		 {
			 printf("%c",this->str[i]);
		 }
	 }

	 void String::operator>>(const String& str)
	 {
		 cout << "enter a string" << endl;
		

		// for (int i = 0; i < 256; i++)
		// {
		//	 this->str[i]+= str[i];
		// }
		
	 }

