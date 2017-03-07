#include "instructorType.h"


instructorType::instructorType()
{
}

ostream& operator<< (ostream& os, const instructorType& complex)
{
	os << complex.Name << " | "
		<< complex.Age << " | "
		<< complex.PhoneNumber << " | "
		<< complex.Adress << " | "
		<< complex.Gender << " | "
		<< complex.department << " | "
		<< complex.Hobbies << " | "
		<< complex.Email << " | "
		<< complex.courseList;


	return os;

}

