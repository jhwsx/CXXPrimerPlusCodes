#include <iostream>
#include <cstring> // c string library

int main_test03()
{
	using namespace std;
	char firstname[20];
	cout << "Enter your first name: ";
	cin.getline(firstname, 20);
	char lastname[20];
	cout << "Enter your last name: ";
	cin.getline(lastname, 20);

	char name[40];
	strcpy_s(name, firstname);
	strcat_s(name, ", ");
	strcat_s(name, lastname);

	cout << "Here is the information in a single string: " << name << endl;
	return 0;
}
/*
Enter your first name: Flip
Enter your last name: Fleming
Here is the information in a single string: Flip, Fleming
*/