#include<iostream>
#include "DArray.h"
using namespace std;
int main()
{
	
	DArray obj(10);
	for (int i = 0; i < 5; i++)
	{
		obj.p[i] = i;
		obj.length++;
	}
	DArray obj2(obj);
	for (int i = 5; i < 10; i++)
	{
		obj2.p[i] = i;
		obj2.length++;
	}
	cout << "printing out object 1 : ";
	obj.print();
	cout << endl;
	cout << "priting out copy object's array: ";
	obj2.print();
	cout << endl;
	return 0;
}