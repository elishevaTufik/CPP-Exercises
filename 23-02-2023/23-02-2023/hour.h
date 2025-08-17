// אלישבע טופיק ויעל אילוז
#pragma once
class hour
{
	int h;
	int m;
	int s;
public:

	hour() :hour(0, 0, 0) 
	{

	}
	hour(int h) :hour(h,0, 0)
	{

	}
	hour(int h,int m) :hour(h,m, 0)
	{

	}
	hour(int h, int m, int s)
	{
		this->h = h;
		this->m = m;
		this->s = s;
	}
	void addTime(int h, int m, int s);
	void subTime(int h, int m, int s);
	void printHour();

	void gettime()
	{
		printHour();
		//return  (this->h, this->m, this->s);
	}
	void settime(hour time)
	{
		this->h = time.h;
		this->m = time.m;
		this->s = time.s;
	}
};

