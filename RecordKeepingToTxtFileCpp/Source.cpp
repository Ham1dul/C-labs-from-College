#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include "StudentType.h"
#include "fullTimeEmployee.h"
#include "partTimeEmployee.h"
#include "instructorType.h"

using namespace std;

void Menu(int &choice, int& i, int &j, int &k, int &l);

void AddStudentRecord(int& i);
void AddInstructorRecord(int& j);
void AddPartRecord(int&k);
void AddFullRecord(int &l);

void ListStudentRec(int& i);
void ListInstructorRec(int& j);
void ListPartRec(int& k);
void ListFullRec(int& l);

void ModifyStudentRec(int& i);
void ModifyInstructorRec(int& j);
void ModifyPartRec(int& k);
void ModifyFullRec(int& l);

void DeleteStudentRec(int& i);
void DeleteInstructorRec(int& j);
void DeletePartRec(int& k);
void DeleteFullRec(int& l);

void CalcPartRec(int& k);
void CalcFullRec(int& l);

int i = 0;
int j = 0;
int k = 0;
int l = 0;

StudentType SEntry[10];
fullTimeEmployee FEntry[10];
partTimeEmployee PEntry[10];
instructorType IEntry[10];



int main()
{
	ofstream Sout;
	Sout.open("StudentRecords.txt");

	ofstream Iout;
	Iout.open("InstructorRecords.txt");

	ofstream Pout;
	Pout.open("PartTimeRecords.txt");

	ofstream Fout;
	Fout.open("FullTimeRecords.txt");

	int choice;
	do
	{
		Menu(choice, i, j, k, l);
	} while (choice != 5);

	for (int counter = 0; counter < i; counter++)
	{
		Sout << SEntry[counter] << endl;
	}

	for (int counter = 0; counter < j; counter++)
	{
		Iout << IEntry[counter] << endl;
	}

	for (int counter = 0; counter < k; counter++)
	{
		Pout << PEntry[counter] << endl;
	}

	for (int counter = 0; counter < l; counter++)
	{
		Fout << FEntry[counter] << endl;
	}


	Sout.close();
	Iout.close();
	Pout.close();
	Fout.close();
	return 0;
}

