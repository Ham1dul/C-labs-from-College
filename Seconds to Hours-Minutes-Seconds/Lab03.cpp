//Programmed By: Hamidul Islam
//Time Program

#include <iostream>
using namespace std;
int main()
{
	int InSec;
	cout << "enter elapsed time in seconds" << endl;
	cin >> InSec;
	int Sec = InSec % 60;
	int Min = InSec / 60 % 60;
	int Hour = InSec / 3600;
	cout << "elapsed time = " << Hour << ":" << Min << ":" << Sec << endl;
	return 0;
}