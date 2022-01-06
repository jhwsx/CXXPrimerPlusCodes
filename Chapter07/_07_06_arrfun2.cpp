#include <iostream>
int sum_arr2(int arr[], int n);
int main_06()
{
	const int ArSize = 8;
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
	std::cout << cookies << " = array address, ";
	std::cout << sizeof cookies << " = sizeof cookies.\n"; // ��ȡ������������ĳ���
	int sum = sum_arr2(cookies, ArSize);
	std::cout << "Total cookies eaten: " << sum << std::endl;
	sum = sum_arr2(cookies, 3);
	std::cout << "First three eaters ate " << sum << " cookies.\n";
	sum = sum_arr2(cookies + 4, 4);
	std::cout << "Last four eaters ate " << sum << " cookies.\n";

	return 0;
}
// ���ҽ������ں���ͷ���ߺ���ԭ����ʱ��int* arr �� int arr[] �ĺ��������ͬ�ġ�
int sum_arr2(int arr[], int n)
{
	int total = 0;
	std::cout << arr << " = arr, ";
	std::cout << sizeof arr << " = sizeof arr\n"; // ��ȡ��ֻ��ָ������ĳ���
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	return total;
}
/*
00D3FAA8 = array address, 32 = sizeof cookies.
00D3FAA8 = arr, 4 = sizeof arr
Total cookies eaten: 255
00D3FAA8 = arr, 4 = sizeof arr
First three eaters ate 7 cookies.
00D3FAB8 = arr, 4 = sizeof arr
Last four eaters ate 240 cookies.
*/