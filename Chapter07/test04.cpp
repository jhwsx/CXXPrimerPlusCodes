#include <iostream>

long double probability2(unsigned numbers, unsigned picks);

int main_test04()
{
	using namespace std;
	// 纸牌总数
	double total;
	// 选择的纸牌张数
	double choices;
	// 第二个区间的纸牌张数
	double special;
	cout << "Enter the total number of choices on the game card, \n"
		"the number of picks allowed and the special number of choices:\n";
	while ((cin >> total >> choices) && (choices < total) && (cin >> special) && special != 0)
	{
		cout << "You have one chance in ";
		cout << probability2(total, choices) / special;
		cout << " of winning.\n";
		cout << "Next three number (q to quit) : ";
	}
	cout << "bye.\n";
	return 0;
}

long double probability2(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	unsigned n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
	{
		result = result * n / p;
	}
	return result;
}
/*
Enter the total number of choices on the game card,
the number of picks allowed and the special number of choices:
47 5 27
You have one chance in 56812.6 of winning.
Next three number (q to quit) : q
bye.
*/