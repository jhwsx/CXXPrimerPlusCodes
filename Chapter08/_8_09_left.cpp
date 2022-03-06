// 带有默认参数的字符串函数
#include <iostream>

static const int ArSize = 80;
// 通过函数原型来设置默认值。
char* left(const char* str, int n = 1);
void dribble(const char* cbits);
void dribble(char* bits);

void cube2(double x) 
{
	std::cout << "cube2(double x) called" << std::endl;
}
void cube2(double& x)
{
	std::cout << "cube2(double& x) called" << std::endl;
}
int main_09()
{
	using namespace std;
	// 输入一个字符串
	char sample[ArSize];
	cout << "Enter a string:\n";
	cin.get(sample, ArSize);
	// 只取字符串左边的4个字符
	char* ps = left(sample, 4);
	cout << ps << endl;
	delete[] ps;
	ps = left(sample);
	cout << ps << endl;
	delete[] ps;

	// 代码片段
	cube2(1.1); // 会调用 void cube2(double x) 这个
	char* bits = new char[1];
	dribble(bits); // 只会匹配 dribble1 的调用
	delete[] bits;
	const char* bitss = new char[1];
	dribble(bitss); // 只会匹配 dribble2 的调用
	delete[] bitss;
	char bitsss[20] = "How's the weather?";
	dribble(bitsss); // 只会匹配 dribble1 的调用
	const char bitssss[20] = "How's business?";
	dribble(bitssss); // 只会匹配 dribble2 的调用
	return 0;
}
// 函数定义上并不体现默认参数
//char* left(const char* str, int n)
//{
//	if (n < 0)
//	{
//		n = 0;
//	}
//	int len = strlen(str);
//	n = (n < len) ? n : len; // 避免用户输入一个很大的 n
//	char* p = new char[n + 1]; 
//	int i;
//	for (i = 0; i < n && str[i]; i++)
//		p[i] = str[i];
//	// 添加字符串结尾符：空值字符
//	while (i <= n)
//	{
//		p[i] = '\0';
//		i++;
//	}
//
//	return p;
//}

char* left(const char* str, int n)
{
	if (n < 0)
		n = 0;
	// 自己编写代码获取真实要截取的长度，这样就不用引入 strlen 函数了
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
void dribble(const char* bits)
{
	std::cout << "dribble2 called" << std::endl;
}

void dribble(char* bits)
{
	std::cout << "dribble1 called" << std::endl;
}


/*
Enter a string:
forthcoming
fort
f
cube2(double x) called
dribble1 called
dribble2 called
dribble1 called
dribble2 called
*/