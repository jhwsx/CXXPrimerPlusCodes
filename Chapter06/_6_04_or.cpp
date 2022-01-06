#include <iostream>

int main_or()
{
	using namespace std;
	cout << "This program may reformat your hard disk\n"
		"and destroy all your data.\n"
		"Do you wish to continue? <y/n> ";
	char ch;
	cin >> ch;
	if (ch == 'y' || ch == 'Y')
		cout << "You were warned!\a\a\n";
	else if (ch == 'n' || ch == 'N')
		cout << "A wise ... bye\n";
	else
		cout << "That wasn't y or n! Appearently you "
		"can't follow\ninstructions, so "
		"I'll trash your disk anyway.\a\a\a\n";
	return 0;
}
/*
This program may reformat your hard disk
and destroy all your data.
Do you wish to continue? <y/n> n
A wise ... bye
*/