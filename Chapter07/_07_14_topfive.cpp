// 处理 string 对象数组
#include <iostream>
#include <string>

using namespace std;

void display(const string sa[], int n);
int main_14()
{
	const int SIZE = 5;
	string list[SIZE];
	cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << ": ";
		getline(cin, list[i]);
	}

	cout << "Your list:\n";
	display(list, SIZE);
	return 0;
}

void display(const string sa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ": " << sa[i] << endl;
	}
}
/*
Enter your 5 favorite astronomical sights:
1: Jupiter
2: Moon
3: Sun
4: Earth
5: Mars
Your list:
1: Jupiter
2: Moon
3: Sun
4: Earth
5: Mars
*/