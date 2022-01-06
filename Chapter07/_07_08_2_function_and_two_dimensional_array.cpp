#include <iostream>
// 指针数组 与 数组指针
// 参考：https://blog.csdn.net/men_wen/article/details/52694069
// 参考：https://www.cnblogs.com/mq0036/p/3382732.html
// int(*arr)[4] 是指向由 4 个 int 组成的数组的指针，是二维数组的首地址，相当于 int arr[][4]，数组指针，指向有4个数组组成的数组。
// int* arr[4] 是一个由 4 个指向 int 的指针组成的数组，是一维数组，数组的每一个元素是一个指向 int 的指针
// size 是二维数组的元素个数，即行数
int sum_two_dimensional_array(int(*arr)[4], int size);
// 等价于
int sum_two_dimensional_array2(int arr[][4], int size);

int main_08_2()
{
	using namespace std;

	int data[3][4] =
	{
		{1, 2, 3, 4},
		{9, 8, 7, 6},
		{2, 4, 6, 8},
	};
	cout << sum_two_dimensional_array(data, 3) << endl;
	cout << sum_two_dimensional_array2(data, 3) << endl;

	return 0;
}

int sum_two_dimensional_array(int(*arr)[4], int size)
{
	int total = 0;
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < 4; c++)
		{
			total += arr[r][c];
		}
	}
	return total;
}

int sum_two_dimensional_array2(int arr[][4], int size)
{
	int total = 0;
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < 4; c++)
		{
			total += arr[r][c];
		}
	}
	return total;
}
