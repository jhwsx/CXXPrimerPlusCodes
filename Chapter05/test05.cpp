#include <iostream>

int main_test05()
{
	using namespace std;
	const int Month = 12;
	const char* months[Month] =
	{
		"January", "February", "March", "April",
		"May", "June", "July", "August",
		"September", "October", "November", "December"
	};
	int sales[Month];
	int sum = 0;
	for (int i = 0; i < Month; i++)
	{
		cout << "Enter the sale of " << months[i] << ": ";
		cin >> sales[i];
		sum += sales[i];
	}

	cout << "sum = " << sum << endl;
	for (int i = 0; i < Month; i++)
	{
		cout << months[i] << " : " << sales[i] << endl;
	}
	return 0;
}

/*
Enter the sale of February: 30
Enter the sale of March: 35
Enter the sale of April: 34
Enter the sale of May: 22
Enter the sale of June: 33
Enter the sale of July: 44
Enter the sale of August: 55
Enter the sale of September: 77
Enter the sale of October: 88
Enter the sale of November: 55
Enter the sale of December: 55
sum = 548
January : 20
February : 30
March : 35
April : 34
May : 22
June : 33
July : 44
August : 55
September : 77
October : 88
November : 55
December : 55
*/