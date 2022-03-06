// 函数指针数组
#include <iostream>

const double* f1(const double ar[], int n);
const double* f2(const double [], int);
const double* f3(const double *, int);

int main_19()
{
	using namespace std;
	double av[3] = {1112.3, 1542.6, 2227.9};

	// 指向函数的指针变量，也就是函数指针，把函数原型的函数名字换成 (*pf) 就好了
	const double* (*p1)(const double*, int) = f1;
	auto p2 = f2; // C++11 自动类型推断
	const double* (*p22)(const double*, int) = f2; // C++11 之前要这样写
	cout << "Using pointers to functions:\n";
	cout << " Address Value\n";
	// (*p1)(av, 3) 等价于 f1(av, 3)，即调用 f1 函数，返回的是一个 double* 类型的指针
	// *(*p1)(av, 3) 就是一个double类型的值。
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
	// p2(av, 3) 等价于 f2(av, 3)，即调用 f2 函数，返回的是一个 double* 类型的指针
	// *p2(av, 3) 就是一个double类型的值。
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

	// pa 是一个函数指针数组，它的每一个元素都是一个函数指针。
	// 这里的 [3] 表示这个数组是一个包含三个函数指针的数组。
	// *pa[3] 表明 pa 是一个包含三个指针的数组。
	// const double* (*pa[3])(const double*, int) 中除了 *pa[3] 以外的部分描述了指针的类型。
	const double* (*pa[3])(const double*, int) = {f1, f2, f3};
	auto pb = pa; // C++11 自动类型推断, pb 指向了 pa 的第一个元素
	const double* (**pbb)(const double*, int) = pa; // C++11 之前要这样写
	cout << "\nUsing an array of pointers to functions:\n";
	cout << " Address Value\n";
	for (int i = 0; i < 3; i++)
	{
		// pa[i](av, 3) 表示取出 pa 这个函数指针数组的第 i 个元素，即一个函数指针，传递参数 av, 3 来调用它，返回的是一个 double* 类型的指针。
		// *pa[i](av, 3) 就是一个double类型的值了。
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	}
	cout << "\nUsing a pointer to a pointer to a function:\n";
	cout << " Address Value\n";
	for (int i = 0; i < 3; i++)
	{
		cout << pb[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	}

	// 指向函数指针数组的指针变量呢？
	cout << "\nUsing pointers to an array of pointers:\n";
	cout << " Address Value\n";
	auto pc = &pa;
	const double* (*(*pcc)[3])(const double*, int) = &pa; // C++11 之前要这样写
	// *pc 就是函数指针数组了
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
	// 这是一个指针，所以要使用小括号包裹*pd，让 pd 与 * 先结合。
	const double* (*(*pd)[3])(const double*, int) = &pa;
	const double* pdb = (*pd)[1](av, 3);
	cout << pdb << ": " << *pdb << endl;
	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;

	cout << "pa vs &pa: " << endl;
	// pa 是数组第一个元素的地址，即&pa[0]，是单个指针的地址。
	// &pa 是整个数组（即三个指针块）的地址。
	cout << "pa = " << pa << ", pa + 1 = " << pa + 1 << endl; // 后移4个字节
	cout << "&pa = " << &pa << ", &pa + 1 = " << &pa + 1 << endl; // 后移12个字节

	// 使用关键字 typedef 创建类型别名。
	typedef const double* (*p_fun)(const double*, int);
	p_fun pf = f1;
	return 0;
}

const double* f1(const double * ar, int n)
{
	return ar;
}

const double* f2(const double ar[], int n)
{
	return ar + 1;
}

const double* f3(const double ar[], int n)
{
	return ar + 2;
}
/*
Using pointers to functions:
 Address Value
00EFF8CC: 1112.3
00EFF8D4: 1542.6

Using an array of pointers to functions:
 Address Value
00EFF8CC: 1112.3
00EFF8D4: 1542.6
00EFF8DC: 2227.9

Using a pointer to a pointer to a function:
 Address Value
00EFF8CC: 1112.3
00EFF8D4: 1542.6
00EFF8DC: 2227.9

Using pointers to an array of pointers:
 Address Value
00EFF8CC: 1112.3
00EFF8D4: 1542.6
00EFF8DC: 2227.9
pa vs &pa:
pa = 00EFF894, pa + 1 = 00EFF898	// 后移了4个字节
&pa = 00EFF894, &pa + 1 = 00EFF8A0  // 后移了12个字节
*/