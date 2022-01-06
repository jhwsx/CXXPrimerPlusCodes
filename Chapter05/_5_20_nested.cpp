#include <iostream>

int main_20()
{
	using namespace std;
	// 存储 5 个城市在 4 年间的最高温度
	int maxtemps[4][5] =
	{
		{10, 20, 14, 14, 16},
		{11, 30, 40, 44, 46},
		{15, 32, 33, 36, 33},
		{19, 40, 44, 33, 22}
	};
	cout << "{" << endl;
	for (int row = 0; row < 4; row++)
	{
		cout << "\t";
		for (int column = 0; column < 5; column++)
		{
			cout << maxtemps[row][column] << ", ";
		}
		cout << endl;
	}
	cout << "}" << endl;

	const int Cities = 5;
	const int Years = 4;
	// 这是一个指针数组，每一个元素都是一个 char * 类型的指针
	const char* cities[Cities] =
	{
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};

	int maxtempss[Years][Cities] =
	{
		{10, 20, 14, 14, 16},
		{11, 30, 40, 44, 46},
		{15, 32, 33, 36, 33},
		{19, 40, 44, 33, 22}
	};

	cout << "Maximum temperatures for 2008-2011\n\n";
	// 先遍历列，再遍历行
	for (int city = 0; city < Cities; city++)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; year++)
		{
			cout << maxtempss[year][city] << "\t";
		}
		cout << endl;
	}
	return 0;
}
/*
{
		10, 20, 14, 14, 16,
		11, 30, 40, 44, 46,
		15, 32, 33, 36, 33,
		19, 40, 44, 33, 22,
}
Maximum temperatures for 2008-2011

Gribble City:   10      11      15      19
Gribbletown:    20      30      32      40
New Gribble:    14      40      33      44
San Gribble:    14      44      36      33
Gribble Vista:  16      46      33      22
*/