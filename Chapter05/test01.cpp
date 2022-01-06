#include <iostream>

int main_test01()
{
	using namespace std;
	cout << "Enter the smaller number: ";
	int small;
	cin >> small;
	cout << "Enter the bigger number: ";
	int big;
	cin >> big;
	int sum = 0;
	for (int i = small; i <= big; i++)
	{
		sum += i;
	}
	cout << "The sum of numbers between " << small << " and " << big 
		<< " is " << sum << endl;
	return 0;
}
/*
Enter the smaller number: 2
Enter the bigger number: 9
The sum of numbers between 2 and 9 is 44
*/