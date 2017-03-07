#pragma once
#include "PersonType.h"
class employeeType: public PersonType
{
public:
	employeeType();
	string departmentName="";
	string departmentID="";
	double yearlySalary=0;
	double hourlySalary=0;
	string emplyeeID="";

	
};

