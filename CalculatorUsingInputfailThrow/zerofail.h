#pragma once
#include <iostream>
using namespace std;
class zerofail
{
public:
	zerofail()
	{
		cout << "cannot divid by 0" << endl;
	}
	~zerofail();
};

