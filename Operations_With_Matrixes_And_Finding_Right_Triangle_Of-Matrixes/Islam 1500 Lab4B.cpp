#include <iostream>
using namespace std;
int main()
{
	int rowA, columnA;
	double a[100][100];
	cout << "enter rows of matrix a : ";
	cin >> rowA;
	cout << "columns of matrix a : ";
	cin >> columnA;
	cout << "initalize matrix a : " << endl;
	for (int i = 0; i < rowA; i++)
		for (int j = 0; j < columnA; j++)
		{
			cin >> a[i][j];
		}
	if (rowA == columnA)
	{
		cout << " \n Upper Right Triangle Of Matrix Is : ";
		for (int i = 0; i < rowA; i++)
		{
			cout << "\n";
			for (int j = 0; j < columnA; j++)
			{
				if (j >= i)
				{
					cout << a[i][j] << "\t";
				}
				else
				{
					cout << "\t";
				}
			}
		}
	}
	else
		cout << "not a square matrix, cannot find trainagles of the matrix" << endl;
	return 0;
}