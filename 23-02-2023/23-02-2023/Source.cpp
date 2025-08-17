// אלישבע טופיק ויעל אילוז
#include "hour.h"
#include <stdio.h>

void main(){

	hour time(11,3,76);
	hour time1;
	 time.addTime(1, 90, 35);
	 time.printHour();
	 time.subTime(1, 90, 35);
	 time.printHour();
	 time1.settime(1);
	 time1.gettime();
}