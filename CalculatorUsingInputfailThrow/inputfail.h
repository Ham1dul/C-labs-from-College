#pragma once
#include <iostream>
using namespace std;
class inputfail
{
public:
	inputfail()
	{
		cout << "input stream in fail state" << endl;
	}
	~inputfail();
};

