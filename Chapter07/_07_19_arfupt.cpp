// ����ָ������
#include <iostream>

const double* f1(const double ar[], int n);
const double* f2(const double [], int);
const double* f3(const double *, int);

int main_19()
{
	using namespace std;
	double av[3] = {1112.3, 1542.6, 2227.9};

	// ָ������ָ�������Ҳ���Ǻ���ָ�룬�Ѻ���ԭ�͵ĺ������ֻ��� (*pf) �ͺ���
	const double* (*p1)(const double*, int) = f1;
	auto p2 = f2; // C++11 �Զ������ƶ�
	const double* (*p22)(const double*, int) = f2; // C++11 ֮ǰҪ����д
	cout << "Using pointers to functions:\n";
	cout << " Address Value\n";
	// (*p1)(av, 3) �ȼ��� f1(av, 3)�������� f1 ���������ص���һ�� double* ���͵�ָ��
	// *(*p1)(av, 3) ����һ��double���͵�ֵ��
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
	// p2(av, 3) �ȼ��� f2(av, 3)�������� f2 ���������ص���һ�� double* ���͵�ָ��
	// *p2(av, 3) ����һ��double���͵�ֵ��
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

	// pa ��һ������ָ�����飬����ÿһ��Ԫ�ض���һ������ָ�롣
	// ����� [3] ��ʾ���������һ��������������ָ������顣
	// *pa[3] ���� pa ��һ����������ָ������顣
	// const double* (*pa[3])(const double*, int) �г��� *pa[3] ����Ĳ���������ָ������͡�
	const double* (*pa[3])(const double*, int) = {f1, f2, f3};
	auto pb = pa; // C++11 �Զ������ƶ�, pb ָ���� pa �ĵ�һ��Ԫ��
	const double* (**pbb)(const double*, int) = pa; // C++11 ֮ǰҪ����д
	cout << "\nUsing an array of pointers to functions:\n";
	cout << " Address Value\n";
	for (int i = 0; i < 3; i++)
	{
		// pa[i](av, 3) ��ʾȡ�� pa �������ָ������ĵ� i ��Ԫ�أ���һ������ָ�룬���ݲ��� av, 3 �������������ص���һ�� double* ���͵�ָ�롣
		// *pa[i](av, 3) ����һ��double���͵�ֵ�ˡ�
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	}
	cout << "\nUsing a pointer to a pointer to a function:\n";
	cout << " Address Value\n";
	for (int i = 0; i < 3; i++)
	{
		cout << pb[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	}

	// ָ����ָ�������ָ������أ�
	cout << "\nUsing pointers to an array of pointers:\n";
	cout << " Address Value\n";
	auto pc = &pa;
	const double* (*(*pcc)[3])(const double*, int) = &pa; // C++11 ֮ǰҪ����д
	// *pc ���Ǻ���ָ��������
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
	// ����һ��ָ�룬����Ҫʹ��С���Ű���*pd���� pd �� * �Ƚ�ϡ�
	const double* (*(*pd)[3])(const double*, int) = &pa;
	const double* pdb = (*pd)[1](av, 3);
	cout << pdb << ": " << *pdb << endl;
	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;

	cout << "pa vs &pa: " << endl;
	// pa �������һ��Ԫ�صĵ�ַ����&pa[0]���ǵ���ָ��ĵ�ַ��
	// &pa ���������飨������ָ��飩�ĵ�ַ��
	cout << "pa = " << pa << ", pa + 1 = " << pa + 1 << endl; // ����4���ֽ�
	cout << "&pa = " << &pa << ", &pa + 1 = " << &pa + 1 << endl; // ����12���ֽ�

	// ʹ�ùؼ��� typedef �������ͱ�����
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
pa = 00EFF894, pa + 1 = 00EFF898	// ������4���ֽ�
&pa = 00EFF894, &pa + 1 = 00EFF8A0  // ������12���ֽ�
*/