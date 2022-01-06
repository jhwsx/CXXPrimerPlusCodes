// 4.16 初始化一个指针变量
#include <iostream>

int main_16()
{
	using namespace std;

	int higgens = 5;
	int* pt = &higgens;

	cout << "Value of higgens = " << higgens
		<< "; Address of higgens = " << &higgens << endl;
	cout << "Value of *pt = " << *pt
		<< "; Value of pt = " << pt << endl;
	return 0;
}
/*
Value of higgens = 5; Address of higgens = 00B8FD18
Value of *pt = 5; Value of pt = 00B8FD18
*/

