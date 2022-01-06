// 一个有数组参数的函数
#include <iostream>
int sum_arr(int arr[], int n);
int main_05()
{
	using namespace std;
	const int ArSize = 8;
	int cookies[ArSize] = {1,2,4,8,16,32,64,128};

	int sum = sum_arr(cookies, ArSize);
	cout << "Total cookies eaten: " << sum << endl;
	return 0;
}
// 当且仅当用于函数头或者函数原型中时，int* arr 和 int arr[] 的含义才是相同的。
int sum_arr(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	return total;
}
/*
Total cookies eaten: 255
*/