void Menu(int &choice, int& i, int &j, int &k, int &l)
{
	cout << "======================" << endl;
	cout << "  1. Add      Records" << endl;
	cout << "  2. List     Records" << endl;
	cout << "  3. Modify   Records" << endl;
	cout << "  4. Delete   Records" << endl;
	cout << "  5. Calculate Pay Records" << endl;
	cout << "  6. Exit     Records" << endl;
	cout << "======================" << endl <<endl;
	cout << " Select Your Choice :: ";
	cin >> choice;

	if (choice == 1)
	{
		cout << "=======================================" << endl;
		cout << "  1. Add          Student Records" << endl;
		cout << "  2. Add      Instructor  Records" << endl;
		cout << "  3. Add PartTimeEmployee Records" << endl;
		cout << "  4. Add FullTimeEmployee Records" << endl;
		cout << "  6. Exit                 Records" << endl;
		cout << "=======================================" << endl << endl;
		cout << " Select Your Choice :: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			AddStudentRecord(i);
			break;
		}
		case 2:
		{
			AddInstructorRecord(j);
			break;
		}
		case 3:
		{
			AddPartRecord(k);
			break;
		}
		case 4:
		{
			AddFullRecord(l);
			break;
		}

		default:
			break;
		}
	}

	else if (choice == 2)
	{
		
		cout << "=======================================" << endl;
		cout << "  1. sort          Student Records" << endl;
		cout << "  2. sort      Instructor  Records" << endl;
		cout << "  3. sort PartTimeEmployee Records" << endl;
		cout << "  4. sort FullTimeEmployee Records" << endl;
		cout << "  5. Exit                 Records" << endl;
		cout << "=======================================" << endl << endl;
		cout << " Select Your Choice :: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			ListStudentRec(i);
			break;
		}
		case 2:
		{
			ListInstructorRec(j);
			break;
		}
		case 3:
		{
			ListPartRec(k);
			break;
		}
		case 4:
		{
			ListFullRec(l);
			break;
		}

		default:
			break;
		}

	}
	else if (choice == 3)
	{
		cout << "=======================================" << endl;
		cout << "  1. modify          Student Records" << endl;
		cout << "  2. modify      Instructor  Records" << endl;
		cout << "  3. modify PartTimeEmployee Records" << endl;
		cout << "  4. modify FullTimeEmployee Records" << endl;
		cout << "  6. Exit                 Records" << endl;
		cout << "=======================================" << endl << endl;
		cout << " Select Your Choice :: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			ModifyStudentRec(i);
			break;
		}
		case 2:
		{
			ModifyInstructorRec(j);
			break;
		}
		case 3:
		{
			ModifyPartRec(k);
			break;
		}
		case 4:
		{
			ModifyFullRec(l);
			break;
		}

		default:
			break;
		}
	}
	else if (choice == 4)
	{
		cout << "=======================================" << endl;
		cout << "  1. Delete          Student Records" << endl;
		cout << "  2. Delete      Instructor  Records" << endl;
		cout << "  3. Delete PartTimeEmployee Records" << endl;
		cout << "  4. Delete FullTimeEmployee Records" << endl;
		cout << "  6. Exit                 Records" << endl;
		cout << "=======================================" << endl << endl;
		cout << " Select Your Choice :: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			DeleteStudentRec(i);
			break;
		}
		case 2:
		{
			DeleteInstructorRec(j);
			break;
		}
		case 3:
		{
			DeletePartRec(k);
			break;
		}
		case 4:
		{
			DeleteFullRec(l);
			break;
		}

		default:
			break;
		}
	}
	else if (choice == 5)
	{
		cout << "=======================================" << endl;
		cout << "  1. Calculate      Parttime Records" << endl;
		cout << "  2. Calculate      Fulltime  Records" << endl;
		cout << "  6. Exit                 Records" << endl;
		cout << "=======================================" << endl << endl;
		cout << " Select Your Choice :: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			CalcPartRec(k);
			break;
		}
		case 2:
		{
			CalcFullRec(l);
			break;
		}
		default:
			choice = 6;
		}
	}
	else
		choice = 6;
}

void AddStudentRecord(int& i)
{
	
	cout << "please enter the student ID" << endl;
	cin >> SEntry[i].ID;

	cout << "please enter the Student Name" << endl;
	cin.ignore();
	getline(cin, SEntry[i].Name);

	cout << "please enter student age" << endl;
	cin >> SEntry[i].Age;

	cout << "please enter phone number" << endl;
	cin >> SEntry[i].PhoneNumber;

	cout << "please enter adress " << endl;
	cin.ignore();
	getline(cin, SEntry[i].Adress);

	cout << "please enter gender (M for male, F for female)" << endl;
	cin >> SEntry[i].Gender;

	cout << "please enter GPA" << endl;
	cin >> SEntry[i].GPA;

	cout << "please enter hobbies" << endl;
	cin.ignore();
	getline(cin, SEntry[i].Hobbies);

	cout << "please enter email adress" << endl;
	cin >> SEntry[i].Email;
	
	cout << "please enter number of courses" << endl;
	cin >> SEntry[i].numberOfCourses;

	cout << "is tuition paid in full" << endl;
	cin >> SEntry[i].isTuitionPaid;



	i++;

}

