#include <iostream>
using namespace std;
void addition();
void subtraction();
void sumOfRowColumn();
void product();
void transpose();
void initialize(double c[100][100], int row, int column);

double a[100][100];
double b[100][100];
int rowA, columnA, rowB, columnB;

int main()
{
	int opperation;
	cout << "please select operaton (0 for addition, 1 for subtraction, 2 for product, 3 for transpose, 4 for sum of row and column)";
	cout << endl;
	cin >> opperation;
	cout << endl;
	switch (opperation)
	{
	case 0:
		addition();
		break;
	case 1:
		subtraction();
		break;
	case 2:
		product();
		break;
	case 3:
		transpose();
		break;
	case 4:
		sumOfRowColumn();
		break;
	default:
		cout << "invalid input" << endl;
		break;
	}
	addition();
	subtraction();
	product();
	transpose();
	sumOfRowColumn();

	return 0;
}

void initialize(double c[100][100], int row, int column)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++)
		{
			cin >> c[i][j];
		}

}
void addition()
{
	cout << "enter rows of matrix a : ";
	cin >> rowA;
	cout << "columns of matrix a : ";
	cin >> columnA;
	cout << "enter rows of matrix b : ";
	cin >> rowB;
	cout << "columns of matrix b : ";
	cin >> columnB;
	if (rowA == rowB && columnA == columnB)
	{
		cout << "initalize matrix a" << endl;
		initialize(a, rowA, columnA);
		cout << "initalize matrix b" << endl;
		initialize(b, rowB, columnB);
		for (int i = 0; i < rowA; i++)
		{
			cout << "[";
			for (int j = 0; j < columnA; j++)
			{
				cout << a[i][j] + b[i][j]<<  " ";
			}
			cout << "]" << endl;
		}
	}
	else
		cout << "rows and columns do not match, operation cannot work" << endl;

}

void subtraction()
{
	cout << "enter rows of matrix a : ";
	cin >> rowA;
	cout << "columns of matrix a : ";
	cin >> columnA;
	cout << "enter rows of matrix b : ";
	cin >> rowB;
	cout << "columns of matrix b : ";
	cin >> columnB;
	if (rowA == rowB && columnA == columnB)
	{
		cout << "initalize matrix a" << endl;
		initialize(a, rowA, columnA);
		cout << "initalize matrix b" << endl;
		initialize(b, rowB, columnB);
		for (int i = 0; i < rowA; i++)
		{
			cout << "[";
			for (int j = 0; j < columnA; j++)
			{
				cout << a[i][j] - b[i][j] << " ";
			}
			cout << "]" << endl;
		}
	}
	else
		cout << "rows and columns do not match, operation cannot work" << endl;

}
void product()
{
	double c[100][100];
	cout << "enter rows of matrix a : ";
	cin >> rowA;
	cout << "columns of matrix a : ";
	cin >> columnA;
	cout << "enter rows of matrix b : ";
	cin >> rowB;
	cout << "columns of matrix b : ";
	cin >> columnB;
	while (columnA != rowB)
	{
		cout << "Column of first matrix not equal to row of second.";
		cout << "enter rows of matrix a : ";
		cin >> rowA;
		cout << "columns of matrix a : ";
		cin >> columnA;
		cout << "enter rows of matrix b : ";
		cin >> rowB;
		cout << "columns of matrix b : ";
	}
	cout << "initalize matrix a" << endl;
	initialize(a, rowA, columnA);
	cout << "initalize matrix b" << endl;
	initialize(b, rowB, columnB);
	for (int i = 0; i<rowA; ++i)
		for (int j = 0; j<columnB; ++j)
		{
			c[i][j] = 0;
		}
	for (int i = 0; i<rowA; ++i)
		for (int j = 0; j<columnB; ++j)
			for (int k = 0; k<columnA; ++k)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
	for (int i = 0; i < rowA; ++i)
	{
		cout << "[";
		for (int j = 0; j < columnB; ++j)
		{
			cout << c[i][j] << " ";
			if (j == columnB - 1)
				cout << "]"  << endl;
		}
	}

}
void transpose()
{
	cout << "enter rows of matrix a : ";
	cin >> rowA;
	cout << "columns of matrix a : ";
	cin >> columnA;
	cout << "initalize matrix a" << endl;
	initialize(a, rowA, columnA);
	for (int i = 0; i<rowA; ++i)
		for (int j = 0; j<columnA; ++j)
		{
			b[j][i] = a[i][j];
		}
	for (int i = 0; i < columnA; i++)
	{
		cout << "[";
		for (int j = 0; j < rowA; j++)
		{
			cout << b[i][j] << " ";
		}
		cout << "]" << endl;
	}
}
void sumOfRowColumn()
{
	double sum = 0;
	
	cout << "enter rows of matrix a : ";
	cin >> rowA;
	cout << "columns of matrix a : ";
	cin >> columnA;
	cout << "initalize matrix a" << endl;
	initialize(a, rowA, columnA);
	for (int i = 0; i < rowA; ++i)
	{
		for (int j = 0; j < columnA; ++j)
		{
			sum = sum + a[i][j];
		}
		cout << "sum of row " << i + 1 << "= " << sum << " ";
		sum = 0;
		cout << endl;
	}
	for (int i = 0; i < columnA; ++i)
	{
		for (int j = 0; j < rowA; ++j)
		{
			sum = sum + a[i][j];
		}
		cout << "sum of column " << i + 1 << "= " << sum << " ";
		sum = 0;
		cout << endl;
	}
}