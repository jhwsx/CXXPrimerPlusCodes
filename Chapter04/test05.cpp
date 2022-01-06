#include <iostream>
#include <string>

int main_test05()
{
	using namespace std;

	struct CandyBar
	{
		string brandname;
		float weight;
		int calories;
	};

	CandyBar snack = {"Mocha Munch", 2.3f, 350};
	cout << "brandname = " << snack.brandname << ", weight = " << snack.weight 
		<< ", calories = " << snack.calories << endl;
	return 0;
}
/*
brandname = Mocha Munch, weight = 2.3, calories = 350
*/