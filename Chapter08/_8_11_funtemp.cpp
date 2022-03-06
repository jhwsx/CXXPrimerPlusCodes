// 使用函数模板
#include <iostream>

// template 和 typename 是关键字
// template <typename T>
template <class T> // 等价写法
void Swap(T& a, T& b);


int main_11()
{
	using namespace std;
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << endl;
	cout << "Use compiler-generated int swapper:\n";
	Swap(i, j); // call generated void Swap(int& a, int& b);
	cout << "Now i, j = " << i << ", " << j << endl;

	double x = 10.5;
	double y = 20.6;
	cout << "x, y = " << x << ", " << y << endl;
	cout << "Use compiler-generated double swapper:\n";
	Swap(x, y); // call generated void Swap(double& a, double& b);
	cout << "Now x, y = " << x << ", " << y << endl;
	return 0;
}

template<class T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
/*
i, j = 10, 20
Use compiler-generated int swapper:
Now i, j = 20, 10
x, y = 10.5, 20.6
Use compiler-generated double swapper:
Now x, y = 20.6, 10.5
*/