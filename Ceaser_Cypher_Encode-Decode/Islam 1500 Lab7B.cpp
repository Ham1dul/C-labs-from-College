#include <iostream>
#include <string>
using namespace std;
char caesar(char);

int main()
{
	string input;
		cout << "Enter cipertext to decode" << endl;
	
		getline(cin, input);
		string output = "";
		for (int x = 0; x < input.length(); x++)
		{
			output += caesar(input[x]);
		}
		cout << output << endl;
}  

char caesar(char c)
{
	
		c = toupper(c); 
		c = (((c - 65) - 2) % 26) + 65;

	return c;
}
