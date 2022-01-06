#include <iostream>

using namespace std;

int agetomonths(int);

int main_t4()
{
	cout << "Enter your age: ";
	int age;
	cin >> age;

	int months = agetomonths(age);
	cout << months << endl;

	return 0;
}

int agetomonths(int age)
{
	return 12 * age;
}