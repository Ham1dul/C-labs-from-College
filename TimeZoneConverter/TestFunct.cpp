#include <iostream>
#include "extClockType.h"
using namespace std;

int main()
{
	int hour, min, sec, timez;
	cout << "please enter the hour (EST)" << endl;
	cin >> hour;
	cout << "please enter the minutes" << endl;
	cin >> min;
	cout << "please enter the seconds" << endl;
	cin >> sec;
	cout << "please enter the timeszone (0 for HST, 1 for AKST, 2 for GMT, " << endl;
	cout << "3 for CET, 4 for IST, 5 for AKST)" << endl;
	cin >> timez;
	extClockType Time(hour, min, sec, timez);
	Time.getTime(hour, min, sec);
	Time.printTime();
	cout << endl;
	return 0;
}