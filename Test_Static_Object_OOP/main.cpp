#include "TestStatic.h"
#include <iostream>
using namespace std;
void testingStaticVar();

int main()
{
	for (int i = 0; i < 5;i++)
		testingStaticVar();
	cout << "printing out value of static variable : ";
	cout << TestStatic::y << endl;
	TestStatic Object1;
	TestStatic Object2;
	Object1.x++;
	Object1.y++;
	cout << "Object 1 x = " << Object1.x << endl;
	cout << "Object 1 y = " << Object1.y << endl;
	Object2.x++;
	Object2.y++;
	cout << "Object 2 x = " << Object2.x << endl;
	cout << "Object 2 y = " << Object2.y << endl;
	cout << "Object 1 calling autoDouble function using integer 2 : " << Object1.autoDouble(2) << endl;
	cout << "calling static double function using integer 4 : " << TestStatic::staticDouble(4) << endl;
	return 0;
}

void testingStaticVar()
{
	int a = 0;
	static int b = 0;
	a++;
	b++;
	cout << "regualar int = " << a << endl;
	cout << "static int = " << b << endl;
}
