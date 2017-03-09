#include "DArray.h"
#include <iostream>
using namespace std;


DArray::DArray(int x=0)
{
	maxSize = x;
	length = 0;
	p = new int[maxSize];
}

DArray::DArray(const DArray &other)
{
	maxSize = other.maxSize;
	length = other.length;
	p = new int[maxSize];
	for (int i = 0; i < length; i++)
		p[i] = other.p[i];

}

void DArray::print()
{
	for (int i = 0; i < length; i++)
		cout << p[i] << " ";
}

DArray::~DArray()
{
	delete[] p;
}
