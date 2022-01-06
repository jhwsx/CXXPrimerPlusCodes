#include <iostream>
#include <string>

int main_test09()
{
	using namespace std;

	struct CandyBar
	{
		string brandname;
		float weight;
		int calories;
	};

	CandyBar* psnacks = new CandyBar[3];
	psnacks[0] = { "Mocha Munch", 2.3f, 350 };
	psnacks[1] = { "French Cake", 0.3f, 100 };
	psnacks[2] = { "Peanut", 0.1f, 50 };
	int i = 0;
	for (;i < 3;i++)
	{
		cout << "brandname = " << psnacks[i].brandname << ", weight = " << psnacks[i].weight
			<< ", calories = " << psnacks[i].calories << endl;
	}
	delete[] psnacks;
	return 0;
}
/*
brandname = Mocha Munch, weight = 2.3, calories = 350
brandname = French Cake, weight = 0.3, calories = 100
brandname = Peanut, weight = 0.1, calories = 50
*/