#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	ifstream in;
	string id;
	in.open("Lab 10.1Data.txt"); //read doc
	char *array = new char[20]; //use dynamic array
	char sarray[30];
	in >> array;
	int points;
	while (in) //repeats until end of file
	{
		if (!in) break;
		in >> id;
		points = 0;
		in.get(sarray, 30); //read blank spaces
		for (int i = 0; i < 20; i++)
		{
			if (sarray[i + 1] == array[i]) //check for correct answer, change points accordingly
				points = points + 2;
			else if (sarray[i + 1] == ' ')
				;
			else
				points--;
		}
		cout << id << " answers are : " << sarray;
		cout << "  test score = " << points << " grade = ";
		if (points / 40.0 < .60)
			cout << "F";
		else if (points / 40.0 < .70)
			cout << "D";
		else if (points / 40.0 < .80)
			cout << "C";
		else if (points / 40.0 < .90)
			cout << "B";
		else
			cout << "A";
		cout << endl;
	}

	delete[] array;
	return 0;
}