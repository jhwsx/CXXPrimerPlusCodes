#include <iostream>

int main_test06()
{
	using namespace std;
	const int Month = 12;
	const int Years = 3;
	const int years[3] = {2020, 2021, 2022};
	const char* months[Month] =
	{
		"January", "February", "March", "April",
		"May", "June", "July", "August",
		"September", "October", "November", "December"
	};

	int sales[Years][Month];
	for (int year = 0; year < Years; year++)
	{
		for (int month = 0; month < Month; month++)
		{
			cout << "Enter the sale of " << years[year] << "£¬" << months[month] << ": ";
			cin >> sales[year][month];
		}
	}

	int totalSales = 0;
	for (int year = 0; year < Years; year++)
	{
		int yearSales = 0;
		for (int month = 0; month < Month; month++)
		{
			yearSales += sales[year][month];
		}
		cout << years[year] << " sales: " << yearSales << endl;
		totalSales += yearSales;
	}

	cout << "totalSales = " << totalSales << endl;
	return 0;
}

/*
Enter the sale of 2020£¬January: 3
Enter the sale of 2020£¬February: 2
Enter the sale of 2020£¬March: 4
Enter the sale of 2020£¬April: 5
Enter the sale of 2020£¬May: 6
Enter the sale of 2020£¬June: 7
Enter the sale of 2020£¬July: 8
Enter the sale of 2020£¬August: 3
Enter the sale of 2020£¬September: 2
Enter the sale of 2020£¬October: 4
Enter the sale of 2020£¬November: 5
Enter the sale of 2020£¬December: 6
Enter the sale of 2021£¬January: 5
Enter the sale of 2021£¬February: 4
Enter the sale of 2021£¬March: 32
Enter the sale of 2021£¬April: 5
Enter the sale of 2021£¬May: 4
Enter the sale of 2021£¬June: 32
Enter the sale of 2021£¬July: 4
Enter the sale of 2021£¬August: 5
Enter the sale of 2021£¬September: 6
Enter the sale of 2021£¬October: 7
Enter the sale of 2021£¬November: 8
Enter the sale of 2021£¬December: 7
Enter the sale of 2022£¬January: 6
Enter the sale of 2022£¬February: 5
Enter the sale of 2022£¬March: 4
Enter the sale of 2022£¬April: 3
Enter the sale of 2022£¬May: 2
Enter the sale of 2022£¬June: 4
Enter the sale of 2022£¬July: 5
Enter the sale of 2022£¬August: 6
Enter the sale of 2022£¬September: 7
Enter the sale of 2022£¬October: 6
Enter the sale of 2022£¬November: 5
Enter the sale of 2022£¬December: 4
2020 sales: 55
2021 sales: 119
2022 sales: 57
totalSales = 231
*/