#include "StudentType.h"
#include "PersonType.h"


StudentType::StudentType()
{
}

ostream& operator<< (ostream& os, const StudentType& complex)
{
	os << complex.ID << " | "
		<< complex.Name << " | "
		<< complex.Age << " | "
		<< complex.PhoneNumber << " | "
		<< complex.Adress << " | "
		<< complex.Gender << " | "
		<< complex.GPA << " | "
		<< complex.Hobbies << " | "
		<< complex.Email << " | "
		<< complex.numberOfCourses << " | "
		<< complex.isTuitionPaid;
	

	return os;

}



