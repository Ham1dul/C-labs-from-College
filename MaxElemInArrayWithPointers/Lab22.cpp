//Hamidul Islam
//Lab 22
//int array

#include <iostream>
using namespace std;
int main()
{
	int array[100];
	int size;
	int *max = new int;
	cout << "please enter the size of the array" << endl;
	cin >> size;
	for (int counter = 0; counter < size; counter++)
	{
		cout << "please enter element " << counter + 1 << endl;
		cin >> array[counter];
		if (counter == 0)
		{
			*max = array[counter];
		}
		else 
		{
			if (*max <= array[counter])
			*max = array[counter];
		}
	}
	cout << "the max element is " << *max << endl;
	delete max;
	return 0;
}