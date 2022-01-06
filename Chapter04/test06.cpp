#include <iostream>
#include <string>

int main_test06()
{
	using namespace std;

	struct CandyBar
	{
		string brandname;
		float weight;
		int calories;
	};

	CandyBar snacks[3] = {
		{ "Mocha Munch", 2.3f, 350 },
		{ "French Cake", 0.3f, 100 },
		{"Peanut", 0.1f, 50}
	};

	int i = 0;
	for (;i < 3;i++)
	{
		cout << "brandname = " << snacks[i].brandname << ", weight = " << snacks[i].weight
			<< ", calories = " << snacks[i].calories << endl;
	}
	
	return 0;
}
/*
brandname = Mocha Munch, weight = 2.3, calories = 350
brandname = French Cake, weight = 0.3, calories = 100
brandname = Peanut, weight = 0.1, calories = 50
*/