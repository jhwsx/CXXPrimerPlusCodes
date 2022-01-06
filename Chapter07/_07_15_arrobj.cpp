#include <iostream>
#include <array>
#include <string>

const int Seasons = 4;
const std::array<std::string, Seasons> Snames =
	{"Spring", "Summer", "Fall", "Winter"};

void fill(std::array<double, Seasons>* pa);
void show(std::array<double, Seasons> da);

int main_15()
{
	// 用于存储一年四个季度的开支
	std::array<double, Seasons> expenses;
	fill(&expenses);
	std::cout << "main expenses address: " << &expenses << std::endl;
	show(expenses);
	return 0;
}

void fill(std::array<double, Seasons>* pa)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> (*pa)[i];
	}
}
// 值传递，会产生新的副本
void show(std::array<double, Seasons> da)
{
	std::cout << "show expenses address: " << &da << std::endl;
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
/*
Enter Spring expenses: 100
Enter Summer expenses: 50
Enter Fall expenses: 300
Enter Winter expenses: 200
main expenses address: 008FF7AC
show expenses address: 008FF6BC

EXPENSES
Spring: $100
Summer: $50
Fall: $300
Winter: $200
Total Expenses: $650
*/