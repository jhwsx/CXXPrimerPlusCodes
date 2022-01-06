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
		while (!(cin >> golf[i])) // 没有输入数字会进入此循环
		{
			// 必须先重置 cin，然后才能删除错误输入。
			cin.clear(); // 如果省略这条语句，程序将拒绝继续读取输入。
			while (cin.get() != '\n') 
			{
				continue; // 消除掉坏的输入
			}
			cout << "Please enter a number: "; // 输入错误时，程序经过处理后，要求用户重新输入。
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
Please enter a number: 嗯嗯
Please enter a number: ·····
Please enter a number: ddddss
Please enter a number: 5
round #5: 2
3.2 = average score 5 rounds
Done.
*/