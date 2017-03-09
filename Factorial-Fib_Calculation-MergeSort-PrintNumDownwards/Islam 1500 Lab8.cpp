#include <iostream>
#include <cmath>

using namespace std;
int factorial(int x, int y);
void merge(int array[], int x, int y, int z);
void mergeSort(int array[], int x, int z);
int fib(int x);
int fib2();
int countdown(int x);

int main()
{
	int choice,x,y;
	cout << "select the problem from lab8" << endl;
	cout << "1. factoral" << endl;
	cout << "2. merge sort" << endl;
	cout << "3. fib given terms in series" << endl;
	cout << "4. fib until term is <= 987" << endl;
	cout << "5. print num downwards" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "enter number to be factorialed" << endl;
		cin >> x;
		y = x;
		cout << "factorial = " << factorial(x, y) << endl;
		break;
	}
	case 2:
	{
		int array[100],size;
		cout << "enter size of merge sort array" << endl;
		cin >> size;
		for (int counter = 0; counter < size; counter++)
		{
			cout << "enter element " << counter << ": ";
			cin >> array[counter];
			cout << endl;
		}
		mergeSort(array, 0, size - 1);
		cout << "sorted array :" << endl;
		for (int counter = 0; counter < size; counter++)
		{
			cout << array[counter] << ", ";
		}
		cout << endl;
		break;
	}
	case 3:
	{
		cout << "enter given terms of fib sequence" << endl;
		cin >> x;
		for (int i = 0; i < x; ++i)
		{
			cout << fib(i) << ", ";
		}
		cout << endl;
		break;
	}
	case 4:
	{
		for (int i = 0; fib(i) <= 987; ++i)
		{
			cout << fib(i) << ", ";
		}
		cout << endl;
		break;
	}
	case 5:
	{
		cout << "input number" << endl;
		cin >> x;
		countdown(x);
		cout << endl;
		break;
	}
	}


}

int factorial(int x, int y)
{
	if (y == 1)
		return x;
	else
		return factorial(x*y, --y);
}

void merge(int array[], int x, int y, int z)
{
	int i, j, k;
	int s1 = y - x + 1;
	int s2 = z - y;

	int *L=new int[s1], *R= new int[s2];

	for (i = 0; i < s1; i++)
		L[i] = array[x + i];
	for (j = 0; j < s2; j++)
		R[j] = array[y + 1 + j];
	
	i = 0; 
	j = 0; 
	k = x; 

	while (i < s1 && j < s2)
	{
		if (L[i] <= R[j])
		{
			array[k] = L[i];
			i++;
		}
		else
		{
			array[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < s1)
	{
		array[k] = L[i];
		i++;
		k++;
	}

	
	while (j < s2)
	{
		array[k] = R[j];
		j++;
		k++;
	}


	delete[] L;
	delete[] R;
}
void mergeSort(int array[], int x, int y)
{
	if (x < y)
	{

		int z = x + (y - x) / 2;

		mergeSort(array, x, z);
		mergeSort(array, z + 1, y);

		merge(array, x, y, z);
	}


}

int fib(int x)
{
	
	if (x == 0)
	{
		return 0;
	}
	else if (x == 1)
	{
		return 1;
	}
	else
	{
		return (fib(x - 1) + fib(x - 2));
	}
}
int fib2()
{
	static int p=0;
	return fib(p++);
}

int countdown(int x)
{
	if (x == 0)
	{
		cout << 0;
		return 0;
	}
	else
	{
		cout << x << " ";
		return countdown(--x);
	}
}