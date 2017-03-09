#include <iostream>
#include <string>
using namespace std;
void DecToBin();
void BinToOct();
void BinToHex();
void HexToBin();
void OctToBin();


int main()
{
	DecToBin();
	BinToOct();
	BinToHex();
	HexToBin();
	OctToBin();
	return 0;
}

void OctToBin()
{
	char Oct[1000];
	long int counter = 0;

	cout << "Enter any octal number " <<endl;
	cin >> Oct;

	cout << "Equivalent binary value: ";
	while (Oct[counter])
	{
		switch (Oct[counter])
		{
		case '0': cout << "000";
			break;
		case '1': cout << "001";
			break;
		case '2': cout << "010";
			break;
		case '3': cout << "011";
			break;
		case '4': cout << "100";
			break;
		case '5': cout << "101";
			break;
		case '6': cout << "110";
			break;
		case '7': cout << "111";
			break;
		default:  cout << "Invalid octal digit " << Oct[counter];
		}
		counter++;
	}
	cout << endl;
}
void HexToBin()
{
	int counter = 0;
	char Bin[100], Hexa[100];
	cout << "Enter hexadecimal number " <<endl;
	cin >> Hexa;
	cout << "Binary number  = ";
	while (Hexa[counter])
	{
		switch (Hexa[counter])
		{
		case '0': cout << "0000";
			break;
		case '1': cout << "0001";
			break;
		case '2': cout << "0010";
			break;
		case '3': cout << "0011";
			break;
		case '4': cout << "0100";
			break;
		case '5': cout << "0101";
			break;
		case '6': cout << "0110";
			break;
		case '7': cout << "0111";
			break;
		case '8': cout << "1000";
			break;
		case '9': cout << "1001";
			break;
		case 'A': cout << "1010";
			break;
		case 'B': cout << "1011";
			break;
		case 'C': cout << "1100";
			break;
		case 'D': cout << "1101";
			break;
		case 'E': cout << "1110";
			break;
		case 'F': cout << "1111";
			break;
		case 'a': cout << "1010";
			break;
		case 'b': cout << "1011";
			break;
		case 'c': cout << "1100";
			break;
		case 'd': cout << "1101";
			break;
		case 'e': cout << "1110";
			break;
		case 'f': cout << "1111";
			break;
		default: cout << "Invalid hexadecimal digit " << Hexa[counter];
		}
		counter++;
	}
	cout << endl;


}

void BinToHex()
{

	long int Binary, quotient;
	int i = 1, temp;
	char hexa[100];
	cout << "Enter Binary Number" <<endl;
	cin >> Binary;
	quotient = Binary;
	while (quotient != 0)
	{
		temp = quotient % 16;
			
			if (temp < 10)
		{
				temp = temp + 48;
		}
			else
		{
				temp = temp + 55;
		}
			hexa[i++] = temp;
			quotient = quotient / 16;
	}
		cout << "Hexa Number = ";
		for (int counter = i - 1; counter>0; counter--)
		{
			cout << hexa[counter];
		}
		cout << endl;
}

void DecToBin()
{
	int dec;
	string binary;
	char x = ' ';
	cout << "please enter decimal number"<<endl;
	cin >> dec;
	while (dec != 0)
	{
		x = dec % 2 + '0';
		binary = x + binary;
		dec /= 2;
	}
	cout << binary << endl;

}

void BinToOct()
{
	cout << "enter binary number" << endl;
	int binary;
	cin >> binary;
	int octal = 0, decimal = 0, counter = 0;
	while (binary != 0)
	{
		decimal += (binary % 10)*pow(2, counter);
		++counter;
		binary /= 10;
	}

	
	counter = 1;
	while (decimal != 0)
	{
		octal += (decimal % 8)*counter;
		decimal /= 8;
		counter *= 10;
	}
	cout << "Octal number = " << octal<<endl;

}