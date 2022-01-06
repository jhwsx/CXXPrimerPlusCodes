#include <iostream>

unsigned int c_in_str(const char * str, char ch);
unsigned int c_in_str2(const char str[], char ch);
int main_09()
{
	using namespace std;
	char mm[15] = "minimum";
	const char* wail = "ululate";

	unsigned int ms = c_in_str(mm, 'm');
	unsigned int us = c_in_str(wail, 'u');

	unsigned int ms2 = c_in_str2(mm, 'm');
	unsigned int us2 = c_in_str2(wail, 'u');

	cout << ms << " m characters in " << mm << endl;
	cout << us << " u characters in " << wail << endl;

	cout << ms2 << " m characters in " << mm << endl;
	cout << us2 << " u characters in " << wail << endl;
	return 0;
}

// const char* str 表示 str 这个指针指向的变量内容不可以修改，这样就不允许函数内修改原始字符串了。
unsigned int c_in_str(const char* str, char ch)
{
	unsigned int count = 0;
	while (*str) // 最后读到 '\0'，就结束循环了。
	{
		if (*str == ch)
		{
			count++;
		}
		str++; // 将指针移动到下一个字符
	}
	return count;
}
// 使用数组表示法
unsigned int c_in_str2(const char str[], char ch)
{
	unsigned int count = 0;
	while (*str) // 最后读到 '\0'，就结束循环了。
	{
		if (*str == ch)
		{
			count++;
		}
		str++; // 将指针移动到下一个字符
	}
	return count;
}
/*
3 m characters in minimum
2 u characters in ululate
3 m characters in minimum
2 u characters in ululate
*/