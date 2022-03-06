#include <iostream>

// �������
double* fill_array7(double ar[], int limit);
// ��ʾ����
void show_array7(const double* start, const double* end);
// �ع�����
void revalue7(double r, double* start, double* end);

int main_test07()
{
	const int Max = 5;
	using namespace std;
	double properties[Max];
	double* pend = fill_array7(properties, Max);
	show_array7(properties, pend);
	if (pend > properties)
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
		revalue7(factor, properties, pend);
		show_array7(properties, pend);
	}
	cout << "Done.\n";
	return 0;
}

double* fill_array7(double ar[], int limit)
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
	return ar + i;
}

void show_array7(const double* start, const double* end)
{
	using namespace std;
	const double* p;
	int i = 0;
	for (p = start; p + i != end; i++)
	{
		cout << "Property #" << i + 1 << ": $";
		cout << *(p + i) << endl;
	}
}

void revalue7(double r, double* start, double* end)
{
	double* p;
	int i = 0;
	for (p = start; p + i != end; i++)
	{
		(*(p + i)) *= r;
	}
}
/*
Enter value #1: 1000
Enter value #2: 2000
Enter value #3: 3000
Enter value #4: 3
Enter value #5: q
Bad input; input process terminated.
Property #1: $1000
Property #2: $2000
Property #3: $3000
Property #4: $3
Enter revaluation factor: 1.1
Property #1: $1100
Property #2: $2200
Property #3: $3300
Property #4: $3.3
Done.
*/