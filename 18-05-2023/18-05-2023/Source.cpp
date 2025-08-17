#include <fstream>
#include <vector>
#include <iostream>
#include "index.h"
using namespace std;
//אלישבע טופיק ויעל אילוז
//תודה רבה
void main()
{
	index i("M:\\C\\18-05-2023\\aaa.txt", "M:\\C\\18-05-2023\\book.txt", '#');
	i.readFromFile();
	i.writeToFile("M:\\C\\18-05-2023\\res.txt");
}