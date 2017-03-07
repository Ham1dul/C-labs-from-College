#pragma once
#include "employeeType.h"
class fullTimeEmployee: public employeeType
{
	friend ostream& operator<< (ostream&, const fullTimeEmployee&);
public:
	fullTimeEmployee();
	
	double empSalary=0;
	double empBonus=0;
};

