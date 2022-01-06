#include <iostream>
// ָ������ �� ����ָ��
// �ο���https://blog.csdn.net/men_wen/article/details/52694069
// �ο���https://www.cnblogs.com/mq0036/p/3382732.html
// int(*arr)[4] ��ָ���� 4 �� int ��ɵ������ָ�룬�Ƕ�ά������׵�ַ���൱�� int arr[][4]������ָ�룬ָ����4��������ɵ����顣
// int* arr[4] ��һ���� 4 ��ָ�� int ��ָ����ɵ����飬��һά���飬�����ÿһ��Ԫ����һ��ָ�� int ��ָ��
// size �Ƕ�ά�����Ԫ�ظ�����������
int sum_two_dimensional_array(int(*arr)[4], int size);
// �ȼ���
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
