// 使用 cin.get(char)
#include <iostream>

int main_17()
{
	using namespace std;
	char ch;
	int count = 0;
	cout << "Enter characters; enter # to quit:\n";
	// cin.get(char) 读取输入中的下一个字符（即便它是空格）
	cin.get(ch);
	while (ch != '#')
	{
		cout << ch;
		count++;
		cin.get(ch);
	}
	cout << endl << count << " characters read.\n";
	return 0;
}
/*
Enter characters; enter # to quit:
Did you use a #2 pencil?
Did you use a
14 characters read.
*/