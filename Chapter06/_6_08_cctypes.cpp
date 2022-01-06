#include <iostream>
#include <cctype> // 字符函数原型
int main_08()
{
	using namespace std;
	cout << "Enter text for analysis, and type @"
		" to terminate input.\n";
	char ch;
	// 计数器：用于记录各种字符的个数。
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;
	// 输入一个字符
	cin.get(ch);
	while (ch != '@')
	{
		if (isalpha(ch))
		{
			chars++;
		}
		else if (isspace(ch))
		{
			whitespace++;
		}
		else if (isdigit(ch))
		{
			digits++;
		}
		else if (ispunct(ch))
		{
			punct++;
		}
		else
		{
			others++;
		}
		cin.get(ch);
	}

	// 输出
	cout << chars << " letters, "
		<< whitespace << " whitespace, "
		<< digits << " digits, "
		<< punct << " punctuations, "
		<< others << " others. \n";
	return 0;
}

/*
Enter text for analysis, and type @ to terminate input.
May: Hi, how is it going?
John: Fine, and you?
May: Not bad. See you tomorrow.
Jonh: Ok,Bye,May.
@
66 letters, 18 whitespace, 0 digits, 13 punctuations, 0 others.
*/