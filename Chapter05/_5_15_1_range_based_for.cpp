// 基于范围的 for 循环（C++11）
#include <iostream>

int main_15_1()
{
	using namespace std;
	double prices[5] = {4.99, 10.99, 5.99, 7.99, 2.99};
	for (double x : prices)
	{
		cout << x << endl;
	}

	cout << "------------" << endl;

	for (double& x : prices) // 不加&，也可以。到底加不加？
	{
		x = x * 0.8;
		cout << x << endl;
	}
	return 0;
}

/*
4.99
10.99
5.99
7.99
2.99
------------
3.992
8.792
4.792
6.392
2.392
*/