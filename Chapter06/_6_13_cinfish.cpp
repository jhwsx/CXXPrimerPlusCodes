#include <iostream>

int main_13()
{
	const int Max = 5;
	using namespace std;
	// get data
	double fish[Max];
	cout << "Please enter the weights of your fish.\n";
	cout << "You may enter up to " << Max << " fish <q to terminate>.\n";
	cout << "fish #1: ";
	int i = 0;
	// 非数字输入会导致 cin 方法的调用返回 false
	// 如果 cin 位于测试条件中，则将被转换为 bool 类型。
	while (i < Max && cin >> fish[i]) 
	{
		if (++i < Max)
		{
			cout << "fish #" << i + 1 << ": ";
		}
	}
	// calculate the average
	double total = 0.0;
	for (int j = 0; j < i; j++)
	{
		total += fish[j];
	}
	// report the result
	if (i == 0)
	{
		cout << "No fish.\n";
	}
	else
	{
		cout << total / i << " = average weight of "
			<< i << " fish\n";
	}
	cout << "Done.\n";

	return 0;
}
/*
Please enter the weights of your fish.
You may enter up to 5 fish <q to terminate>.
fish #1: 35
fish #2: 25
fish #3: 10
fish #4: 5
fish #5: 60
27 = average weight of 5 fish
Done.
*/
// 终止循环
/*
Please enter the weights of your fish.
You may enter up to 5 fish <q to terminate>.
fish #1: 10
fish #2: 66
fish #3: 10
fish #4: 88
fish #5: q
43.5 = average weight of 4 fish
Done.
*/