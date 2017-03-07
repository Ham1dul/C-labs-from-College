#include <iostream>
#include <vector>

using namespace std;

int sequentialSearch(vector<int> l); //prototypes
void bubbleSort(vector<int> &a); 
int binarySearch(vector<int> a);  
void insertionSort(vector<int> &a); 


int main()
{
	vector<int> list;  //declare vect

	cout << "Adding elements from 100, increasing by 10 to the vector (100, 90,..., 0). " << endl << endl; 

	for (int i = 10; i >= 0; i--)  //push back
	{
		list.push_back(i * 10);
	}

	cout << "Run sequential search:1 " << endl;  //sequential serch
	cout << "Index: " << sequentialSearch(list) << endl;

	cout << "Run sequential search:2 " << endl;
	cout << "Index: " << sequentialSearch(list) << endl;


	cout << "Run bubble sort" << endl;  // bubble sort
	bubbleSort(list);

	cout << "sorted vector: " << endl;  //print to show sort
	for (int p : list)
	{
		cout << p << " ";
	}
	cout << endl;

	cout << "Running binary 1: " << endl;  //run binary search 
	cout << "Index: " << binarySearch(list) << endl;

	cout << "Running binary 2: " << endl;
	cout << "Index of your element: " << binarySearch(list) << endl;

	cout << "Adding elements,incremented by 5" << endl;

	for (int i = 0; i <= 10; i++) //add new elements to the list
	{
		list.push_back(i * 5);
	}

	cout << "New list: " << endl;  //new list
	for (int p : list)
	{
		cout << p << " ";
	}
	cout << endl;

	cout << "insertion sort" << endl; 
	insertionSort(list);

	cout << "Printing sorted list: " << endl;  
	for (int p : list)
	{
		cout << p << " ";
	}
	cout << endl;

	return 0;
}

int sequentialSearch(vector<int> l)
{
	int a, b = 0;
	bool x = false;  //set bool

	cout << "Enter search item: " << endl;
	cin >> a;

	for (int i = 0; i < l.size(); i++)  // sequential search
	{
		if (l.at(i) == a) //see if it is in list
		{
			x = true;
			b = i;
			break;
		}
	}

	if (x == true)   //return findings
		return b;
	else
		return 0;
}

void bubbleSort(vector<int> &a)  //bubble sort
{
	bool swap = false;
	while (swap == false)
	{
		swap = true;
		for (int i = 0; i < a.size() - 1; i++) //rearrange
		{
			if (a[i] > a[i + 1])
			{
				a[i] += a[i + 1];
				a[i + 1] = a[i] - a[i + 1];
				a[i] -= a[i + 1];
				swap = false;
			}
		}
	}
}

int binarySearch(vector<int> a)  //binary search
{
	int searchTerm, first = 0, last = a.size() - 1, mid;
	cout << "Enter serch: " << endl;
	cin >> searchTerm;

	bool found = false; //set condition

	while (first <= last && !found)  //bin serch
	{
		mid = (first + last) / 2;

		if (a[mid] == searchTerm)
			found = true;
		else if (a[mid] > searchTerm)
			last = mid - 1;
		else
			first = mid + 1;
	}

	if (found)
		return mid;
	else
		return 0;
}

void insertionSort(vector<int> &a)  //insertion sort
{
	int j, temp;
	for (int i = 0; i < a.size(); i++)
	{
		j = i;
		while (j > 0 && a[j] < a[j - 1])
		{
			temp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = temp;
			j--;
		}
	}
}