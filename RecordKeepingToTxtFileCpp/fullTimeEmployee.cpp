#include "fullTimeEmployee.h"


fullTimeEmployee::fullTimeEmployee()
{
}

ostream& operator<< (ostream& os, const fullTimeEmployee& complex)
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
		<< complex.empSalary << " | "
		<< complex.empBonus;
		
		
		return os;

}

