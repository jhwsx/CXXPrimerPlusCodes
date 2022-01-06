#include <iostream>
#include <array>

int main_test10()
{
	using namespace std;

	array<double, 3> ad;
	cout << "Enter the first achievement of 40-meter run: ";
	cin >> ad[0];
	cout << "Enter the second achievement of 40-meter run: ";
	cin >> ad[1];
	cout << "Enter the third achievement of 40-meter run: ";
	cin >> ad[2];

	double average = (ad[0] + ad[1] + ad[2]) / 3;

	cout << "Run " << 3 << " times, average = " << average << endl;
	return 0;
}
/*
Enter the first achievement of 40-meter run: 5.55
Enter the second achievement of 40-meter run: 6.66
Enter the third achievement of 40-meter run: 7.77
Run 3 times, average = 6.66
*/