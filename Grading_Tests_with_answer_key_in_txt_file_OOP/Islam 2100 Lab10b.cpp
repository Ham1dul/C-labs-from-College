#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the size of string:  ";
	int size; //take size of array
	cin >> size;
	char *array = new char[size]; //set dynamic carray
	cin >> array;
	for (int i = 0; i < size;i++)
		cout << static_cast<char>(toupper(array[i]));
	cout << endl;
	delete[] array;
	return 0;
}