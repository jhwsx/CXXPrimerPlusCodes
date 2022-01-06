#include <iostream>

int main_t5()
{
	using namespace std;
	cout << "Enter the world's population: ";
	// 使用 long 是不行的，要使用 long long。
	long long world_population{};
	cin >> world_population;
	cout << "Enter the populationo of the US: ";
	long long us_population{};
	cin >> us_population;
	double percentage = us_population * 100.0 / world_population;
	cout << "The population of the US is " << percentage << "% of the world population.\n";
	return 0;
}

/*
Enter the world's population: 6898758899
Enter the populationo of the US: 310783781
The population of the US is 4.50492% of the world population.
*/