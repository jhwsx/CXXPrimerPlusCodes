// 定义和使用一个引用
#include <iostream>

int main_02()
{
	using namespace std;
	int rats = 101;
	// & 用来声明引用，int & 是一个整体，表示引用类型。
	int& rodents = rats; // rodents 是一个引用，是指向 int 变量 rats 的引用。
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	rodents++; // 改变引用变量的值
	cout << "rats = " << rats; // rats 的值也会跟着变化
	cout << ", rodents = " << rodents << endl;
	// 地址是一模一样的
	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;

	// 额外的代码片段
	// 必须在声明引用时将其初始化
	/*
	int man = 10;
	int& human; // 这里会报错
	human = man;
	*/
	// 这样会改变 woman 的值，因为 ref 是 woman 变量的别名。
	int woman = 10;
	int girl = 11;
	int& ref = woman;
	ref = girl; // 把 girl 的值赋值给 ref，这样实际上改变了 ref 和 woman 的值了。
	cout << "ref = " << ref << ", woman = " << woman << endl;
	return 0;
}
/*
rats = 101, rodents = 101
rats = 102, rodents = 102
rats address = 00000044B15AF694, rodents address = 00000044B15AF694
ref = 11, woman = 11
*/