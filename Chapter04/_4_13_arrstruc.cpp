// 4.13 �ṹ����
#include <iostream>

struct inflatable4
{
	char name[20];
	float volume;
	double price;
};

int main13()
{
	using namespace std;
	inflatable4 guests[2] =
	{
		{"Bambi", 0.5, 21.99},
		{"Godzilla", 2000, 565.99}
	};
	cout << "The guests " << guests[0].name << " and " << guests[1].name
		<< "\nhave a combined volume of "
		<< guests[0].volume + guests[1].volume << " cubic feet.\n";
	return 0;
}
/*
The guests Bambi and Godzilla
have a combined volume of 2000.5 cubic feet.
*/