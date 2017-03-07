#pragma once
#include "PersonType.h"
class instructorType:public PersonType
{
	friend ostream& operator<< (ostream&, const instructorType&);
public:
	instructorType();


	string department="";
	string courseList="";

};

