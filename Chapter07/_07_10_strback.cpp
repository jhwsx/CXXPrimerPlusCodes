// 返回一个字符串
#include <iostream>

char* buildStr(char c, int n);
int main_10()
{
	using namespace std;
	int times;
	char ch;

	cout << "Enter a char: ";
	cin >> ch;
	cout << "Enter an integer: ";
	cin >> times;

	char* ps = buildStr(ch, times);
	cout << ps << endl;
	delete[] ps;
	ps = buildStr('+', 20);
	cout << ps << "-DONE-" << ps << endl;
	delete[] ps;
	return 0;
}

char* buildStr(char c, int n)
{
	char* pstr = new char[n + 1]; // 多出来一个是存放空值字符的。
	pstr[n] = '\0';
	while (n-- > 0)
	{
		pstr[n] = c;
	}
	return pstr;
}
/*
Enter a char: V
Enter an integer: 30
VVVVVVVVVVVVVVVVVVVVVVVVVVVVVV
++++++++++++++++++++-DONE-++++++++++++++++++++
*/