void AddInstructorRecord(int& j)
{
	cout << "please enter the Instructor Name" << endl;
	cin.ignore();
	getline(cin, IEntry[j].Name);

	cout << "please enter Instructor age" << endl;
	cin >> IEntry[j].Age;

	cout << "please enter phone number" << endl;
	cin >> IEntry[j].PhoneNumber;

	cout << "please enter adress " << endl;
	cin.ignore();
	getline(cin, IEntry[j].Adress);

	cout << "please enter gender (M for male, F for female)" << endl;
	cin >> IEntry[j].Gender;

	cout << "please enter Department" << endl;
	cin >> IEntry[j].department;

	cout << "please enter hobbies" << endl;
	cin.ignore();
	getline(cin, IEntry[j].Hobbies);

	cout << "please enter email adress" << endl;
	cin >> IEntry[j].Email;

	cout << "please enter number of course list (english, math, ect)" << endl;
	cin.ignore();
	getline(cin, IEntry[j].courseList);

	j++;
}
void AddPartRecord(int&k)
{
	cout << "please enter name" << endl;
	cin.ignore();
	getline(cin, PEntry[k].Name);

	cout << "please enter age" << endl;
	cin >> PEntry[k].Age;

	cout << "please enter phone number" << endl;
	cin >> PEntry[k].PhoneNumber;

	cout << "please enter adress" << endl;
	cin >> PEntry[k].Adress;

	cout << "please enter Gender (M for male, F for female)" << endl;
	cin >> PEntry[k].Gender;

	cout << "please enter hobbies" << endl;
	cin.ignore();
	getline(cin, PEntry[k].Hobbies);

	cout << "please enter email" << endl;
	cin >> PEntry[k].Email;

	cout << "please enter demartment name" << endl; 
	cin >> PEntry[k].departmentName;

	cout << "please enter department ID" << endl;
	cin >> PEntry[k].departmentID;

	cout << "please enter yearly salary" << endl;
	cin >> PEntry[k].yearlySalary;

	cout << "please enter hourlySalary" << endl;
	cin >> PEntry[k].hourlySalary;

	cout << "please enter employee ID" << endl;
	cin >> PEntry[k].emplyeeID;

	cout << "please enter pay rate" << endl;
	cin >> PEntry[k].payRate;

	cout << "please eneter hours worked" << endl;
	cin >> PEntry[k].hoursWorked;

	k++;
}
void AddFullRecord(int &l)
{
	
	cout << "please enter name" << endl;
	cin.ignore();
	getline(cin, FEntry[l].Name);

	cout << "please enter age" << endl;
	cin >> FEntry[l].Age;

	cout << "please enter phone number" << endl;
	cin >> FEntry[l].PhoneNumber;

	cout << "please enter adress" << endl;
	cin >> FEntry[l].Adress;

	cout << "please enter Gender (M for male, F for female)" << endl;
	cin >> FEntry[l].Gender;

	cout << "please enter hobbies" << endl;
	cin.ignore();
	getline(cin, FEntry[l].Hobbies);

	cout << "please enter email" << endl;
	cin >> FEntry[l].Email;

	cout << "please enter demartment name" << endl; 
	cin >> FEntry[l].departmentName;

	cout << "please enter department ID" << endl;
	cin >> FEntry[l].departmentID;

	cout << "please enter yearly salary" << endl;
	cin >> FEntry[l].yearlySalary;

	cout << "please enter hourlySalary" << endl;
	cin >> FEntry[l].hourlySalary;

	cout << "please enter employee ID" << endl;
	cin >> FEntry[l].emplyeeID;

	cout << "please enter employee salary" << endl;
	cin >> FEntry[l].empSalary;

	cout << "please enter employee bonus" << endl;
	cin >> FEntry[l].empBonus;

	l++;
}

