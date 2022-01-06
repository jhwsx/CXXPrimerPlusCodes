#include <iostream>

int main_14()
{
	const int Max = 5;
	using namespace std;
	// get data
	int golf[Max];
	cout << "Please enter your golf scores.\n";
	cout << "You must enter " << Max << " rounds.\n";
	int i;
	for (i = 0; i < Max; i++)
	{
		cout << "round #" << i + 1 << ": ";
		while (!(cin >> golf[i])) // û���������ֻ�����ѭ��
		{
			// ���������� cin��Ȼ�����ɾ���������롣
			cin.clear(); // ���ʡ��������䣬���򽫾ܾ�������ȡ���롣
			while (cin.get() != '\n') 
			{
				continue; // ��������������
			}
			cout << "Please enter a number: "; // �������ʱ�����򾭹������Ҫ���û��������롣
		}
	}
	// calculate the average
	double total = 0.0;
	for (int j = 0; j < i; j++)
	{
		total += golf[j];
	}
	// report the result
	cout << total / Max << " = average score "
		<< Max << " rounds\n";
	
	cout << "Done.\n";
	return 0;
}
/*
Please enter your golf scores.
You must enter 5 rounds.
round #1: 2
round #2: 3
round #3: 4
round #4: dddd
Please enter a number: eeee
Please enter a number: ����
Please enter a number: ����������
Please enter a number: ddddss
Please enter a number: 5
round #5: 2
3.2 = average score 5 rounds
Done.
*/