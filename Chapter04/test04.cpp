#include <iostream>
#include <string>

int main_test04()
{
	using namespace std;
	string firstname;
	cout << "Enter your first name: ";
	getline(cin, firstname);
	string lastname;
	cout << "Enter your last name: ";
	getline(cin, lastname);

	string name = firstname + ", " + lastname;

	cout << "Here is the information in a single string: " << name << endl;
	return 0;
}
/*
Enter your first name: Flip
Enter your last name: Fleming
Here is the information in a single string: Flip, Fleming
*/