void ListStudentRec(int& i)
{
	int choice;
	StudentType temp;
	cout << "what would you like to sort by?" << endl;
	cout << "1. GPA" << endl;
	cout << "2. ID" << endl;
	cout << "3. Name" << endl;
	cin >> choice;

	if (choice == 1)
	{
		for (int x = 0; x <= i; x++)
		{
			for (int j = 0; j<i - 1; j++)
			{
				if (SEntry[j].GPA>SEntry[j + 1].GPA)
				{
					temp = SEntry[j];
					SEntry[j] = SEntry[j + 1];
					SEntry[j + 1] = temp;
				}
			}
		}
	}

	else if (choice == 2)
	{
		for (int x = 0; x <= i; x++)
		{
			for (int j = 0; j<i - 1; j++)
			{
				if (SEntry[j].ID>SEntry[j + 1].ID)
				{
					temp = SEntry[j];
					SEntry[j] = SEntry[j + 1];
					SEntry[j + 1] = temp;
				}
			}
		}
	}

	else
	{
		for (int x = 0; x <= i; x++)
		{
			for (int j = 0; j<i - 1; j++)
			{
				if (SEntry[j].Name>SEntry[j + 1].Name)
				{
					temp = SEntry[j];
					SEntry[j] = SEntry[j + 1];
					SEntry[j + 1] = temp;
				}
			}
		}
	}

	for (int counter = 0; counter<i; counter++)
	{
		cout << SEntry[counter] << endl;
	}
	main();
}
void ListInstructorRec(int& j)
{
	int choice;
	instructorType temp;
	cout << "what would you like to sort by?" << endl;
	cout << "1. Department" << endl;
	cout << "2. Name" << endl;
	cin >> choice;
	if (choice == 1)
	{
		for (int x = 0; x <= j; x++)
		{
			for (int y = 0; y<j - 1; y++)
			{
				if (IEntry[y].department>IEntry[y + 1].department)
				{
					temp = IEntry[y];
					IEntry[y] = IEntry[y + 1];
					IEntry[y + 1] = temp;
				}
			}
		}
	}

	else if (choice == 2)
	{
		for (int x = 0; x <= j; x++)
		{
			for (int y = 0; y<j - 1; y++)
			{
				if (IEntry[y].Name>IEntry[y + 1].Name)
				{
					temp = IEntry[y];
					IEntry[y] = IEntry[y + 1];
					IEntry[y + 1] = temp;
				}
			}
		}
	}
	for (int counter = 0; counter<j; counter++)
	{
		cout << IEntry[counter] << endl;
	}
	main();
}
void ListPartRec(int& k)
{
	int choice;
	partTimeEmployee temp;
	cout << "what would you like to sort by?" << endl;
	cout << "1. Payrate" << endl;
	cout << "2. Name" << endl;
	cin >> choice;
	if (choice == 1)
	{
		for (int x = 0; x <= k; x++)
		{
			for (int y = 0; y<k - 1; y++)
			{
				if (PEntry[y].payRate>PEntry[y + 1].payRate)
				{
					temp = PEntry[y];
					PEntry[y] = PEntry[y + 1];
					PEntry[y + 1] = temp;
				}
			}
		}
	}

	else if (choice == 2)
	{
		for (int x = 0; x <= k; x++)
		{
			for (int y = 0; y<k - 1; y++)
			{
				if (PEntry[y].Name>PEntry[y + 1].Name)
				{
					temp = PEntry[y];
					PEntry[y] = PEntry[y + 1];
					PEntry[y + 1] = temp;
				}
			}
		}
	}
	for (int counter = 0; counter<k; counter++)
	{
		cout << PEntry[counter] << endl;
	}
	main();
}
void ListFullRec(int& l)
{
	int choice;
	fullTimeEmployee temp;
	cout << "what would you like to sort by?" << endl;
	cout << "1. Employee Salary" << endl;
	cout << "2. Name" << endl;
	cin >> choice;
	if (choice == 1)
	{
		for (int x = 0; x <= l; x++)
		{
			for (int y = 0; y < l - 1; y++)
			{
				if (FEntry[y].yearlySalary > FEntry[y + 1].yearlySalary)
				{
					temp = FEntry[y];
					FEntry[y] = FEntry[y + 1];
					FEntry[y + 1] = temp;
				}
			}
		}
	}

	else if (choice == 2)
	{
		for (int x = 0; x <= l; x++)
		{
			for (int y = 0; y < l - 1; y++)
			{
				if (FEntry[y].Name > FEntry[y + 1].Name)
				{
					temp = FEntry[y];
					FEntry[y] = FEntry[y + 1];
					FEntry[y + 1] = temp;
				}
			}
		}
	}
	for (int counter = 0; counter < l; counter++)
	{
		cout << FEntry[counter] << endl;
	}
	main();
}

