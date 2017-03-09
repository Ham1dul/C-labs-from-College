//Programmed by Hamidul Islam
//Bitwise OR AND XOR
//1/21/16
#include <iostream>
using namespace std;
void PrintBit(int Bit[]);
void AndBit(int BitOwn[], int BitTwo[]);
void OrBit(int BitOwn[], int BitTwo[]);
void XOrBit(int BitOwn[], int BitTwo[]);

int main()
{
	int BitOne[12] = { 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 1 };
	int BitTwo[12] = { 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0 }; //create requested bit sequence as arrays
	PrintBit(BitOne);
	cout << endl;
	PrintBit(BitTwo);
	cout << endl;
	cout << "--------------" << endl;
	AndBit(BitOne, BitTwo);
	OrBit(BitOne, BitTwo);
	XOrBit(BitOne, BitTwo);
	return 0;
}

void PrintBit(int Bit[]) //prints out each bit sequence
{
	for (int counter = 0; counter < 12; counter++) //12 ints in each bit sequence
	{
		if (counter == 4 || counter == 8)
			cout << " " << Bit[counter];
		else
			cout << Bit[counter];

	}
}

void AndBit(int BitOne[], int BitTwo[]) //solves for AND function
{
	int AndBit[12];
	for (int counter = 0; counter < 12; counter++) 
	{
		if (BitOne[counter] == 1 && BitTwo[counter] == 1) //only prints 1 of both bits above it is true
			AndBit[counter] = 1;
		else //else the solution is false
			AndBit[counter] = 0;
	}
	PrintBit(AndBit);
	cout << "  AND BIT" << endl;
}
void OrBit(int BitOne[], int BitTwo[]) //solves for OR function
{
	int OrBit[12];
	for (int counter = 0; counter < 12; counter++)
	{
		if (BitOne[counter] == 0 && BitTwo[counter] == 0) //only prints false if both bits above it is false
			OrBit[counter] = 0;
		else
			OrBit[counter] = 1; //else it is true
	}
	PrintBit(OrBit);
	cout << "  OR BIT" << endl;
}
void XOrBit(int BitOne[], int BitTwo[]) //solves for XOR bit
{
	int XOrBit[12];
	for (int counter = 0; counter < 12; counter++)
	{
		if (BitOne[counter] == BitTwo[counter]) //only false when the value of both bits are the same
			XOrBit[counter] = 0;
		else //else it is true
			XOrBit[counter] = 1;
	}
	PrintBit(XOrBit);
	cout << "  XOR BIT" << endl;


}