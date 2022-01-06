// 递增操作符
#include <iostream>
int main_7()
{
	using std::cout;
	using std::endl;

	int a = 20;
	int b = 20;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "a++ = " << a++ << ", ++b = " << ++b << endl;
	cout << "a = " << a << ", b = " << b << endl;

	double arr[5] = {21.1, 32.8, 23.4, 45.2, 37.4};
	double* pt = arr;
	cout << "*++pt = " << *++pt << endl; // 32.8 前缀递增、前缀递减、解除引用运算符：从右向左的方式进行结合。
	double* pt2 = arr;
	cout << "*pt2++ = " << *pt2++ << endl; // 21.1 后缀递增、后缀递减：从左向右的方式进行结合
	return 0;
}
/*
a = 20, b = 20
a++ = 20, ++b = 21
a = 21, b = 21
*++pt = 32.8
*pt2++ = 21.1
*/