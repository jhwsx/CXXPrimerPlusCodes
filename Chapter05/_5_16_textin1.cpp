// 使用 while 循环来读取字符
#include <iostream>

int main_16()
{
	using namespace std;
	char ch;
	int count = 0;
	cout << "Enter characters; enter # to quit:\n";
	// 读取 char 时，与读取其他基本类型一样，cin 将忽略空格和换行符。
	cin >> ch;
	while (ch != '#')
	{
		cout << ch;
		count++;
		cin >> ch;
	}
	cout << endl << count << " characters read.\n";
	return 0;
}
/*
Enter characters; enter # to quit:
see ken run#really fast
seekenrun
9 characters read.
*/