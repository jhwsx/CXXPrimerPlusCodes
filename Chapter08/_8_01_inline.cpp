// 使用一个内联函数
// 程序员请求将函数作为内联函数时，编译器不一定会满足这种要求。
#include <iostream>

inline double square(double x) { return x * x; }
int main_01()
{
	using namespace std;
	double a;
	double b;
	double c = 13.0;

	a = square(5.0);
	b = square(4.5 + 7.5);
	cout << "a = " << a << ", b = " << b << endl;
	cout << "c = " << c;
	cout << ", c squared = " << square(c++) << endl;
	cout << "Now c is " << c << endl;
	return 0;
}

/*
a = 25, b = 144
c = 13, c squared = 169
Now c is 14
*/