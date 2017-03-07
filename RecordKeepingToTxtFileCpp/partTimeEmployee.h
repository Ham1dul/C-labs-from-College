#pragma once
#include "employeeType.h"
class partTimeEmployee: public employeeType
{
	friend ostream& operator<< (ostream&, const partTimeEmployee&);
public:
	partTimeEmployee();


	double payRate=0;
	double hoursWorked=0;
};

