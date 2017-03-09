#include<iostream>
using namespace std;

int main()
{
	
	int array[100];
	int max;
	cout << "how many numbers will you sort? " << endl;
	cin >> max;
	cout << "enter numbers that are to be bubble sorted" << endl;
	for (int i = 0; i<max; i++)
	{
		cin >> array[i];
	}
	cout << endl;
	
	int temp;
	for (int i = 0; i <= max; i++)
	{
		for (int j = 0; j<max-1; j++)
		{  
			if (array[j]>array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	
	for (int i = 0; i<max; i++)
	{
		cout << array[i] << ", ";
	}
	cout << endl;
	return 0;
}

