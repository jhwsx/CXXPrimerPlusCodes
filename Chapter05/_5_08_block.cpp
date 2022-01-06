// Ê¹ÓÃÓï¾ä¿é
#include <iostream>
int main_8()
{
	using namespace std;
	int x = 20;
	{
		cout << x << endl; // 20
		int x = 100;
		cout << x << endl; // 100
	}
	cout << x << "\n\n"; // 20

	cout << "The Amazing Accounto will sum and average ";
	cout << "five numbers for you.\n";
	cout << "Please enter five values:\n";
	
	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Value " << i << ": ";
		cin >> number;
		sum += number;
	}
	cout << "Five exquisite choices indeed! ";
	cout << "They sum to " << sum << endl;
	cout << "and average to " << sum / 5 << ".\n";
	cout << "The Amazing Accounto bids you adieu!\n";
	return 0;
}
/*
20
100
20

The Amazing Accounto will sum and average five numbers for you.
Please enter five values:
Value 1: 3
Value 2: 2
Value 3: 1
Value 4: 4
Value 5: 5
Five exquisite choices indeed! They sum to 15
and average to 3.
The Amazing Accounto bids you adieu!
*/