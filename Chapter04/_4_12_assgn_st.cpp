// 4.12 ½á¹¹¸³Öµ
#include <iostream>

struct inflatable3
{
	char name[20];
	float volume;
	double price;
};

int main12()
{
	using namespace std;

	inflatable3 bouquet =
	{
		"sunflowers",
		0.20,
		12.49
	};

	inflatable3 choice;
	cout << "bouquet: " << bouquet.name << " for $";
	cout << bouquet.price << endl;

	choice = bouquet;
	cout << "choice: " << choice.name << " for $";
	cout << choice.price << endl;

	return 0;
}
/*
bouquet: sunflowers for $12.49
choice: sunflowers for $12.49
*/