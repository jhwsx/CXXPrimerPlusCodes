#include <iostream>

// �������
int fill_array(double ar[], int limit);
// ��ʾ����
void show_array(const double ar[], int n);
// �ع�����
void revalue(double r, double ar[], int n);

int main_07()
{
	const int Max = 5;
	using namespace std;
	double properties[Max];
	int size = fill_array(properties, Max);
	show_array(properties, size);
	if (size > 0)
	{
		// ��ȡ�ع�����
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}
	cout << "Done.\n";
	return 0;
}

int fill_array(double ar[], int limit)
{
	// ѭ����ֵ���뵽������
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter value #" << i + 1 << ": ";
		cin >> temp;
		if (!cin) // ����������ַ���
		{
			// �����ã������
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0) // ��ֵ������ѭ��
		{ 
			break;
		}
		else
		{
			ar[i] = temp;
		} 
	}
	// ����ʵ�ʵ���Ŀ
	return i;
}

// const ��ʾ�� show_array �����в���ʹ�� ar ���޸�Ԫ�ص�ֵ�ˡ�
void show_array(const double ar[], int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
	{
		cout << "Property #" << i + 1 << ": $";
		cout << ar[i] << endl;
	}
}
// ���޸������е�Ԫ�أ����Բ����� const ���������ˡ�
void revalue(double r, double ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		ar[i] *= r;
	}
}
/*
Enter value #1: 1000
Enter value #2: 2000
Enter value #3: 3000
Enter value #4: 1500
Enter value #5: 4500
Property #1: $1000
Property #2: $2000
Property #3: $3000
Property #4: $1500
Property #5: $4500
Enter revaluation factor: 1.1
Property #1: $1100
Property #2: $2200
Property #3: $3300
Property #4: $1650
Property #5: $4950
Done.
*/