// 重载 8.9 例子中的 left 函数，用于取出整数的前 n 位。
#include <iostream>

unsigned long left2(unsigned long num, unsigned ct);
char* left2(const char* str, int n = 1);
int main_10()
{
	using namespace std;
	const char* trip = "Hawaii!!";
	unsigned long n = 12345678;
	int i;
	char* temp;

	for (i = 1; i < 10; i++)
	{
		cout << left2(n, i) << endl;
		temp = left2(trip, i);
		cout << temp << endl;
		delete[] temp;
	}

	return 0;
}

unsigned long left2(unsigned long num, unsigned ct)
{
	if (ct < 0)
	{
		ct = 0;
	}
	int m = 1;
	int temp;
	int remainder = num;
	// 计算整数的位数
	while ((temp = remainder / 10) != 0)
	{
		remainder = temp;
		m++;
	}
	ct = ct < m ? ct : m;
	int count = m - ct;
	int result = num;
	while (count > 0)
	{
		result = result / 10;
		count--;
	}
	return result;
}

char* left2(const char* str, int n)
{
	if (n < 0)
	{
		n = 0;
	}
	int m = 0;
	while (m < n && str[m] != '\0')
		m++;
	char* p = new char[m + 1];
	int i;
	for (i = 0; i < m && str[i]; i++)
		p[i] = str[i];
	// 添加字符串结尾符：空值字符
	while (i <= m)
	{
		p[i] = '\0';
		i++;
	}

	return p;
}
/*
1
H
12
Ha
123
Haw
1234
Hawa
12345
Hawai
123456
Hawaii
1234567
Hawaii!
12345678
Hawaii!!
12345678
Hawaii!!
*/