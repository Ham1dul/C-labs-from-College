#include <iostream>
#include <string>

using namespace std;
int characters(string a);
int words(string a);
int vowels(string a);
void frequency(string a);


int main()
{
	string a;
	cout << "enter your sentence" << endl;
	getline(cin, a);
	cout << "the amount of characters in the string = " << characters(a)<<endl;
	cout << "the number of words are = " << words(a)<<endl;
	cout << "the amount of vowels = " << vowels(a)<<endl;
	frequency(a);

	return 0;
}

int characters(string a)
{
	
	int characters = a.size();
	return characters;
}
int words(string a)
{
	int Spaces = 0;
	unsigned int i = 0;

	while (isspace(a.at(i)))
		i++;

	for (; i < a.length(); i++)
	{
		if (isspace(a.at(i)))
		{
			Spaces++;

			
			while (isspace(a.at(i++)))
				if (a.at(i) == '\0')
					Spaces--;
		}
	}

	
	return Spaces + 1;
}
int vowels(string a)
{
	int count = 0;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
		{
			count++;
		}


	}
	return count;
}
void frequency(string a)
{
	string temp, whole;
	int count, repeat = words(a);
	for (int i = 0; i < repeat-1; i++)
	{
		count = 1;
		temp = a.substr(0, a.find(" "));
		a = a.substr(temp.size() + 1, a.size());
		size_t found = a.find(temp);
		if (found != std::string::npos)
		{
				count++;
		}
		
		cout << temp << " appears = " << count << " times" << endl;
	}
	cout << a << " appears = " << count << " times" << endl;
}
