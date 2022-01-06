#include <iostream>

int main_test02()
{
	using namespace std;
	const int Max = 10;
	double donations[Max];
	cout << "Please enter the values of donations.\n";
	cout << "You may enter up to " << Max << " donation <q to terminate>.\n";
	cout << "donation #1: ";
	int i = 0;
	while (i < Max && cin >> donations[i])
	{
		if (++i < Max)
		{
			cout << "donation #" << i + 1 << ": ";
		}
	}
	if (i == 0)
	{
		cout << "No data.\n";
	}
	else
	{
		double total = 0.0;
		for (int j = 0; j < i; j++)
		{
			total += donations[j];
		}
		double average = total / i;
		int count = 0;
		for (int j = 0; j < i; j++)
		{
			if (donations[j] > average)
				count++;
		}
		cout << "average = " << average << ", count = " << count << endl;
	}
	
	return 0;
}
/*
Please enter the values of donations.
You may enter up to 10 donation <q to terminate>.
donation #1: 2
donation #2: 3
donation #3: 3.4
donation #4: 5.6
donation #5: 4.4
donation #6: 3.3
donation #7: 44
donation #8: 55
donation #9: 22
donation #10: 44
average = 18.67, count = 4
*/