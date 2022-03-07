#include <iostream>
#include <cstring>

struct CandyBar
{
	char name[50];
	double weight;
	int calories;
};

using namespace std;

void fillCandyBar(CandyBar & cb, const char* name = "Millennium Munch", double weight = 2.85, int calories = 350);

void showCandyBar(const CandyBar & cb);

int main_test02()
{
	struct CandyBar cb;
	fillCandyBar(cb);
	showCandyBar(cb);
	fillCandyBar(cb, "Big White Rabbit", 3.1415926, 10086);
	showCandyBar(cb);
	return 0;
}

void fillCandyBar(CandyBar& cb, const char* name, double weight, int calories)
{
	strcpy_s(cb.name, name);
	cb.weight = weight;
	cb.calories = calories;
}

void showCandyBar(const CandyBar& cb)
{
	cout << "name = " << cb.name << endl;
	cout << "weight = " << cb.weight << endl;
	cout << "calories = " << cb.calories << endl;
}
/*
name = Millennium Munch
weight = 2.85
calories = 350
name = Big White Rabbit
weight = 3.14159
calories = 10086
*/
