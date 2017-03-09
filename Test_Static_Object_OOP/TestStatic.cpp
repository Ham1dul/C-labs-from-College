#include "TestStatic.h"
#include <iostream>
using namespace std;

int TestStatic::y = 0;


TestStatic::TestStatic()
{

}

int TestStatic::autoDouble(int a)
{
	return a * 2;
}

int TestStatic::staticDouble(int a)
{
	return a * 2;
}


