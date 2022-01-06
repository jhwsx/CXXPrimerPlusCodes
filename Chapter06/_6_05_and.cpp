#include <iostream>

int main_05()
{
	const int ArSize = 6;
	using namespace std;
	float naaq[ArSize];
	cout << "Enter the NAAQs (New Age Awareness Quotients) "
		<< "of\nyour neighbors. Program terminates "
		<< "when you make\n" << ArSize << " entries "
		<< "or enter a negative value.\n";

	int i = 0;
	// 新输入值暂时放在 temp 变量里面，等核实输入有效时才会放入数组中。
	float temp;
	cout << "First value: ";
	cin >> temp;
	// 先采集邻居的 naaq 值，放在一个数组里面
	while (i < ArSize && temp >= 0) // 2 个退出原则
	{
		naaq[i] = temp;
		++i;
		if (i < ArSize) // 数组中还有剩余空间
		{
			cout << "Next value: ";
			cin >> temp; // 所以获取下一个值
		}
	}
	if (i == 0)
	{
		cout << "No data--bye\n";
	}
	else
	{
		// 输入自己的 naaq 值，与邻居们的值进行比较。
		cout << "Enter your NAAQ: ";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++)
		{
			if (naaq[j] > you)
			{
				++count;
			}
		}
		cout << count;
		cout << " of your neighbors have greater awareness of\n"
			<< "the New Age than you do.\n";
	}
	return 0;
}

/*
Enter the NAAQs (New Age Awareness Quotients) of
your neighbors. Program terminates when you make
6 entries or enter a negative value.
First value: 100
Next value: 80
Next value: 99
Next value: 77
Next value: 66
Next value: 44
Enter your NAAQ: 101
0 of your neighbors have greater awareness of
the New Age than you do.
*/