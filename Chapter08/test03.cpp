#include <iostream>
#include <string>
#include <cctype> // for ×Ö·ûº¯Êý toupper()

using namespace std;

void printUpperString(string& str);

int main_test03()
{
	cout << "Enter a string (q to quit):";
	string str;
	getline(cin, str);
	while (str != "q") {
		printUpperString(str);
		cout << "Next string (q to quit):";
		getline(cin, str);
	}
	cout << "Bye.\n";
	return 0;
}

void printUpperString(string& str)
{
	int len = str.length();
	for (int i = 0; i < len; i++)
	{
		cout << char(toupper(str[i]));
	}
	cout << endl;
}
/*
Enter a string (q to quit):hello
HELLO
Next string (q to quit):world
WORLD
Next string (q to quit):happy every day
HAPPY EVERY DAY
Next string (q to quit):q
Bye.
*/