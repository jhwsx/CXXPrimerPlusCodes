#include<iostream>

template<class T>
T lesser(T a, T b) // #1
{
	return a < b ? a : b;
}


int lesser(int a, int b) // #2
{
	// 这里是比较绝对值的大小。
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

// -> double 被称为后置返回类型。
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

	cout << lesser(m, n) << endl; // 使用 #2，这是优先匹配的。
	cout << lesser(x, y) << endl; // 使用 #1，因为 #2 不匹配
	cout << lesser<>(m, n) << endl; // <> 指出编译器应选择模板函数，而不是非模板函数，所以使用 #1
	cout << lesser<int>(x, y) << endl; // 显式实例化，所以使用 #1，x 和 y 的值会被转为 int，也就是 15 和 25 了。

	// 额外的代码片段 p297
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
