// һ������������ĺ���
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
// ���ҽ������ں���ͷ���ߺ���ԭ����ʱ��int* arr �� int arr[] �ĺ��������ͬ�ġ�
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