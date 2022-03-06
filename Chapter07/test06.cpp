#include <iostream>

using namespace std;

int fill_array_2(double ar[], int limit);
void show_array_2(const double ar[], int size);
void reverse_array_2(double ar[], int size);
int main_test06()
{
	const int Max = 10;
	double array[Max];
	int size = fill_array_2(array, Max);
	show_array_2(array, size);
	reverse_array_2(array, size);
	show_array_2(array, size);
	return 0;
}

int fill_array_2(double ar[], int limit)
{
	// ��ʾ�û�����ֵ
	// ��������������Ƿ�ʱ�������ֹͣ
	// ��¼ʵ��������������ָ���
	int i;
	int counter = 0;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter number#" << i + 1 << ": ";
		cin >> ar[i];
		if (cin)
		{
			// ����ɹ�����������
			counter++;
		}
		else
		{
			// ����Ƿ�������ѭ��
			break;
		}
	}
	return counter;
}

void show_array_2(const double ar[], int size)
{
	int i;
	cout << "[";
	for (i = 0; i < size; i++)
	{
		if (i > 0) cout << ", ";
		cout << ar[i];
	}
	cout << "]\n";
}

void reverse_array_2(double ar[], int size)
{
	// ��ת���˵�һ��Ԫ�غ����һ��Ԫ��֮�������Ԫ��
	int i;
	int j;
	for (i = 1, j = size - 2; i < j; i++, j--)
	{
		double temp = ar[i];
		ar[i] = ar[j];
		ar[j] = temp;
	}
}
/*
Enter number#1: 1.1
Enter number#2: 2.2
Enter number#3: 3.3
Enter number#4: 4.4
Enter number#5: 5.5
Enter number#6: q
[1.1, 2.2, 3.3, 4.4, 5.5]
[1.1, 4.4, 3.3, 2.2, 5.5]
*/