#include <iostream>

enum {red, orange, yellow, green, blue, violet, indigo};
int main_11()
{
	using namespace std;
	cout << "Enter color code (0-6): ";
	int code;
	cin >> code;
	while (code >= red && code <= indigo)
	{
		switch (code)
		{
			case red: cout << "Her lips were red.\n"; break;
			case orange: cout << "Her hair was orange.\n"; break;
			case yellow: cout << "Her shoes were yellow.\n"; break;
			case green: cout << "Her nails were green.\n"; break;
			case blue: cout << "Her sweatsuit was blue.\n"; break;
			case violet: cout << "Her eyes were violet.\n"; break;
			case indigo: cout << "Her mood was indigo.\n"; break;
			default: break;
		}
		cout << "Enter color code (0-6): ";
		cin >> code;
	}
	cout << "Bye.\n";
	return 0;
}
/*
Enter color code (0-6): 0
Her lips were red.
Enter color code (0-6): 1
Her hair was orange.
Enter color code (0-6): 2
Her shoes were yellow.
Enter color code (0-6): 3
Her nails were green.
Enter color code (0-6): 4
Her sweatsuit was blue.
Enter color code (0-6): 5
Her eyes were violet.
Enter color code (0-6): 6
Her mood was indigo.
Enter color code (0-6): 7
Bye.
*/