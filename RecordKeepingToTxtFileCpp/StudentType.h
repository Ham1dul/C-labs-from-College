#pragma once
#include "PersonType.h"

class StudentType: public PersonType
{
	friend ostream& operator<< (ostream&, const StudentType&);
public:
	StudentType();
	double GPA=0;
	string ID="";
	int numberOfCourses=0;
	string isTuitionPaid="";
};

