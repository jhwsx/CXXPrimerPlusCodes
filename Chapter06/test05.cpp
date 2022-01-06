#include <iostream>

int main_test05()
{
	using namespace std;
	int salary;
	cout << "Enter your salary: ";
	while ((cin >> salary) && salary > 0 )
	{
		double tax = 0.0;
		if (salary <= 5000)
		{
			tax = 0.0;
		}
		else if (salary >= 5000 && salary <= 15000)
		{
			tax = (salary - 5000) * 0.10;
		}
		else if (salary > 15000 && salary <= 35000)
		{
			tax = 10000 * 0.10 + (salary - 15000) * 0.15;
		}
		else
		{
			tax = 10000 * 0.10 + 20000 * 0.15 + (salary - 35000) * 0.20;
		}
		cout << "tax = " << tax << endl;
		cout << "Enter your salary: ";
	}
	cout << "Done.\n";
	return 0;
}