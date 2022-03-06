// ����Ĭ�ϲ������ַ�������
#include <iostream>

static const int ArSize = 80;
// ͨ������ԭ��������Ĭ��ֵ��
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
	// ����һ���ַ���
	char sample[ArSize];
	cout << "Enter a string:\n";
	cin.get(sample, ArSize);
	// ֻȡ�ַ�����ߵ�4���ַ�
	char* ps = left(sample, 4);
	cout << ps << endl;
	delete[] ps;
	ps = left(sample);
	cout << ps << endl;
	delete[] ps;

	// ����Ƭ��
	cube2(1.1); // ����� void cube2(double x) ���
	char* bits = new char[1];
	dribble(bits); // ֻ��ƥ�� dribble1 �ĵ���
	delete[] bits;
	const char* bitss = new char[1];
	dribble(bitss); // ֻ��ƥ�� dribble2 �ĵ���
	delete[] bitss;
	char bitsss[20] = "How's the weather?";
	dribble(bitsss); // ֻ��ƥ�� dribble1 �ĵ���
	const char bitssss[20] = "How's business?";
	dribble(bitssss); // ֻ��ƥ�� dribble2 �ĵ���
	return 0;
}
// ���������ϲ�������Ĭ�ϲ���
//char* left(const char* str, int n)
//{
//	if (n < 0)
//	{
//		n = 0;
//	}
//	int len = strlen(str);
//	n = (n < len) ? n : len; // �����û�����һ���ܴ�� n
//	char* p = new char[n + 1]; 
//	int i;
//	for (i = 0; i < n && str[i]; i++)
//		p[i] = str[i];
//	// ����ַ�����β������ֵ�ַ�
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
	// �Լ���д�����ȡ��ʵҪ��ȡ�ĳ��ȣ������Ͳ������� strlen ������
	int m = 0;
	while (m < n && str[m] != '\0')
		m++;
	char* p = new char[m + 1];
	int i;
	for (i = 0; i < m && str[i]; i++)
		p[i] = str[i];
	// ����ַ�����β������ֵ�ַ�
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