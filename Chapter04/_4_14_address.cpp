// 4.14 使用 & 运算符（地址运算符）来找到地址
#include <iostream>

int main_14()
{
	using namespace std;
	int donuts = 6;
	double cups = 4.5;

	cout << "donuts value = " << donuts;
	cout << " and donuts address = " << &donuts << endl;

	cout << "cups value = " << cups;
	cout << " and cups address = " << &cups << endl;
	return 0;
}
/*
donuts value = 6 and donuts address = 012FFDC0
cups value = 4.5 and cups address = 012FFDB0
*/