void ModifyStudentRec(int& i)
{
	int mod,choice;
	cout << "which entry to modify (entries begin from 0)" << endl;
	cin >> mod;
	cout << "what would you like to modify?" << endl;
	cout << "1. GPA" << endl;
	cout << "2. ID" << endl;
	cout << "3. Name" << endl;
	cin >> choice;
	cout << "enter modification now" << endl;
	switch (choice)
	{
	case 1:
	{
	cin >> SEntry[mod].GPA;
	break;
	}
	case 2:
	{
		cin >> SEntry[mod].ID;
		break;
	}
	case 3:
	{
		cin >> SEntry[mod].Name;
		break;
	}
	default:
		break;
	}
	main();

}
void ModifyInstructorRec(int& j)
{
	int mod, choice;
	cout << "which entry to modify (entries begin from 0)" << endl;
	cin >> mod;
	cout << "what would you like to modify?" << endl;
	cout << "1. Department" << endl;
	cout << "2. Name" << endl;
	cin >> choice;
	cout << "enter modification now" << endl;
	switch (choice)
	{
	case 1:
	{
		cin >> IEntry[mod].department;
		break;
	}
	case 2:
	{
		cin >> IEntry[mod].Name;
		break;
	}
	default:
		break;
	}
	main();

}
void ModifyPartRec(int& k)
{
	int mod, choice;
	cout << "which entry to modify (entries begin from 0)" << endl;
	cin >> mod;
	cout << "what would you like to modify?" << endl;
	cout << "1. Payrate" << endl;
	cout << "2. Name" << endl;
	cin >> choice;
	cout << "enter modification now" << endl;
	switch (choice)
	{
	case 1:
	{
		cin >> PEntry[mod].payRate;
		break;
	}
	case 2:
	{
		cin >> PEntry[mod].Name;
		break;
	}
	default:
		break;
	}
	main();

}
void ModifyFullRec(int& l)
{
	int mod, choice;
	cout << "which entry to modify (entries begin from 0)" << endl;
	cin >> mod;
	cout << "what would you like to modify?" << endl;
	cout << "1. Salary" << endl;
	cout << "2. Name" << endl;
	cin >> choice;
	cout << "enter modification now" << endl;
	switch (choice)
	{
	case 1:
	{
		cin >> FEntry[mod].empSalary;
		break;
	}
	case 2:
	{
		cin >> FEntry[mod].Name;
		break;
	}
	default:
		break;
	}
	main();

}

void DeleteStudentRec(int& i)
{
	int dele;
	cout << "which entry to delete (entries begin from 0)" << endl;
	cin >> dele;
	StudentType Blank;
	SEntry[dele] = Blank;
	main();
}
void DeleteInstructorRec(int& j)
{
	int dele;
	cout << "which entry to delete (entries begin from 0)" << endl;
	cin >> dele;
	instructorType Blank;
	IEntry[dele] = Blank;
	main();
}
void DeletePartRec(int& k)
{
	int dele;
	cout << "which entry to delete (entries begin from 0)" << endl;
	cin >> dele;
	partTimeEmployee Blank;
	PEntry[dele] = Blank;
	main();
}
void DeleteFullRec(int& l)
{
	int dele;
	cout << "which entry to delete (entries begin from 0)" << endl;
	cin >> dele;
	fullTimeEmployee Blank;
	FEntry[dele] = Blank;
	main();
}

void CalcPartRec(int& k)
{
	for (int counter = 0; counter < k; counter++)
	{
		cout << PEntry[counter].Name << "'s Salary = " << PEntry[counter].hoursWorked * PEntry[counter].hoursWorked << endl;
	}
	main();
}
void CalcFullRec(int& l)
{
	for (int counter = 0; counter < l; counter++)
	{
		cout << FEntry[counter].Name << "'s Salary = " << FEntry[counter].empSalary + FEntry[counter].empBonus << endl;
	}
	main();
}