// 4.11 一个简单的 structure
#include <iostream>
using namespace std;

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

struct inflatable2
{
	string name;
	float volume;
	double price;
};

void print(inflatable& inflate)
{
	cout << "name=" << inflate.name << ",volume=" << inflate.volume << ",price=" << inflate.price << endl;
}

int main11()
{

	inflatable guest =
	{
		"Glorious Gloria",
		1.88,
		29.99
	};
	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99
	};

	cout << "Expand your guest list with " << guest.name
		<< " and " << pal.name << endl;
	cout << "You can have both for $";
	cout << guest.price + pal.price << ".\n";

	inflatable duck{"Daphne", 0.12, 9.98}; // 使用列表初始化，C++11
	print(duck);
	inflatable mayor{}; // 各个成员被设置为0
	print(mayor);
	return 0;
}

/*
Expand your guest list with Glorious Gloria and Audacious Arthur
You can have both for $62.98.
name=Daphne,volume=0.12,price=9.98
name=,volume=0,price=0
*/