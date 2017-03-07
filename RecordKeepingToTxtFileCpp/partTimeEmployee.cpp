#include "partTimeEmployee.h"



partTimeEmployee::partTimeEmployee()
{
}

ostream& operator<< (ostream& os, const partTimeEmployee& complex)
{
	os
		<< complex.Name << " | "
		<< complex.Age << " | "
		<< complex.PhoneNumber << " | "
		<< complex.Adress << " | "
		<< complex.Gender << " | "
		<< complex.Hobbies << " | "
		<< complex.Email << " | "
		<< complex.departmentName << " | "
		<< complex.departmentID << " | "
		<< complex.yearlySalary << " | "
		<< complex.hourlySalary << " | "
		<< complex.emplyeeID << " | "
		<< complex.payRate << " | "
		<< complex.hoursWorked;

	
	return os;

}


