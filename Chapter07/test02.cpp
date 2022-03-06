#include <iostream>

using namespace std;

int fill_array(int ar[], int limit);
void show_array(const int ar[], int size);
double average_array(const int ar[], int size);
int main_test02()
{
	const int Max = 10;
	int grades[Max];
	// ����ɼ�
	int actual_size = fill_array(grades, Max);
	// ��ʾ�ɼ�
	show_array(grades, actual_size);
	// ����ƽ���ɼ�
	double average = average_array(grades, actual_size);
	cout << "average = " << average << endl;
	return 0;
}

int fill_array(int ar[], int limit)
{
	int i;
	int count = 0;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter grade#" << i + 1 << "��q to quit��: ";
		if (cin >> ar[i])
		{
			// ����ɹ���ʵ����Ŀ��1
			count++;
		} 
		else
		{
			break;
		}

	}
	return count;
}

void show_array(const int ar[], int size)
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

double average_array(const int ar[], int size)
{
	int i;
	int sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += ar[i];
	}
	return 1.0 * sum / size;
}
