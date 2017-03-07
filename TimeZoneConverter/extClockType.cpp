#include "extClockType.h"
#include <iostream>
#include "clockType.h"
using namespace std;

extClockType::extClockType()
{
	timezone = 0;
}

extClockType::extClockType(int hours, int minutes, int seconds, int timez)
	:clockType(hours,minutes,seconds)
{
	if (timez == 0)
		hours = hours - 6;
	else if (timez == 1)
		hours = hours - 4;
	else if (timez == 2)
		hours = hours + 5;
	else if (timez == 3)
		hours = hours + 6;
	else if (timez == 4)
	{
		hours = hours + 10;
	}
	if (hours < 0)
		hours = 24 + hours;
	else if (hours >24)
		hours = hours - 24;
}






