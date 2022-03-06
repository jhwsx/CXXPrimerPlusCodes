#include <iostream>
using namespace std;

const int SEASONS2 = 4;
const char* season_names2[] = { "Spring", "Summer", "Fall", "Winter" };

struct Expenses
{
	double ar[SEASONS2];
};


void fill(Expenses* pe);
void show(Expenses* pe);

int main_test08_b()
{
	Expenses e;
	fill(&e);
	show(&e);
	return 0;
}

void fill(Expenses* pe)
{
	for (int i = 0; i < SEASONS2; i++)
	{
		cout << "Enter " << season_names2[i] << " expenses: ";
		cin >> (pe->ar)[i];
	}
}

void show(Expenses* pe)
{
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < SEASONS2; i++)
	{
		cout << season_names2[i] << ": $" << (pe->ar)[i] << endl;
		total += (pe->ar)[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
/*
Enter Spring expenses: 100
Enter Summer expenses: 50
Enter Fall expenses: 300
Enter Winter expenses: 200

EXPENSES
Spring: $100
Summer: $50
Fall: $300
Winter: $200
Total Expenses: $650
*/