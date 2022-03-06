#include<iostream>

template<class T>
T lesser(T a, T b) // #1
{
	return a < b ? a : b;
}


int lesser(int a, int b) // #2
{
	// �����ǱȽϾ���ֵ�Ĵ�С��
	a = a < 0 ? -a : a;
	b = b < 0 ? -b : b;
	return a < b ? a : b;
}

template<class T1, class T2>
void ft(T1 x, T2 y)
{
	// decltype(expression) var;
	decltype(x + y) xpy = x + y;

	typedef decltype(x + y) xytype;
}

// -> double ����Ϊ���÷������͡�
auto h(int x, float y) -> double;


template<class T1, class T2>
auto gt(T1 x, T2 y) -> decltype(x + y)
{
	return x + y;
}
int main_15()
{
	using namespace std;
	int m = 20;
	int n = -30;
	double x = 15.5;
	double y = 25.9;

	cout << lesser(m, n) << endl; // ʹ�� #2����������ƥ��ġ�
	cout << lesser(x, y) << endl; // ʹ�� #1����Ϊ #2 ��ƥ��
	cout << lesser<>(m, n) << endl; // <> ָ��������Ӧѡ��ģ�庯���������Ƿ�ģ�庯��������ʹ�� #1
	cout << lesser<int>(x, y) << endl; // ��ʽʵ����������ʹ�� #1��x �� y ��ֵ�ᱻתΪ int��Ҳ���� 15 �� 25 �ˡ�

	// ����Ĵ���Ƭ�� p297
	cout << gt(1.5, 100) << endl;
	cout << gt('a', 1) << endl;
	return 0;
}
/*
20
15.5
-30
15
101.5
98
*/

auto h(int x, float y) -> double
{
	return 0.0;
}
