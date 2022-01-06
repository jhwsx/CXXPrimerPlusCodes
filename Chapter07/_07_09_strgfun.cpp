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

// const char* str ��ʾ str ���ָ��ָ��ı������ݲ������޸ģ������Ͳ����������޸�ԭʼ�ַ����ˡ�
unsigned int c_in_str(const char* str, char ch)
{
	unsigned int count = 0;
	while (*str) // ������ '\0'���ͽ���ѭ���ˡ�
	{
		if (*str == ch)
		{
			count++;
		}
		str++; // ��ָ���ƶ�����һ���ַ�
	}
	return count;
}
// ʹ�������ʾ��
unsigned int c_in_str2(const char str[], char ch)
{
	unsigned int count = 0;
	while (*str) // ������ '\0'���ͽ���ѭ���ˡ�
	{
		if (*str == ch)
		{
			count++;
		}
		str++; // ��ָ���ƶ�����һ���ַ�
	}
	return count;
}
/*
3 m characters in minimum
2 u characters in ululate
3 m characters in minimum
2 u characters in ululate
*/