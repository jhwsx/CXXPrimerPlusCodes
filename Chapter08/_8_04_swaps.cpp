// 使用引用，使用指针来交换两个数
#include <iostream>
// 引用常被用作函数参数
void swapr(int & a, int & b); // 可以交换值
void swapp(int* p, int* q); // 可以交换值
void swapv(int a, int b); // 这种不能交换值
int main_04()
{
	using namespace std;
	int wallet1 = 300;
	int wallet2 = 350;
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Using references to swap contents: \n";
	swapr(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Using pointers to swap contents again: \n";
	swapp(&wallet1, &wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Trying to use passing by values:\n";
	swapv(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;
	return 0;
}
// 这是按引用传递，这是 C 语言没有的
void swapr(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
// 这是按值传递，传递的是指针，也就是说传递的是地址
void swapp(int* p, int* q)
{
	int temp = *p; // 对指针变量使用解除引用运算符*
	*p = *q;
	*q = temp;
}
// 这是按值传递，传递的是调用程序的值的拷贝
void swapv(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
/*
wallet1 = $300 wallet2 = $350
Using references to swap contents:
wallet1 = $350 wallet2 = $300
Using pointers to swap contents again:
wallet1 = $300 wallet2 = $350
Trying to use passing by values:
wallet1 = $300 wallet2 = $350
*/