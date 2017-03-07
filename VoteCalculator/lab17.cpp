//Hamidul Islam
//candidates
//11/10/15
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string winner(string names[], int votes[])
{

		int counter;
		int max = 5 - 1; //Assume first element is the smallest

		for (counter = 5 - 1; counter >= 0; counter--)
			if (votes[max] < votes[counter])
				max = counter;
		return names[max];
}

int main()
{
	cout << setprecision(2) << showpoint<< fixed;
	string names[5];
	int votes[5];
	for (int counter = 0; counter < 5; counter++)
	{
		cout << "plase enter the name of a candidate" << endl;
		cin >> names[counter];
		cout << "please enter the votes this candidate recived" << endl;
		cin >> votes[counter];
	}
	double totalvotes = votes[0] + votes[1] + votes[2] + votes[3] + votes[4];
	cout << setw(20) << "Candidate" << setw(20) << "votes recieved" << setw(20) << "% of total votes" << endl;
	for (int counter = 0; counter < 5; counter++)
	{
		cout  << setw(20) << names[counter] << setw(20) << votes[counter] << setw(20) << votes[counter] / totalvotes * 100 << endl;
	}
	cout << setw(20) << "total" << setw(20) << totalvotes << endl;
	cout << "the winner of the election is " << winner(names, votes) << endl;
	return 0;
}