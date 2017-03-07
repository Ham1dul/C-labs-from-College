#pragma once
#include "clockType.h"
#include <iostream>
class extClockType: public clockType
{
public:
	extClockType(int hours, int minutes, int seconds, int timezone);
	extClockType();
private:
	int timezone = 0;
};

