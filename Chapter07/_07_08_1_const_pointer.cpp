#include <iostream>

int main_08_1()
{
	using namespace std;
	int age = 39;
	// 声明一个指向常量的指针，防止指针修改所指向的变量的值。
	const int* pt = &age;
	// *pt += 1; // 报错啦
	// cin >> *pt; // 报错啦

	const float g_earth = 9.80f;
	const float* pe = &g_earth; // 正确，可以将const变量的地址赋值给指向 const 的指针。

	const float g_moon = 1.63f;
	// float* pm = &g_moon; // 报错了，不可以将 const 变量的地址赋值给普通指针。

	int age1 = 39;
	int* pd = &age1;
	const int* pt1 = pd;
	// *pt1 = 42; // 报错了

	// TODO 这点不理解
	// const int** pp2;
	// int* p1;
	const int n = 13;
	// pp2 = &p1; // 报错了，cannot convert from 'int **' to 'const int **'
	// *pp2 = &n;
	// *p1 = 10;


	int sloth = 3;
	const int* ps = &sloth; // 不可以通过 ps 指针改变其所指向的变量。
	int* const finger = &sloth; // 不可以改变 finger 指针所存放的地址。
	*finger = 4; // 正确
	// finger = ps; // 错误，禁止改变
	return 0;
}