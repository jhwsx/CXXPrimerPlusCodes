#include <iostream>

int main_review()
{
	/*
	1. 入口条件循环，先执行循环测试条件再执行循环体，如 for，while；出口条件循环，先执行循环体再执行循环测试条件，如 do while
	*/
	/*
	2. 01234
	*/
	using std::cout;
	using std::endl;
	int i;
	for (i = 0; i < 5; i++)
		cout << i;
		cout << endl;
	/*
	3.
	0369
	12
	*/
	int j;
	for (j = 0; j < 11; j += 3)
		cout << j;
	cout << endl << j << endl;
	/*
	4.
	6
	8
	*/
	int jj = 5;
	while (++jj < 9)
	{
		cout << jj++ << endl;
	}
	/*
	5.
	k = 8
	*/
	int k = 8;
	do
		cout << "k = " << k << endl;
	while (k++ < 5);
	/*
	6.
	1、2、4、8、16、32、64
	*/
	int n;
	for (n = 1; n < 100; n *= 2)
	{
		if (n > 1)
			cout << "、";
		cout << n;
	}
	cout << endl;
	/*
	7.使用语句块
	*/
	/*
	8.x = 20, y = 1
	*/
	int x = (1, 024); // x 的值为 20
	int y;
	y = 1, 024; // y 的值为 1，因为逗号运算符的优先级最低
	cout << "x = " << x << ", y = " << y << endl;
	/*
	9.
	cin>>ch：会忽略空格和换行符
	cin.get(ch)：读取逐个字符
	ch=cin.get()：读取逐个字符，有返回值
	*/
	return 0;
}