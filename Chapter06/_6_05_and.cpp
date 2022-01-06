#include <iostream>

int main_05()
{
	const int ArSize = 6;
	using namespace std;
	float naaq[ArSize];
	cout << "Enter the NAAQs (New Age Awareness Quotients) "
		<< "of\nyour neighbors. Program terminates "
		<< "when you make\n" << ArSize << " entries "
		<< "or enter a negative value.\n";

	int i = 0;
	// ������ֵ��ʱ���� temp �������棬�Ⱥ�ʵ������Чʱ�Ż���������С�
	float temp;
	cout << "First value: ";
	cin >> temp;
	// �Ȳɼ��ھӵ� naaq ֵ������һ����������
	while (i < ArSize && temp >= 0) // 2 ���˳�ԭ��
	{
		naaq[i] = temp;
		++i;
		if (i < ArSize) // �����л���ʣ��ռ�
		{
			cout << "Next value: ";
			cin >> temp; // ���Ի�ȡ��һ��ֵ
		}
	}
	if (i == 0)
	{
		cout << "No data--bye\n";
	}
	else
	{
		// �����Լ��� naaq ֵ�����ھ��ǵ�ֵ���бȽϡ�
		cout << "Enter your NAAQ: ";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++)
		{
			if (naaq[j] > you)
			{
				++count;
			}
		}
		cout << count;
		cout << " of your neighbors have greater awareness of\n"
			<< "the New Age than you do.\n";
	}
	return 0;
}

/*
Enter the NAAQs (New Age Awareness Quotients) of
your neighbors. Program terminates when you make
6 entries or enter a negative value.
First value: 100
Next value: 80
Next value: 99
Next value: 77
Next value: 66
Next value: 44
Enter your NAAQ: 101
0 of your neighbors have greater awareness of
the New Age than you do.
*/