// 使用指定的步长
#include <iostream>

int main_05()
{
	using std::cout; // 这里是使用 using 声明。
	using std::cin;
	using std::endl;
	cout << "Enter an integer: ";
	int by;
	cin >> by;
	cout << "Counting by " << by << "s:\n";
	for (int i = 0; i < 100; i = i + by)
	{
		cout << i << endl;
	}
	return 0;
}
/*
Enter an integer: 17
Counting by 17s:
0
17
34
51
68
85
*/