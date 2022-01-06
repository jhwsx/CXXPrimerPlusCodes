#include <iostream>

int main_test01()
{
	using namespace std;

	cout << "What is your first name? ";
	char firstname[20];
	cin.get(firstname, 20).get(); // 面向行的输入

	cout << "What is your last name? ";
	char lastname[10];
	cin.get(lastname, 10).get();

	cout << "What letter grade do you deserve? ";
	char lettergrade;
	cin.get(lettergrade);

	cout << "What is your age? ";
	int age;
	cin >> age;

	cout << "Name: " << lastname << ", " << firstname << endl;
	cout << "Grade: " << char(lettergrade + 1) << endl;
	cout << "Age: " << age << endl;

	return 0;
}
/*
What is your first name? Betty Sue
What is your last name? Yeme
What letter grade do you deserve? C
What is your age? 22
Name: Yeme, Betty Sue
Grade: D
Age: 22
*/