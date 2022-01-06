// 3.13 初始化进行的转换
#include <iostream>

int main13()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3; // int 转换为 float
	int guess = 3.9832; // double 转换为 int
	int debt = 7.2E12; // 在 C++ 中结果未定义
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;

	cout << "###############################" << endl;

	const int code = 66;
	int x = 66;
	// char c1{31325}; // 窄化转换，不允许的
	char c2 = {66}; // 可以存放，允许
	char c3{code}; // 可以存放，允许
	// TODO(这里不懂)
	// char c4 = {x}; // 不允许，x 不是常量
	x = 31325;
	char c5 = x; // 这种会进行窄化转换的，允许转换

	cout << "###############################" << endl;

	int thorn = 1000;
	long thorn_long =(long) thorn; // C 语言的写法
	long thorn_long2 =long (thorn); // C++ 语言的写法，强制类型转换就像是函数调用了。
	long thorn_long3 = static_cast<long>(thorn);
	cout << thorn_long << endl;
	cout << thorn_long2 << endl;
	cout << thorn_long3 << endl;

	cout << int('Q') << endl;
	cout << 'Q' << endl;
	return 0;
}

/*
tree = 3.000000
guess = 3
debt = 1634811904
###############################
###############################
1000
1000
1000
81
Q
*/