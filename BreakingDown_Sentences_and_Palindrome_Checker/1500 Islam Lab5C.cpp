#include <iostream>
#include <string>
using namespace std;
void isPalindrome();


int main()
{
	isPalindrome();

	return 0;
}

void isPalindrome()
{
	string palindrome; //set variable
	int length;
	bool truth;
	cout << "please enter your string" << endl;
	cin >> palindrome;
	length = palindrome.length(); //get length of string
	for (int counter = 0; counter < length; counter++) //loop based on length of string
	{
		if (palindrome[counter] == palindrome[length - 1 - counter]) //compare the first character to the last, repeatedly while reaching the full length of the string from the front, vise versa
			truth = 1;
		else
		{
			truth = 0;
			break;
		}
	}
	if (truth == 0)
		cout << "your string is not a palindrome" << endl;
	else
		cout << "your string is a palindrome" << endl;
}