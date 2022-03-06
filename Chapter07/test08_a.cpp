#include <iostream>

using namespace std;
const int SEASONS = 4;
const char* season_names[] = { "Spring", "Summer", "Fall", "Winter" };

void fill(double ar[]);
void show(double ar[]);
int main_test08_a()
{
	double expenses[SEASONS];
	fill(expenses);
	cout << "main expenses address: &expenses=" << &expenses << ", expenses=" << expenses << endl;
	show(expenses);
	return 0;
}

void fill(double ar[])
{
	for (int i = 0; i < SEASONS; i++)
	{
		cout << "Enter " << season_names[i] << " expenses: ";
		cin >> ar[i];
	}
}


void show(double ar[])
{
	cout << "show expenses address: &ar=" << &ar << ", ar=" << ar << endl;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < SEASONS; i++)
	{
		cout << season_names[i] << ": $" << ar[i] << endl;
		total += ar[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
/*
Enter Spring expenses: 100
Enter Summer expenses: 50
Enter Fall expenses: 300
Enter Winter expenses: 200
main expenses address: &expenses=0073F8D0, expenses=0073F8D0
show expenses address: &ar=0073F7FC, ar=0073F8D0

EXPENSES
Spring: $100
Summer: $50
Fall: $300
Winter: $200
Total Expenses: $650
*/